#!/usr/bin/env python3
#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

import sys

USAGE = "Usage: lanes ops_per_lane count unroll opcode [operand (expr|None)]..."

KERNEL_FILE_TEMPLATE = """
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "%(descr)s";
int lanes = %(lanes)s;
int lane_ops = %(lane_ops)s;
int block_inst = %(block_inst)s;
int unroll = %(unroll)s;

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
    print(USAGE, file=sys.stderr)
    sys.exit(100)


def int_arg(val, errmsg):
    try:
        return int(val)
    except ValueError:
        usage_error(errmsg)


def generate_c_file(lanes, ops_per_lane, count, unroll, opcode, formats, values):
    lines = []
    clobber = set()
    for i in range(count):
        operands = [fmt % val[i] if val is not None else fmt for (fmt, val) in zip(formats, values)]
        registers = [x.split(".")[0] for x in operands if not x.startswith("p")]
        clobber |= set(registers)
        lines.append('        "%s %s \\n\\t"' % (opcode, ", ".join(operands)))
    lines *= unroll
    body = "\n".join(lines)
    descr = " ".join(sys.argv[5:])
    clobber = ", ".join(sorted(['"%s"' % x for x in clobber]))
    print(KERNEL_FILE_TEMPLATE % {
            "descr": descr, 
            "lanes": lanes, 
            "lane_ops": ops_per_lane, 
            "block_inst": count, 
            "unroll": unroll, 
            "body": body,
            "clobber": clobber})


def main(argv):
    if len(argv) < 5:
        usage_error(USAGE)

    lanes = int_arg(argv[1], "Invalid lanes: %s" % argv[1])
    ops_per_lane = int_arg(argv[2], "Invalid ops_per_lane: %s" % argv[2])
    count = int_arg(argv[3], "Invalid count: %s" % argv[3])
    unroll = int_arg(argv[4], "Invalid unroll factor: %s" % argv[4])
    opcode = argv[5]
    fmt_str = argv[6::2]
    val_str = argv[7::2]

    if len(fmt_str) != len(val_str):
        usage_error("Invalid argument count")

    values = []
    for val in val_str:
        try:
            evaluated = eval(val)
        except SyntaxError as err:
            usage_error("Syntax error in operand range value: %s" % err.text)
        if (evaluated is not None) and (len(evaluated) != count):
            usage_error("Invalid length (%d) of operand range value: %s" % (len(evaluated), val))
        values.append(evaluated)
    generate_c_file(lanes, ops_per_lane, count, unroll, opcode, fmt_str, values)


if __name__ == "__main__":
    import sys
    main(sys.argv)
