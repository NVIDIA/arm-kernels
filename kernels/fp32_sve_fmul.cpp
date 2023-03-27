
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.s range(0,16) z%d.s range(8,24) z%d.s range(16,32)";
int lanes = 4;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

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
        );
    }
}

