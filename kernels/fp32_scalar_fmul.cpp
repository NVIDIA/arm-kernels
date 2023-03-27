
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul s%d range(0,16) s%d range(8,24) s%d range(16,32)";
int lanes = 1;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul s0, s8, s16 \n\t"
        "fmul s1, s9, s17 \n\t"
        "fmul s2, s10, s18 \n\t"
        "fmul s3, s11, s19 \n\t"
        "fmul s4, s12, s20 \n\t"
        "fmul s5, s13, s21 \n\t"
        "fmul s6, s14, s22 \n\t"
        "fmul s7, s15, s23 \n\t"
        "fmul s8, s16, s24 \n\t"
        "fmul s9, s17, s25 \n\t"
        "fmul s10, s18, s26 \n\t"
        "fmul s11, s19, s27 \n\t"
        "fmul s12, s20, s28 \n\t"
        "fmul s13, s21, s29 \n\t"
        "fmul s14, s22, s30 \n\t"
        "fmul s15, s23, s31 \n\t"
        "fmul s0, s8, s16 \n\t"
        "fmul s1, s9, s17 \n\t"
        "fmul s2, s10, s18 \n\t"
        "fmul s3, s11, s19 \n\t"
        "fmul s4, s12, s20 \n\t"
        "fmul s5, s13, s21 \n\t"
        "fmul s6, s14, s22 \n\t"
        "fmul s7, s15, s23 \n\t"
        "fmul s8, s16, s24 \n\t"
        "fmul s9, s17, s25 \n\t"
        "fmul s10, s18, s26 \n\t"
        "fmul s11, s19, s27 \n\t"
        "fmul s12, s20, s28 \n\t"
        "fmul s13, s21, s29 \n\t"
        "fmul s14, s22, s30 \n\t"
        "fmul s15, s23, s31 \n\t"
        "fmul s0, s8, s16 \n\t"
        "fmul s1, s9, s17 \n\t"
        "fmul s2, s10, s18 \n\t"
        "fmul s3, s11, s19 \n\t"
        "fmul s4, s12, s20 \n\t"
        "fmul s5, s13, s21 \n\t"
        "fmul s6, s14, s22 \n\t"
        "fmul s7, s15, s23 \n\t"
        "fmul s8, s16, s24 \n\t"
        "fmul s9, s17, s25 \n\t"
        "fmul s10, s18, s26 \n\t"
        "fmul s11, s19, s27 \n\t"
        "fmul s12, s20, s28 \n\t"
        "fmul s13, s21, s29 \n\t"
        "fmul s14, s22, s30 \n\t"
        "fmul s15, s23, s31 \n\t"
        "fmul s0, s8, s16 \n\t"
        "fmul s1, s9, s17 \n\t"
        "fmul s2, s10, s18 \n\t"
        "fmul s3, s11, s19 \n\t"
        "fmul s4, s12, s20 \n\t"
        "fmul s5, s13, s21 \n\t"
        "fmul s6, s14, s22 \n\t"
        "fmul s7, s15, s23 \n\t"
        "fmul s8, s16, s24 \n\t"
        "fmul s9, s17, s25 \n\t"
        "fmul s10, s18, s26 \n\t"
        "fmul s11, s19, s27 \n\t"
        "fmul s12, s20, s28 \n\t"
        "fmul s13, s21, s29 \n\t"
        "fmul s14, s22, s30 \n\t"
        "fmul s15, s23, s31 \n\t"
        );
    }
}

