
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmadd d%d range(0,16) d%d range(8,24) d%d range(16,32) d%d range(0,16)";
int lanes = 1;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmadd d0, d8, d16, d0 \n\t"
        "fmadd d1, d9, d17, d1 \n\t"
        "fmadd d2, d10, d18, d2 \n\t"
        "fmadd d3, d11, d19, d3 \n\t"
        "fmadd d4, d12, d20, d4 \n\t"
        "fmadd d5, d13, d21, d5 \n\t"
        "fmadd d6, d14, d22, d6 \n\t"
        "fmadd d7, d15, d23, d7 \n\t"
        "fmadd d8, d16, d24, d8 \n\t"
        "fmadd d9, d17, d25, d9 \n\t"
        "fmadd d10, d18, d26, d10 \n\t"
        "fmadd d11, d19, d27, d11 \n\t"
        "fmadd d12, d20, d28, d12 \n\t"
        "fmadd d13, d21, d29, d13 \n\t"
        "fmadd d14, d22, d30, d14 \n\t"
        "fmadd d15, d23, d31, d15 \n\t"
        "fmadd d0, d8, d16, d0 \n\t"
        "fmadd d1, d9, d17, d1 \n\t"
        "fmadd d2, d10, d18, d2 \n\t"
        "fmadd d3, d11, d19, d3 \n\t"
        "fmadd d4, d12, d20, d4 \n\t"
        "fmadd d5, d13, d21, d5 \n\t"
        "fmadd d6, d14, d22, d6 \n\t"
        "fmadd d7, d15, d23, d7 \n\t"
        "fmadd d8, d16, d24, d8 \n\t"
        "fmadd d9, d17, d25, d9 \n\t"
        "fmadd d10, d18, d26, d10 \n\t"
        "fmadd d11, d19, d27, d11 \n\t"
        "fmadd d12, d20, d28, d12 \n\t"
        "fmadd d13, d21, d29, d13 \n\t"
        "fmadd d14, d22, d30, d14 \n\t"
        "fmadd d15, d23, d31, d15 \n\t"
        "fmadd d0, d8, d16, d0 \n\t"
        "fmadd d1, d9, d17, d1 \n\t"
        "fmadd d2, d10, d18, d2 \n\t"
        "fmadd d3, d11, d19, d3 \n\t"
        "fmadd d4, d12, d20, d4 \n\t"
        "fmadd d5, d13, d21, d5 \n\t"
        "fmadd d6, d14, d22, d6 \n\t"
        "fmadd d7, d15, d23, d7 \n\t"
        "fmadd d8, d16, d24, d8 \n\t"
        "fmadd d9, d17, d25, d9 \n\t"
        "fmadd d10, d18, d26, d10 \n\t"
        "fmadd d11, d19, d27, d11 \n\t"
        "fmadd d12, d20, d28, d12 \n\t"
        "fmadd d13, d21, d29, d13 \n\t"
        "fmadd d14, d22, d30, d14 \n\t"
        "fmadd d15, d23, d31, d15 \n\t"
        "fmadd d0, d8, d16, d0 \n\t"
        "fmadd d1, d9, d17, d1 \n\t"
        "fmadd d2, d10, d18, d2 \n\t"
        "fmadd d3, d11, d19, d3 \n\t"
        "fmadd d4, d12, d20, d4 \n\t"
        "fmadd d5, d13, d21, d5 \n\t"
        "fmadd d6, d14, d22, d6 \n\t"
        "fmadd d7, d15, d23, d7 \n\t"
        "fmadd d8, d16, d24, d8 \n\t"
        "fmadd d9, d17, d25, d9 \n\t"
        "fmadd d10, d18, d26, d10 \n\t"
        "fmadd d11, d19, d27, d11 \n\t"
        "fmadd d12, d20, d28, d12 \n\t"
        "fmadd d13, d21, d29, d13 \n\t"
        "fmadd d14, d22, d30, d14 \n\t"
        "fmadd d15, d23, d31, d15 \n\t"
        );
    }
}

