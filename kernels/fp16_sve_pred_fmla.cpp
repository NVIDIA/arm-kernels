
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla z%d.h range(0,16) p0/m None z%d.h range(8,24) z%d.h range(16,32)";
int lanes = 8;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

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
        );
    }
}

