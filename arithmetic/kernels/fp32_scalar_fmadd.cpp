
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmadd s%d range(0,16) s%d range(8,24) s%d range(16,32) s%d range(0,16)";
int lanes = 1;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmadd s0, s8, s16, s0 \n\t"
        "fmadd s1, s9, s17, s1 \n\t"
        "fmadd s2, s10, s18, s2 \n\t"
        "fmadd s3, s11, s19, s3 \n\t"
        "fmadd s4, s12, s20, s4 \n\t"
        "fmadd s5, s13, s21, s5 \n\t"
        "fmadd s6, s14, s22, s6 \n\t"
        "fmadd s7, s15, s23, s7 \n\t"
        "fmadd s8, s16, s24, s8 \n\t"
        "fmadd s9, s17, s25, s9 \n\t"
        "fmadd s10, s18, s26, s10 \n\t"
        "fmadd s11, s19, s27, s11 \n\t"
        "fmadd s12, s20, s28, s12 \n\t"
        "fmadd s13, s21, s29, s13 \n\t"
        "fmadd s14, s22, s30, s14 \n\t"
        "fmadd s15, s23, s31, s15 \n\t"
        "fmadd s0, s8, s16, s0 \n\t"
        "fmadd s1, s9, s17, s1 \n\t"
        "fmadd s2, s10, s18, s2 \n\t"
        "fmadd s3, s11, s19, s3 \n\t"
        "fmadd s4, s12, s20, s4 \n\t"
        "fmadd s5, s13, s21, s5 \n\t"
        "fmadd s6, s14, s22, s6 \n\t"
        "fmadd s7, s15, s23, s7 \n\t"
        "fmadd s8, s16, s24, s8 \n\t"
        "fmadd s9, s17, s25, s9 \n\t"
        "fmadd s10, s18, s26, s10 \n\t"
        "fmadd s11, s19, s27, s11 \n\t"
        "fmadd s12, s20, s28, s12 \n\t"
        "fmadd s13, s21, s29, s13 \n\t"
        "fmadd s14, s22, s30, s14 \n\t"
        "fmadd s15, s23, s31, s15 \n\t"
        "fmadd s0, s8, s16, s0 \n\t"
        "fmadd s1, s9, s17, s1 \n\t"
        "fmadd s2, s10, s18, s2 \n\t"
        "fmadd s3, s11, s19, s3 \n\t"
        "fmadd s4, s12, s20, s4 \n\t"
        "fmadd s5, s13, s21, s5 \n\t"
        "fmadd s6, s14, s22, s6 \n\t"
        "fmadd s7, s15, s23, s7 \n\t"
        "fmadd s8, s16, s24, s8 \n\t"
        "fmadd s9, s17, s25, s9 \n\t"
        "fmadd s10, s18, s26, s10 \n\t"
        "fmadd s11, s19, s27, s11 \n\t"
        "fmadd s12, s20, s28, s12 \n\t"
        "fmadd s13, s21, s29, s13 \n\t"
        "fmadd s14, s22, s30, s14 \n\t"
        "fmadd s15, s23, s31, s15 \n\t"
        "fmadd s0, s8, s16, s0 \n\t"
        "fmadd s1, s9, s17, s1 \n\t"
        "fmadd s2, s10, s18, s2 \n\t"
        "fmadd s3, s11, s19, s3 \n\t"
        "fmadd s4, s12, s20, s4 \n\t"
        "fmadd s5, s13, s21, s5 \n\t"
        "fmadd s6, s14, s22, s6 \n\t"
        "fmadd s7, s15, s23, s7 \n\t"
        "fmadd s8, s16, s24, s8 \n\t"
        "fmadd s9, s17, s25, s9 \n\t"
        "fmadd s10, s18, s26, s10 \n\t"
        "fmadd s11, s19, s27, s11 \n\t"
        "fmadd s12, s20, s28, s12 \n\t"
        "fmadd s13, s21, s29, s13 \n\t"
        "fmadd s14, s22, s30, s14 \n\t"
        "fmadd s15, s23, s31, s15 \n\t"
        : /* no input */
        : /* no output */
        : "s0", "s1", "s10", "s11", "s12", "s13", "s14", "s15", "s16", "s17", "s18", "s19", "s2", "s20", "s21", "s22", "s23", "s24", "s25", "s26", "s27", "s28", "s29", "s3", "s30", "s31", "s4", "s5", "s6", "s7", "s8", "s9"
        );
    }
}

