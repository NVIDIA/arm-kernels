
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.d range(0,16) z%d.d range(8,24) z%d.d range(16,32)";
int lanes = 2;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.d, z8.d, z16.d \n\t"
        "fmul z1.d, z9.d, z17.d \n\t"
        "fmul z2.d, z10.d, z18.d \n\t"
        "fmul z3.d, z11.d, z19.d \n\t"
        "fmul z4.d, z12.d, z20.d \n\t"
        "fmul z5.d, z13.d, z21.d \n\t"
        "fmul z6.d, z14.d, z22.d \n\t"
        "fmul z7.d, z15.d, z23.d \n\t"
        "fmul z8.d, z16.d, z24.d \n\t"
        "fmul z9.d, z17.d, z25.d \n\t"
        "fmul z10.d, z18.d, z26.d \n\t"
        "fmul z11.d, z19.d, z27.d \n\t"
        "fmul z12.d, z20.d, z28.d \n\t"
        "fmul z13.d, z21.d, z29.d \n\t"
        "fmul z14.d, z22.d, z30.d \n\t"
        "fmul z15.d, z23.d, z31.d \n\t"
        "fmul z0.d, z8.d, z16.d \n\t"
        "fmul z1.d, z9.d, z17.d \n\t"
        "fmul z2.d, z10.d, z18.d \n\t"
        "fmul z3.d, z11.d, z19.d \n\t"
        "fmul z4.d, z12.d, z20.d \n\t"
        "fmul z5.d, z13.d, z21.d \n\t"
        "fmul z6.d, z14.d, z22.d \n\t"
        "fmul z7.d, z15.d, z23.d \n\t"
        "fmul z8.d, z16.d, z24.d \n\t"
        "fmul z9.d, z17.d, z25.d \n\t"
        "fmul z10.d, z18.d, z26.d \n\t"
        "fmul z11.d, z19.d, z27.d \n\t"
        "fmul z12.d, z20.d, z28.d \n\t"
        "fmul z13.d, z21.d, z29.d \n\t"
        "fmul z14.d, z22.d, z30.d \n\t"
        "fmul z15.d, z23.d, z31.d \n\t"
        "fmul z0.d, z8.d, z16.d \n\t"
        "fmul z1.d, z9.d, z17.d \n\t"
        "fmul z2.d, z10.d, z18.d \n\t"
        "fmul z3.d, z11.d, z19.d \n\t"
        "fmul z4.d, z12.d, z20.d \n\t"
        "fmul z5.d, z13.d, z21.d \n\t"
        "fmul z6.d, z14.d, z22.d \n\t"
        "fmul z7.d, z15.d, z23.d \n\t"
        "fmul z8.d, z16.d, z24.d \n\t"
        "fmul z9.d, z17.d, z25.d \n\t"
        "fmul z10.d, z18.d, z26.d \n\t"
        "fmul z11.d, z19.d, z27.d \n\t"
        "fmul z12.d, z20.d, z28.d \n\t"
        "fmul z13.d, z21.d, z29.d \n\t"
        "fmul z14.d, z22.d, z30.d \n\t"
        "fmul z15.d, z23.d, z31.d \n\t"
        "fmul z0.d, z8.d, z16.d \n\t"
        "fmul z1.d, z9.d, z17.d \n\t"
        "fmul z2.d, z10.d, z18.d \n\t"
        "fmul z3.d, z11.d, z19.d \n\t"
        "fmul z4.d, z12.d, z20.d \n\t"
        "fmul z5.d, z13.d, z21.d \n\t"
        "fmul z6.d, z14.d, z22.d \n\t"
        "fmul z7.d, z15.d, z23.d \n\t"
        "fmul z8.d, z16.d, z24.d \n\t"
        "fmul z9.d, z17.d, z25.d \n\t"
        "fmul z10.d, z18.d, z26.d \n\t"
        "fmul z11.d, z19.d, z27.d \n\t"
        "fmul z12.d, z20.d, z28.d \n\t"
        "fmul z13.d, z21.d, z29.d \n\t"
        "fmul z14.d, z22.d, z30.d \n\t"
        "fmul z15.d, z23.d, z31.d \n\t"
        );
    }
}
