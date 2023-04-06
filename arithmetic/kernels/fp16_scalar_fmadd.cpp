
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(SCALAR_FMADD_16b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(2*1));
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
        : /* no input */
        : /* no output */
        : "h0", "h1", "h10", "h11", "h12", "h13", "h14", "h15", "h16", "h17", "h18", "h19", "h2", "h20", "h21", "h22", "h23", "h24", "h25", "h26", "h27", "h28", "h29", "h3", "h30", "h31", "h4", "h5", "h6", "h7", "h8", "h9"
        );
    }
}

