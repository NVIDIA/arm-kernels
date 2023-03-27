
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul d%d range(0,16) d%d range(8,24) d%d range(16,32)";
int lanes = 1;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

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
        );
    }
}

