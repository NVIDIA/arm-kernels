
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//
#include <arm_sve.h>

const char * description = "4( 8(SVE_FMLA_64b) )";
unsigned long block_inst = 8;
unsigned long block_ops = (8*(2*(8*svcntb()/64)));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z2", "z3", "z4", "z5", "z6", "z7"
        );
    }
}

