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


def generate_block(lines, clobber, block_ops, ins):
    def ignore_register(x):
        return x.startswith("p")
    indent = 8*" "
    count = ins.count
    opcode = ins.opcode
    formats = ins.operand[0::2]
    values = []
    for val in ins.operand[1::2]:
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
    if ins.isa == "SCALAR":
        lanes = "1"
    elif ins.isa == "NEON":
        lanes = "(128/%s)" % ins.typebits
    elif ins.isa == "SVE":
        lanes = "(8*svcntb()/%s)" % ins.typebits
    block_ops.append("(%s*(%s*%s))" % (ins.count, ins.laneops, lanes))


def describe(unroll, instructions):
    parts = ["%d(" % unroll]
    for ins in instructions:
        parts.append("%d(%s_%s_%db)" % (ins.count, ins.isa, ins.opcode.upper(), ins.typebits))
    parts.append(")")
    return " ".join(parts)


def generate(unroll, instructions):
    lines = []
    clobber = set()
    headers = set()
    block_ops = []
    for ins in instructions:
        generate_block(lines, clobber, block_ops, ins)
        if ins.isa == "SVE":
            headers.add("arm_sve.h")
    block_ops = "+".join(block_ops)
    block_inst = str(len(lines))
    lines *= unroll
    headers = "\n".join(["#include <%s>" % x for x in headers])
    body = "\n".join(lines)
    descr = describe(unroll, instructions)
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
    ins_parser = argparse.ArgumentParser(prog="", add_help=False)
    ins_parser.add_argument("isa", choices=["SCALAR", "SVE", "NEON"])
    ins_parser.add_argument("typebits", type=int, help="Size of the destination datatype in bits")
    ins_parser.add_argument("laneops", type=int, help="Operations performed per lane")
    ins_parser.add_argument("count", type=int, help="Number of times to emit this instruction")
    ins_parser.add_argument("opcode", help="Instruction opcode")
    ins_parser.add_argument("operand", nargs="+", help="Instruction operands")
    ins_help = ins_parser.format_usage().replace("usage:  ", "")

    parser = argparse.ArgumentParser()
    parser.add_argument("-u", "--unroll", type=int, help="Number of times to unroll the loop", default=4)
    parser.add_argument("-i", required=True, nargs="+", metavar="instruction", dest="instructions", action="append", help=ins_help)

    parsed = parser.parse_args(args)
    parsed.instructions = [ins_parser.parse_args(ins) for ins in parsed.instructions]
    return parsed


def main(*args, **kwargs):
    parsed = parse_args(*args)
    generate(parsed.unroll, parsed.instructions)


if __name__ == "__main__":
    main(sys.argv[1:])
