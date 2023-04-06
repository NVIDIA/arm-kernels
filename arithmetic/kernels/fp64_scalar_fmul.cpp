
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(SCALAR_FMUL_64b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(1*1));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul d0, d8, d16 \n\t"
        "fmul d1, d9, d17 \n\t"
        "fmul d2, d10, d18 \n\t"
        "fmul d3, d11, d19 \n\t"
        "fmul d4, d12, d20 \n\t"
        "fmul d5, d13, d21 \n\t"
        "fmul d6, d14, d22 \n\t"
        "fmul d7, d15, d23 \n\t"
        "fmul d8, d16, d24 \n\t"
        "fmul d9, d17, d25 \n\t"
        "fmul d10, d18, d26 \n\t"
        "fmul d11, d19, d27 \n\t"
        "fmul d12, d20, d28 \n\t"
        "fmul d13, d21, d29 \n\t"
        "fmul d14, d22, d30 \n\t"
        "fmul d15, d23, d31 \n\t"
        "fmul d0, d8, d16 \n\t"
        "fmul d1, d9, d17 \n\t"
        "fmul d2, d10, d18 \n\t"
        "fmul d3, d11, d19 \n\t"
        "fmul d4, d12, d20 \n\t"
        "fmul d5, d13, d21 \n\t"
        "fmul d6, d14, d22 \n\t"
        "fmul d7, d15, d23 \n\t"
        "fmul d8, d16, d24 \n\t"
        "fmul d9, d17, d25 \n\t"
        "fmul d10, d18, d26 \n\t"
        "fmul d11, d19, d27 \n\t"
        "fmul d12, d20, d28 \n\t"
        "fmul d13, d21, d29 \n\t"
        "fmul d14, d22, d30 \n\t"
        "fmul d15, d23, d31 \n\t"
        "fmul d0, d8, d16 \n\t"
        "fmul d1, d9, d17 \n\t"
        "fmul d2, d10, d18 \n\t"
        "fmul d3, d11, d19 \n\t"
        "fmul d4, d12, d20 \n\t"
        "fmul d5, d13, d21 \n\t"
        "fmul d6, d14, d22 \n\t"
        "fmul d7, d15, d23 \n\t"
        "fmul d8, d16, d24 \n\t"
        "fmul d9, d17, d25 \n\t"
        "fmul d10, d18, d26 \n\t"
        "fmul d11, d19, d27 \n\t"
        "fmul d12, d20, d28 \n\t"
        "fmul d13, d21, d29 \n\t"
        "fmul d14, d22, d30 \n\t"
        "fmul d15, d23, d31 \n\t"
        "fmul d0, d8, d16 \n\t"
        "fmul d1, d9, d17 \n\t"
        "fmul d2, d10, d18 \n\t"
        "fmul d3, d11, d19 \n\t"
        "fmul d4, d12, d20 \n\t"
        "fmul d5, d13, d21 \n\t"
        "fmul d6, d14, d22 \n\t"
        "fmul d7, d15, d23 \n\t"
        "fmul d8, d16, d24 \n\t"
        "fmul d9, d17, d25 \n\t"
        "fmul d10, d18, d26 \n\t"
        "fmul d11, d19, d27 \n\t"
        "fmul d12, d20, d28 \n\t"
        "fmul d13, d21, d29 \n\t"
        "fmul d14, d22, d30 \n\t"
        "fmul d15, d23, d31 \n\t"
        : /* no input */
        : /* no output */
        : "d0", "d1", "d10", "d11", "d12", "d13", "d14", "d15", "d16", "d17", "d18", "d19", "d2", "d20", "d21", "d22", "d23", "d24", "d25", "d26", "d27", "d28", "d29", "d3", "d30", "d31", "d4", "d5", "d6", "d7", "d8", "d9"
        );
    }
}

