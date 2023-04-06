
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(SCALAR_FMUL_16b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(1*1));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul h0, h8, h16 \n\t"
        "fmul h1, h9, h17 \n\t"
        "fmul h2, h10, h18 \n\t"
        "fmul h3, h11, h19 \n\t"
        "fmul h4, h12, h20 \n\t"
        "fmul h5, h13, h21 \n\t"
        "fmul h6, h14, h22 \n\t"
        "fmul h7, h15, h23 \n\t"
        "fmul h8, h16, h24 \n\t"
        "fmul h9, h17, h25 \n\t"
        "fmul h10, h18, h26 \n\t"
        "fmul h11, h19, h27 \n\t"
        "fmul h12, h20, h28 \n\t"
        "fmul h13, h21, h29 \n\t"
        "fmul h14, h22, h30 \n\t"
        "fmul h15, h23, h31 \n\t"
        "fmul h0, h8, h16 \n\t"
        "fmul h1, h9, h17 \n\t"
        "fmul h2, h10, h18 \n\t"
        "fmul h3, h11, h19 \n\t"
        "fmul h4, h12, h20 \n\t"
        "fmul h5, h13, h21 \n\t"
        "fmul h6, h14, h22 \n\t"
        "fmul h7, h15, h23 \n\t"
        "fmul h8, h16, h24 \n\t"
        "fmul h9, h17, h25 \n\t"
        "fmul h10, h18, h26 \n\t"
        "fmul h11, h19, h27 \n\t"
        "fmul h12, h20, h28 \n\t"
        "fmul h13, h21, h29 \n\t"
        "fmul h14, h22, h30 \n\t"
        "fmul h15, h23, h31 \n\t"
        "fmul h0, h8, h16 \n\t"
        "fmul h1, h9, h17 \n\t"
        "fmul h2, h10, h18 \n\t"
        "fmul h3, h11, h19 \n\t"
        "fmul h4, h12, h20 \n\t"
        "fmul h5, h13, h21 \n\t"
        "fmul h6, h14, h22 \n\t"
        "fmul h7, h15, h23 \n\t"
        "fmul h8, h16, h24 \n\t"
        "fmul h9, h17, h25 \n\t"
        "fmul h10, h18, h26 \n\t"
        "fmul h11, h19, h27 \n\t"
        "fmul h12, h20, h28 \n\t"
        "fmul h13, h21, h29 \n\t"
        "fmul h14, h22, h30 \n\t"
        "fmul h15, h23, h31 \n\t"
        "fmul h0, h8, h16 \n\t"
        "fmul h1, h9, h17 \n\t"
        "fmul h2, h10, h18 \n\t"
        "fmul h3, h11, h19 \n\t"
        "fmul h4, h12, h20 \n\t"
        "fmul h5, h13, h21 \n\t"
        "fmul h6, h14, h22 \n\t"
        "fmul h7, h15, h23 \n\t"
        "fmul h8, h16, h24 \n\t"
        "fmul h9, h17, h25 \n\t"
        "fmul h10, h18, h26 \n\t"
        "fmul h11, h19, h27 \n\t"
        "fmul h12, h20, h28 \n\t"
        "fmul h13, h21, h29 \n\t"
        "fmul h14, h22, h30 \n\t"
        "fmul h15, h23, h31 \n\t"
        : /* no input */
        : /* no output */
        : "h0", "h1", "h10", "h11", "h12", "h13", "h14", "h15", "h16", "h17", "h18", "h19", "h2", "h20", "h21", "h22", "h23", "h24", "h25", "h26", "h27", "h28", "h29", "h3", "h30", "h31", "h4", "h5", "h6", "h7", "h8", "h9"
        );
    }
}

