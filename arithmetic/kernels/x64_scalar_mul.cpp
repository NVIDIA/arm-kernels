
//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
// Author: John Linford <jlinford@nvidia.com>
//
// This file was autogenerated by kgen.py
//


const char * description = "4( 8(SCALAR_MUL_64b) )";
unsigned long block_inst = 8;
unsigned long block_ops = (8*(1*1));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "mul x0, x4, x8 \n\t"
        "mul x1, x5, x9 \n\t"
        "mul x2, x6, x10 \n\t"
        "mul x3, x7, x11 \n\t"
        "mul x4, x8, x12 \n\t"
        "mul x5, x9, x13 \n\t"
        "mul x6, x10, x14 \n\t"
        "mul x7, x11, x15 \n\t"
        "mul x0, x4, x8 \n\t"
        "mul x1, x5, x9 \n\t"
        "mul x2, x6, x10 \n\t"
        "mul x3, x7, x11 \n\t"
        "mul x4, x8, x12 \n\t"
        "mul x5, x9, x13 \n\t"
        "mul x6, x10, x14 \n\t"
        "mul x7, x11, x15 \n\t"
        "mul x0, x4, x8 \n\t"
        "mul x1, x5, x9 \n\t"
        "mul x2, x6, x10 \n\t"
        "mul x3, x7, x11 \n\t"
        "mul x4, x8, x12 \n\t"
        "mul x5, x9, x13 \n\t"
        "mul x6, x10, x14 \n\t"
        "mul x7, x11, x15 \n\t"
        "mul x0, x4, x8 \n\t"
        "mul x1, x5, x9 \n\t"
        "mul x2, x6, x10 \n\t"
        "mul x3, x7, x11 \n\t"
        "mul x4, x8, x12 \n\t"
        "mul x5, x9, x13 \n\t"
        "mul x6, x10, x14 \n\t"
        "mul x7, x11, x15 \n\t"
        : /* no input */
        : /* no output */
        : "x0", "x1", "x10", "x11", "x12", "x13", "x14", "x15", "x2", "x3", "x4", "x5", "x6", "x7", "x8", "x9"
        );
    }
}

