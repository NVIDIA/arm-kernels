
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla z%d.d range(0,16) p0/m None z%d.d range(8,24) z%d.d range(16,32)";
int lanes = 2;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.d, p0/m, z8.d, z16.d \n\t"
        "fmla z1.d, p0/m, z9.d, z17.d \n\t"
        "fmla z2.d, p0/m, z10.d, z18.d \n\t"
        "fmla z3.d, p0/m, z11.d, z19.d \n\t"
        "fmla z4.d, p0/m, z12.d, z20.d \n\t"
        "fmla z5.d, p0/m, z13.d, z21.d \n\t"
        "fmla z6.d, p0/m, z14.d, z22.d \n\t"
        "fmla z7.d, p0/m, z15.d, z23.d \n\t"
        "fmla z8.d, p0/m, z16.d, z24.d \n\t"
        "fmla z9.d, p0/m, z17.d, z25.d \n\t"
        "fmla z10.d, p0/m, z18.d, z26.d \n\t"
        "fmla z11.d, p0/m, z19.d, z27.d \n\t"
        "fmla z12.d, p0/m, z20.d, z28.d \n\t"
        "fmla z13.d, p0/m, z21.d, z29.d \n\t"
        "fmla z14.d, p0/m, z22.d, z30.d \n\t"
        "fmla z15.d, p0/m, z23.d, z31.d \n\t"
        "fmla z0.d, p0/m, z8.d, z16.d \n\t"
        "fmla z1.d, p0/m, z9.d, z17.d \n\t"
        "fmla z2.d, p0/m, z10.d, z18.d \n\t"
        "fmla z3.d, p0/m, z11.d, z19.d \n\t"
        "fmla z4.d, p0/m, z12.d, z20.d \n\t"
        "fmla z5.d, p0/m, z13.d, z21.d \n\t"
        "fmla z6.d, p0/m, z14.d, z22.d \n\t"
        "fmla z7.d, p0/m, z15.d, z23.d \n\t"
        "fmla z8.d, p0/m, z16.d, z24.d \n\t"
        "fmla z9.d, p0/m, z17.d, z25.d \n\t"
        "fmla z10.d, p0/m, z18.d, z26.d \n\t"
        "fmla z11.d, p0/m, z19.d, z27.d \n\t"
        "fmla z12.d, p0/m, z20.d, z28.d \n\t"
        "fmla z13.d, p0/m, z21.d, z29.d \n\t"
        "fmla z14.d, p0/m, z22.d, z30.d \n\t"
        "fmla z15.d, p0/m, z23.d, z31.d \n\t"
        "fmla z0.d, p0/m, z8.d, z16.d \n\t"
        "fmla z1.d, p0/m, z9.d, z17.d \n\t"
        "fmla z2.d, p0/m, z10.d, z18.d \n\t"
        "fmla z3.d, p0/m, z11.d, z19.d \n\t"
        "fmla z4.d, p0/m, z12.d, z20.d \n\t"
        "fmla z5.d, p0/m, z13.d, z21.d \n\t"
        "fmla z6.d, p0/m, z14.d, z22.d \n\t"
        "fmla z7.d, p0/m, z15.d, z23.d \n\t"
        "fmla z8.d, p0/m, z16.d, z24.d \n\t"
        "fmla z9.d, p0/m, z17.d, z25.d \n\t"
        "fmla z10.d, p0/m, z18.d, z26.d \n\t"
        "fmla z11.d, p0/m, z19.d, z27.d \n\t"
        "fmla z12.d, p0/m, z20.d, z28.d \n\t"
        "fmla z13.d, p0/m, z21.d, z29.d \n\t"
        "fmla z14.d, p0/m, z22.d, z30.d \n\t"
        "fmla z15.d, p0/m, z23.d, z31.d \n\t"
        "fmla z0.d, p0/m, z8.d, z16.d \n\t"
        "fmla z1.d, p0/m, z9.d, z17.d \n\t"
        "fmla z2.d, p0/m, z10.d, z18.d \n\t"
        "fmla z3.d, p0/m, z11.d, z19.d \n\t"
        "fmla z4.d, p0/m, z12.d, z20.d \n\t"
        "fmla z5.d, p0/m, z13.d, z21.d \n\t"
        "fmla z6.d, p0/m, z14.d, z22.d \n\t"
        "fmla z7.d, p0/m, z15.d, z23.d \n\t"
        "fmla z8.d, p0/m, z16.d, z24.d \n\t"
        "fmla z9.d, p0/m, z17.d, z25.d \n\t"
        "fmla z10.d, p0/m, z18.d, z26.d \n\t"
        "fmla z11.d, p0/m, z19.d, z27.d \n\t"
        "fmla z12.d, p0/m, z20.d, z28.d \n\t"
        "fmla z13.d, p0/m, z21.d, z29.d \n\t"
        "fmla z14.d, p0/m, z22.d, z30.d \n\t"
        "fmla z15.d, p0/m, z23.d, z31.d \n\t"
        );
    }
}
