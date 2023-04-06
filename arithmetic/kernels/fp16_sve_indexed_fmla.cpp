
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//
#include <arm_sve.h>

const char * description = "4( 8(SVE_FMLA_16b) )";
unsigned long block_inst = 8;
unsigned long block_ops = (8*(2*(8*svcntb()/16)));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.h, z2.h, z4.h[0] \n\t"
        "fmla z1.h, z3.h, z5.h[0] \n\t"
        "fmla z2.h, z4.h, z6.h[0] \n\t"
        "fmla z3.h, z5.h, z7.h[0] \n\t"
        "fmla z4.h, z6.h, z0.h[0] \n\t"
        "fmla z5.h, z7.h, z1.h[0] \n\t"
        "fmla z6.h, z0.h, z2.h[0] \n\t"
        "fmla z7.h, z1.h, z3.h[0] \n\t"
        "fmla z0.h, z2.h, z4.h[0] \n\t"
        "fmla z1.h, z3.h, z5.h[0] \n\t"
        "fmla z2.h, z4.h, z6.h[0] \n\t"
        "fmla z3.h, z5.h, z7.h[0] \n\t"
        "fmla z4.h, z6.h, z0.h[0] \n\t"
        "fmla z5.h, z7.h, z1.h[0] \n\t"
        "fmla z6.h, z0.h, z2.h[0] \n\t"
        "fmla z7.h, z1.h, z3.h[0] \n\t"
        "fmla z0.h, z2.h, z4.h[0] \n\t"
        "fmla z1.h, z3.h, z5.h[0] \n\t"
        "fmla z2.h, z4.h, z6.h[0] \n\t"
        "fmla z3.h, z5.h, z7.h[0] \n\t"
        "fmla z4.h, z6.h, z0.h[0] \n\t"
        "fmla z5.h, z7.h, z1.h[0] \n\t"
        "fmla z6.h, z0.h, z2.h[0] \n\t"
        "fmla z7.h, z1.h, z3.h[0] \n\t"
        "fmla z0.h, z2.h, z4.h[0] \n\t"
        "fmla z1.h, z3.h, z5.h[0] \n\t"
        "fmla z2.h, z4.h, z6.h[0] \n\t"
        "fmla z3.h, z5.h, z7.h[0] \n\t"
        "fmla z4.h, z6.h, z0.h[0] \n\t"
        "fmla z5.h, z7.h, z1.h[0] \n\t"
        "fmla z6.h, z0.h, z2.h[0] \n\t"
        "fmla z7.h, z1.h, z3.h[0] \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z2", "z3", "z4", "z5", "z6", "z7"
        );
    }
}

