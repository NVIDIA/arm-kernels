#!/usr/bin/env python3
#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

import sys
import argparse

KERNEL_FILE_TEMPLATE = """
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//
%(headers)s

const char * description = "%(descr)s";
unsigned long block_inst = %(block_inst)s;
unsigned long block_ops = %(block_ops)s;
unsigned long unroll = %(unroll)s;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
%(body)s
        : /* no input */
        : /* no output */
        : %(clobber)s
        );
    }
}
"""


def usage_error(*args, **kwargs):
    print(*args, file=sys.stderr, **kwargs)
    sys.exit(100)


def generate_block(lines, clobber, block_ops, blk):
    def ignore_register(x):
        return x[0] not in ("x", "w", "v", "z", "d", "s", "h")
    indent = 8*" "
    count = blk.count
    opcode = blk.opcode
    formats = blk.operand[0::2]
    values = []
    for val in blk.operand[1::2]:
        try:
            evaluated = eval(val)
        except SyntaxError as err:
            usage_error("Syntax error in operand range value: %s" % err.text)
        if (evaluated is not None) and (len(evaluated) != count):
            usage_error("Invalid length %d of operand range value '%s' (expected %d)" % (len(evaluated), val, count))
        values.append(evaluated)
    for i in range(count):
        operands = [fmt % val[i] if val is not None else fmt for (fmt, val) in zip(formats, values)]
        clobber |= set([x.split(".")[0] for x in operands if not ignore_register(x)])
        lines.append('%s"%s %s \\n\\t"' % (indent, opcode, ", ".join(operands)))
    if blk.isa == "SCALAR":
        lanes = "1"
    elif blk.isa == "NEON":
        lanes = "(128/%s)" % blk.typebits
    elif blk.isa == "SVE":
        lanes = "(8*svcntb()/%s)" % blk.typebits
    block_ops.append("(%s*(%s*%s))" % (blk.count, blk.laneops, lanes))


def describe(unroll, blocks):
    parts = ["%d(" % unroll]
    for blk in blocks:
        parts.append("%d(%s_%s_%db)" % (blk.count, blk.isa, blk.opcode.upper(), blk.typebits))
    parts.append(")")
    return " ".join(parts)


def generate(unroll, blocks):
    lines = []
    clobber = set()
    headers = set()
    block_ops = []
    for blk in blocks:
        generate_block(lines, clobber, block_ops, blk)
        if blk.isa == "SVE":
            headers.add("arm_sve.h")
    block_ops = "+".join(block_ops)
    block_inst = str(len(lines))
    lines *= unroll
    headers = "\n".join(["#include <%s>" % x for x in headers])
    body = "\n".join(lines)
    descr = describe(unroll, blocks)
    clobber = ", ".join(sorted(['"%s"' % x for x in clobber]))
    print(KERNEL_FILE_TEMPLATE % {
            "headers": headers,
            "descr": descr, 
            "block_inst": block_inst, 
            "block_ops": block_ops, 
            "unroll": unroll, 
            "body": body,
            "clobber": clobber})


def parse_args(args):
    block_parser = argparse.ArgumentParser(prog="", add_help=False)
    block_parser.add_argument("isa", choices=["SCALAR", "SVE", "NEON"], help="Instruction ISA")
    block_parser.add_argument("typebits", type=int, help="Size of the operation datatype in bits")
    block_parser.add_argument("laneops", type=int, help="Operations performed per lane")
    block_parser.add_argument("count", type=int, help="Instructions in the block")
    block_parser.add_argument("opcode", help="Instruction opcode")
    block_parser.add_argument("operand", nargs="+", help="Instruction operands")
    block_help = block_parser.format_usage().replace("usage: ", "")

    parser = argparse.ArgumentParser()
    parser.add_argument("-u", "--unroll", type=int, help="Number of times to unroll the loop", default=4)
    parser.add_argument("-b", required=True, nargs="+", metavar="block_template", dest="blocks", action="append", help=block_help)

    parsed = parser.parse_args(args)
    parsed.blocks = [block_parser.parse_args(blk) for blk in parsed.blocks]
    return parsed


def main(*args, **kwargs):
    parsed = parse_args(*args)
    generate(parsed.unroll, parsed.blocks)


if __name__ == "__main__":
    main(sys.argv[1:])
