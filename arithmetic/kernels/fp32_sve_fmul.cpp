
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//
#include <arm_sve.h>

const char * description = "4( 16(SVE_FMUL_32b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(1*(8*svcntb()/32)));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.s, z8.s, z16.s \n\t"
        "fmul z1.s, z9.s, z17.s \n\t"
        "fmul z2.s, z10.s, z18.s \n\t"
        "fmul z3.s, z11.s, z19.s \n\t"
        "fmul z4.s, z12.s, z20.s \n\t"
        "fmul z5.s, z13.s, z21.s \n\t"
        "fmul z6.s, z14.s, z22.s \n\t"
        "fmul z7.s, z15.s, z23.s \n\t"
        "fmul z8.s, z16.s, z24.s \n\t"
        "fmul z9.s, z17.s, z25.s \n\t"
        "fmul z10.s, z18.s, z26.s \n\t"
        "fmul z11.s, z19.s, z27.s \n\t"
        "fmul z12.s, z20.s, z28.s \n\t"
        "fmul z13.s, z21.s, z29.s \n\t"
        "fmul z14.s, z22.s, z30.s \n\t"
        "fmul z15.s, z23.s, z31.s \n\t"
        "fmul z0.s, z8.s, z16.s \n\t"
        "fmul z1.s, z9.s, z17.s \n\t"
        "fmul z2.s, z10.s, z18.s \n\t"
        "fmul z3.s, z11.s, z19.s \n\t"
        "fmul z4.s, z12.s, z20.s \n\t"
        "fmul z5.s, z13.s, z21.s \n\t"
        "fmul z6.s, z14.s, z22.s \n\t"
        "fmul z7.s, z15.s, z23.s \n\t"
        "fmul z8.s, z16.s, z24.s \n\t"
        "fmul z9.s, z17.s, z25.s \n\t"
        "fmul z10.s, z18.s, z26.s \n\t"
        "fmul z11.s, z19.s, z27.s \n\t"
        "fmul z12.s, z20.s, z28.s \n\t"
        "fmul z13.s, z21.s, z29.s \n\t"
        "fmul z14.s, z22.s, z30.s \n\t"
        "fmul z15.s, z23.s, z31.s \n\t"
        "fmul z0.s, z8.s, z16.s \n\t"
        "fmul z1.s, z9.s, z17.s \n\t"
        "fmul z2.s, z10.s, z18.s \n\t"
        "fmul z3.s, z11.s, z19.s \n\t"
        "fmul z4.s, z12.s, z20.s \n\t"
        "fmul z5.s, z13.s, z21.s \n\t"
        "fmul z6.s, z14.s, z22.s \n\t"
        "fmul z7.s, z15.s, z23.s \n\t"
        "fmul z8.s, z16.s, z24.s \n\t"
        "fmul z9.s, z17.s, z25.s \n\t"
        "fmul z10.s, z18.s, z26.s \n\t"
        "fmul z11.s, z19.s, z27.s \n\t"
        "fmul z12.s, z20.s, z28.s \n\t"
        "fmul z13.s, z21.s, z29.s \n\t"
        "fmul z14.s, z22.s, z30.s \n\t"
        "fmul z15.s, z23.s, z31.s \n\t"
        "fmul z0.s, z8.s, z16.s \n\t"
        "fmul z1.s, z9.s, z17.s \n\t"
        "fmul z2.s, z10.s, z18.s \n\t"
        "fmul z3.s, z11.s, z19.s \n\t"
        "fmul z4.s, z12.s, z20.s \n\t"
        "fmul z5.s, z13.s, z21.s \n\t"
        "fmul z6.s, z14.s, z22.s \n\t"
        "fmul z7.s, z15.s, z23.s \n\t"
        "fmul z8.s, z16.s, z24.s \n\t"
        "fmul z9.s, z17.s, z25.s \n\t"
        "fmul z10.s, z18.s, z26.s \n\t"
        "fmul z11.s, z19.s, z27.s \n\t"
        "fmul z12.s, z20.s, z28.s \n\t"
        "fmul z13.s, z21.s, z29.s \n\t"
        "fmul z14.s, z22.s, z30.s \n\t"
        "fmul z15.s, z23.s, z31.s \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z10", "z11", "z12", "z13", "z14", "z15", "z16", "z17", "z18", "z19", "z2", "z20", "z21", "z22", "z23", "z24", "z25", "z26", "z27", "z28", "z29", "z3", "z30", "z31", "z4", "z5", "z6", "z7", "z8", "z9"
        );
    }
}

