
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//
#include <arm_sve.h>

const char * description = "4( 16(SVE_FMLA_16b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(2*(8*svcntb()/16)));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.h, p0/m, z8.h, z16.h \n\t"
        "fmla z1.h, p0/m, z9.h, z17.h \n\t"
        "fmla z2.h, p0/m, z10.h, z18.h \n\t"
        "fmla z3.h, p0/m, z11.h, z19.h \n\t"
        "fmla z4.h, p0/m, z12.h, z20.h \n\t"
        "fmla z5.h, p0/m, z13.h, z21.h \n\t"
        "fmla z6.h, p0/m, z14.h, z22.h \n\t"
        "fmla z7.h, p0/m, z15.h, z23.h \n\t"
        "fmla z8.h, p0/m, z16.h, z24.h \n\t"
        "fmla z9.h, p0/m, z17.h, z25.h \n\t"
        "fmla z10.h, p0/m, z18.h, z26.h \n\t"
        "fmla z11.h, p0/m, z19.h, z27.h \n\t"
        "fmla z12.h, p0/m, z20.h, z28.h \n\t"
        "fmla z13.h, p0/m, z21.h, z29.h \n\t"
        "fmla z14.h, p0/m, z22.h, z30.h \n\t"
        "fmla z15.h, p0/m, z23.h, z31.h \n\t"
        "fmla z0.h, p0/m, z8.h, z16.h \n\t"
        "fmla z1.h, p0/m, z9.h, z17.h \n\t"
        "fmla z2.h, p0/m, z10.h, z18.h \n\t"
        "fmla z3.h, p0/m, z11.h, z19.h \n\t"
        "fmla z4.h, p0/m, z12.h, z20.h \n\t"
        "fmla z5.h, p0/m, z13.h, z21.h \n\t"
        "fmla z6.h, p0/m, z14.h, z22.h \n\t"
        "fmla z7.h, p0/m, z15.h, z23.h \n\t"
        "fmla z8.h, p0/m, z16.h, z24.h \n\t"
        "fmla z9.h, p0/m, z17.h, z25.h \n\t"
        "fmla z10.h, p0/m, z18.h, z26.h \n\t"
        "fmla z11.h, p0/m, z19.h, z27.h \n\t"
        "fmla z12.h, p0/m, z20.h, z28.h \n\t"
        "fmla z13.h, p0/m, z21.h, z29.h \n\t"
        "fmla z14.h, p0/m, z22.h, z30.h \n\t"
        "fmla z15.h, p0/m, z23.h, z31.h \n\t"
        "fmla z0.h, p0/m, z8.h, z16.h \n\t"
        "fmla z1.h, p0/m, z9.h, z17.h \n\t"
        "fmla z2.h, p0/m, z10.h, z18.h \n\t"
        "fmla z3.h, p0/m, z11.h, z19.h \n\t"
        "fmla z4.h, p0/m, z12.h, z20.h \n\t"
        "fmla z5.h, p0/m, z13.h, z21.h \n\t"
        "fmla z6.h, p0/m, z14.h, z22.h \n\t"
        "fmla z7.h, p0/m, z15.h, z23.h \n\t"
        "fmla z8.h, p0/m, z16.h, z24.h \n\t"
        "fmla z9.h, p0/m, z17.h, z25.h \n\t"
        "fmla z10.h, p0/m, z18.h, z26.h \n\t"
        "fmla z11.h, p0/m, z19.h, z27.h \n\t"
        "fmla z12.h, p0/m, z20.h, z28.h \n\t"
        "fmla z13.h, p0/m, z21.h, z29.h \n\t"
        "fmla z14.h, p0/m, z22.h, z30.h \n\t"
        "fmla z15.h, p0/m, z23.h, z31.h \n\t"
        "fmla z0.h, p0/m, z8.h, z16.h \n\t"
        "fmla z1.h, p0/m, z9.h, z17.h \n\t"
        "fmla z2.h, p0/m, z10.h, z18.h \n\t"
        "fmla z3.h, p0/m, z11.h, z19.h \n\t"
        "fmla z4.h, p0/m, z12.h, z20.h \n\t"
        "fmla z5.h, p0/m, z13.h, z21.h \n\t"
        "fmla z6.h, p0/m, z14.h, z22.h \n\t"
        "fmla z7.h, p0/m, z15.h, z23.h \n\t"
        "fmla z8.h, p0/m, z16.h, z24.h \n\t"
        "fmla z9.h, p0/m, z17.h, z25.h \n\t"
        "fmla z10.h, p0/m, z18.h, z26.h \n\t"
        "fmla z11.h, p0/m, z19.h, z27.h \n\t"
        "fmla z12.h, p0/m, z20.h, z28.h \n\t"
        "fmla z13.h, p0/m, z21.h, z29.h \n\t"
        "fmla z14.h, p0/m, z22.h, z30.h \n\t"
        "fmla z15.h, p0/m, z23.h, z31.h \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z10", "z11", "z12", "z13", "z14", "z15", "z16", "z17", "z18", "z19", "z2", "z20", "z21", "z22", "z23", "z24", "z25", "z26", "z27", "z28", "z29", "z3", "z30", "z31", "z4", "z5", "z6", "z7", "z8", "z9"
        );
    }
}

