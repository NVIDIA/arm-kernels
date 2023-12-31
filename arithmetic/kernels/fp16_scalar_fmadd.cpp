
//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
// Author: John Linford <jlinford@nvidia.com>
//
// This file was autogenerated by kgen.py
//


const char * description = "4( 32(SCALAR_FMADD_16b) )";
unsigned long block_inst = 32;
unsigned long block_ops = (32*(2*1));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmadd h0, h8, h16, h0 \n\t"
        "fmadd h1, h9, h17, h1 \n\t"
        "fmadd h2, h10, h18, h2 \n\t"
        "fmadd h3, h11, h19, h3 \n\t"
        "fmadd h4, h12, h20, h4 \n\t"
        "fmadd h5, h13, h21, h5 \n\t"
        "fmadd h6, h14, h22, h6 \n\t"
        "fmadd h7, h15, h23, h7 \n\t"
        "fmadd h8, h16, h24, h8 \n\t"
        "fmadd h9, h17, h25, h9 \n\t"
        "fmadd h10, h18, h26, h10 \n\t"
        "fmadd h11, h19, h27, h11 \n\t"
        "fmadd h12, h20, h28, h12 \n\t"
        "fmadd h13, h21, h29, h13 \n\t"
        "fmadd h14, h22, h30, h14 \n\t"
        "fmadd h15, h23, h31, h15 \n\t"
        "fmadd h16, h24, h0, h16 \n\t"
        "fmadd h17, h25, h1, h17 \n\t"
        "fmadd h18, h26, h2, h18 \n\t"
        "fmadd h19, h27, h3, h19 \n\t"
        "fmadd h20, h28, h4, h20 \n\t"
        "fmadd h21, h29, h5, h21 \n\t"
        "fmadd h22, h30, h6, h22 \n\t"
        "fmadd h23, h31, h7, h23 \n\t"
        "fmadd h24, h0, h8, h24 \n\t"
        "fmadd h25, h1, h9, h25 \n\t"
        "fmadd h26, h2, h10, h26 \n\t"
        "fmadd h27, h3, h11, h27 \n\t"
        "fmadd h28, h4, h12, h28 \n\t"
        "fmadd h29, h5, h13, h29 \n\t"
        "fmadd h30, h6, h14, h30 \n\t"
        "fmadd h31, h7, h15, h31 \n\t"
        "fmadd h0, h8, h16, h0 \n\t"
        "fmadd h1, h9, h17, h1 \n\t"
        "fmadd h2, h10, h18, h2 \n\t"
        "fmadd h3, h11, h19, h3 \n\t"
        "fmadd h4, h12, h20, h4 \n\t"
        "fmadd h5, h13, h21, h5 \n\t"
        "fmadd h6, h14, h22, h6 \n\t"
        "fmadd h7, h15, h23, h7 \n\t"
        "fmadd h8, h16, h24, h8 \n\t"
        "fmadd h9, h17, h25, h9 \n\t"
        "fmadd h10, h18, h26, h10 \n\t"
        "fmadd h11, h19, h27, h11 \n\t"
        "fmadd h12, h20, h28, h12 \n\t"
        "fmadd h13, h21, h29, h13 \n\t"
        "fmadd h14, h22, h30, h14 \n\t"
        "fmadd h15, h23, h31, h15 \n\t"
        "fmadd h16, h24, h0, h16 \n\t"
        "fmadd h17, h25, h1, h17 \n\t"
        "fmadd h18, h26, h2, h18 \n\t"
        "fmadd h19, h27, h3, h19 \n\t"
        "fmadd h20, h28, h4, h20 \n\t"
        "fmadd h21, h29, h5, h21 \n\t"
        "fmadd h22, h30, h6, h22 \n\t"
        "fmadd h23, h31, h7, h23 \n\t"
        "fmadd h24, h0, h8, h24 \n\t"
        "fmadd h25, h1, h9, h25 \n\t"
        "fmadd h26, h2, h10, h26 \n\t"
        "fmadd h27, h3, h11, h27 \n\t"
        "fmadd h28, h4, h12, h28 \n\t"
        "fmadd h29, h5, h13, h29 \n\t"
        "fmadd h30, h6, h14, h30 \n\t"
        "fmadd h31, h7, h15, h31 \n\t"
        "fmadd h0, h8, h16, h0 \n\t"
        "fmadd h1, h9, h17, h1 \n\t"
        "fmadd h2, h10, h18, h2 \n\t"
        "fmadd h3, h11, h19, h3 \n\t"
        "fmadd h4, h12, h20, h4 \n\t"
        "fmadd h5, h13, h21, h5 \n\t"
        "fmadd h6, h14, h22, h6 \n\t"
        "fmadd h7, h15, h23, h7 \n\t"
        "fmadd h8, h16, h24, h8 \n\t"
        "fmadd h9, h17, h25, h9 \n\t"
        "fmadd h10, h18, h26, h10 \n\t"
        "fmadd h11, h19, h27, h11 \n\t"
        "fmadd h12, h20, h28, h12 \n\t"
        "fmadd h13, h21, h29, h13 \n\t"
        "fmadd h14, h22, h30, h14 \n\t"
        "fmadd h15, h23, h31, h15 \n\t"
        "fmadd h16, h24, h0, h16 \n\t"
        "fmadd h17, h25, h1, h17 \n\t"
        "fmadd h18, h26, h2, h18 \n\t"
        "fmadd h19, h27, h3, h19 \n\t"
        "fmadd h20, h28, h4, h20 \n\t"
        "fmadd h21, h29, h5, h21 \n\t"
        "fmadd h22, h30, h6, h22 \n\t"
        "fmadd h23, h31, h7, h23 \n\t"
        "fmadd h24, h0, h8, h24 \n\t"
        "fmadd h25, h1, h9, h25 \n\t"
        "fmadd h26, h2, h10, h26 \n\t"
        "fmadd h27, h3, h11, h27 \n\t"
        "fmadd h28, h4, h12, h28 \n\t"
        "fmadd h29, h5, h13, h29 \n\t"
        "fmadd h30, h6, h14, h30 \n\t"
        "fmadd h31, h7, h15, h31 \n\t"
        "fmadd h0, h8, h16, h0 \n\t"
        "fmadd h1, h9, h17, h1 \n\t"
        "fmadd h2, h10, h18, h2 \n\t"
        "fmadd h3, h11, h19, h3 \n\t"
        "fmadd h4, h12, h20, h4 \n\t"
        "fmadd h5, h13, h21, h5 \n\t"
        "fmadd h6, h14, h22, h6 \n\t"
        "fmadd h7, h15, h23, h7 \n\t"
        "fmadd h8, h16, h24, h8 \n\t"
        "fmadd h9, h17, h25, h9 \n\t"
        "fmadd h10, h18, h26, h10 \n\t"
        "fmadd h11, h19, h27, h11 \n\t"
        "fmadd h12, h20, h28, h12 \n\t"
        "fmadd h13, h21, h29, h13 \n\t"
        "fmadd h14, h22, h30, h14 \n\t"
        "fmadd h15, h23, h31, h15 \n\t"
        "fmadd h16, h24, h0, h16 \n\t"
        "fmadd h17, h25, h1, h17 \n\t"
        "fmadd h18, h26, h2, h18 \n\t"
        "fmadd h19, h27, h3, h19 \n\t"
        "fmadd h20, h28, h4, h20 \n\t"
        "fmadd h21, h29, h5, h21 \n\t"
        "fmadd h22, h30, h6, h22 \n\t"
        "fmadd h23, h31, h7, h23 \n\t"
        "fmadd h24, h0, h8, h24 \n\t"
        "fmadd h25, h1, h9, h25 \n\t"
        "fmadd h26, h2, h10, h26 \n\t"
        "fmadd h27, h3, h11, h27 \n\t"
        "fmadd h28, h4, h12, h28 \n\t"
        "fmadd h29, h5, h13, h29 \n\t"
        "fmadd h30, h6, h14, h30 \n\t"
        "fmadd h31, h7, h15, h31 \n\t"
        : /* no input */
        : /* no output */
        : "h0", "h1", "h10", "h11", "h12", "h13", "h14", "h15", "h16", "h17", "h18", "h19", "h2", "h20", "h21", "h22", "h23", "h24", "h25", "h26", "h27", "h28", "h29", "h3", "h30", "h31", "h4", "h5", "h6", "h7", "h8", "h9"
        );
    }
}

