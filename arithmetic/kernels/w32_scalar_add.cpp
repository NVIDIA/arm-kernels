
//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
// Author: John Linford <jlinford@nvidia.com>
//
// This file was autogenerated by kgen.py
//


const char * description = "4( 8(SCALAR_ADD_32b) )";
unsigned long block_inst = 8;
unsigned long block_ops = (8*(1*1));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "add w0, w4, w8 \n\t"
        "add w1, w5, w9 \n\t"
        "add w2, w6, w10 \n\t"
        "add w3, w7, w11 \n\t"
        "add w4, w8, w12 \n\t"
        "add w5, w9, w13 \n\t"
        "add w6, w10, w14 \n\t"
        "add w7, w11, w15 \n\t"
        "add w0, w4, w8 \n\t"
        "add w1, w5, w9 \n\t"
        "add w2, w6, w10 \n\t"
        "add w3, w7, w11 \n\t"
        "add w4, w8, w12 \n\t"
        "add w5, w9, w13 \n\t"
        "add w6, w10, w14 \n\t"
        "add w7, w11, w15 \n\t"
        "add w0, w4, w8 \n\t"
        "add w1, w5, w9 \n\t"
        "add w2, w6, w10 \n\t"
        "add w3, w7, w11 \n\t"
        "add w4, w8, w12 \n\t"
        "add w5, w9, w13 \n\t"
        "add w6, w10, w14 \n\t"
        "add w7, w11, w15 \n\t"
        "add w0, w4, w8 \n\t"
        "add w1, w5, w9 \n\t"
        "add w2, w6, w10 \n\t"
        "add w3, w7, w11 \n\t"
        "add w4, w8, w12 \n\t"
        "add w5, w9, w13 \n\t"
        "add w6, w10, w14 \n\t"
        "add w7, w11, w15 \n\t"
        : /* no input */
        : /* no output */
        : "w0", "w1", "w10", "w11", "w12", "w13", "w14", "w15", "w2", "w3", "w4", "w5", "w6", "w7", "w8", "w9"
        );
    }
}

