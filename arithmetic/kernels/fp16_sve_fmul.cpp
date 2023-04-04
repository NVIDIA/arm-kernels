
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.h range(0,16) z%d.h range(8,24) z%d.h range(16,32)";
int lanes = 8;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.h, z8.h, z16.h \n\t"
        "fmul z1.h, z9.h, z17.h \n\t"
        "fmul z2.h, z10.h, z18.h \n\t"
        "fmul z3.h, z11.h, z19.h \n\t"
        "fmul z4.h, z12.h, z20.h \n\t"
        "fmul z5.h, z13.h, z21.h \n\t"
        "fmul z6.h, z14.h, z22.h \n\t"
        "fmul z7.h, z15.h, z23.h \n\t"
        "fmul z8.h, z16.h, z24.h \n\t"
        "fmul z9.h, z17.h, z25.h \n\t"
        "fmul z10.h, z18.h, z26.h \n\t"
        "fmul z11.h, z19.h, z27.h \n\t"
        "fmul z12.h, z20.h, z28.h \n\t"
        "fmul z13.h, z21.h, z29.h \n\t"
        "fmul z14.h, z22.h, z30.h \n\t"
        "fmul z15.h, z23.h, z31.h \n\t"
        "fmul z0.h, z8.h, z16.h \n\t"
        "fmul z1.h, z9.h, z17.h \n\t"
        "fmul z2.h, z10.h, z18.h \n\t"
        "fmul z3.h, z11.h, z19.h \n\t"
        "fmul z4.h, z12.h, z20.h \n\t"
        "fmul z5.h, z13.h, z21.h \n\t"
        "fmul z6.h, z14.h, z22.h \n\t"
        "fmul z7.h, z15.h, z23.h \n\t"
        "fmul z8.h, z16.h, z24.h \n\t"
        "fmul z9.h, z17.h, z25.h \n\t"
        "fmul z10.h, z18.h, z26.h \n\t"
        "fmul z11.h, z19.h, z27.h \n\t"
        "fmul z12.h, z20.h, z28.h \n\t"
        "fmul z13.h, z21.h, z29.h \n\t"
        "fmul z14.h, z22.h, z30.h \n\t"
        "fmul z15.h, z23.h, z31.h \n\t"
        "fmul z0.h, z8.h, z16.h \n\t"
        "fmul z1.h, z9.h, z17.h \n\t"
        "fmul z2.h, z10.h, z18.h \n\t"
        "fmul z3.h, z11.h, z19.h \n\t"
        "fmul z4.h, z12.h, z20.h \n\t"
        "fmul z5.h, z13.h, z21.h \n\t"
        "fmul z6.h, z14.h, z22.h \n\t"
        "fmul z7.h, z15.h, z23.h \n\t"
        "fmul z8.h, z16.h, z24.h \n\t"
        "fmul z9.h, z17.h, z25.h \n\t"
        "fmul z10.h, z18.h, z26.h \n\t"
        "fmul z11.h, z19.h, z27.h \n\t"
        "fmul z12.h, z20.h, z28.h \n\t"
        "fmul z13.h, z21.h, z29.h \n\t"
        "fmul z14.h, z22.h, z30.h \n\t"
        "fmul z15.h, z23.h, z31.h \n\t"
        "fmul z0.h, z8.h, z16.h \n\t"
        "fmul z1.h, z9.h, z17.h \n\t"
        "fmul z2.h, z10.h, z18.h \n\t"
        "fmul z3.h, z11.h, z19.h \n\t"
        "fmul z4.h, z12.h, z20.h \n\t"
        "fmul z5.h, z13.h, z21.h \n\t"
        "fmul z6.h, z14.h, z22.h \n\t"
        "fmul z7.h, z15.h, z23.h \n\t"
        "fmul z8.h, z16.h, z24.h \n\t"
        "fmul z9.h, z17.h, z25.h \n\t"
        "fmul z10.h, z18.h, z26.h \n\t"
        "fmul z11.h, z19.h, z27.h \n\t"
        "fmul z12.h, z20.h, z28.h \n\t"
        "fmul z13.h, z21.h, z29.h \n\t"
        "fmul z14.h, z22.h, z30.h \n\t"
        "fmul z15.h, z23.h, z31.h \n\t"
        );
    }
}

