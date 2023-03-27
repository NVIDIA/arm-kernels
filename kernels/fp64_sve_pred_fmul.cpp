
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.d range(0,16) p0/m None z%d.d range(0,16) z%d.d range(8,24)";
int lanes = 2;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.d, p0/m, z0.d, z8.d \n\t"
        "fmul z1.d, p0/m, z1.d, z9.d \n\t"
        "fmul z2.d, p0/m, z2.d, z10.d \n\t"
        "fmul z3.d, p0/m, z3.d, z11.d \n\t"
        "fmul z4.d, p0/m, z4.d, z12.d \n\t"
        "fmul z5.d, p0/m, z5.d, z13.d \n\t"
        "fmul z6.d, p0/m, z6.d, z14.d \n\t"
        "fmul z7.d, p0/m, z7.d, z15.d \n\t"
        "fmul z8.d, p0/m, z8.d, z16.d \n\t"
        "fmul z9.d, p0/m, z9.d, z17.d \n\t"
        "fmul z10.d, p0/m, z10.d, z18.d \n\t"
        "fmul z11.d, p0/m, z11.d, z19.d \n\t"
        "fmul z12.d, p0/m, z12.d, z20.d \n\t"
        "fmul z13.d, p0/m, z13.d, z21.d \n\t"
        "fmul z14.d, p0/m, z14.d, z22.d \n\t"
        "fmul z15.d, p0/m, z15.d, z23.d \n\t"
        "fmul z0.d, p0/m, z0.d, z8.d \n\t"
        "fmul z1.d, p0/m, z1.d, z9.d \n\t"
        "fmul z2.d, p0/m, z2.d, z10.d \n\t"
        "fmul z3.d, p0/m, z3.d, z11.d \n\t"
        "fmul z4.d, p0/m, z4.d, z12.d \n\t"
        "fmul z5.d, p0/m, z5.d, z13.d \n\t"
        "fmul z6.d, p0/m, z6.d, z14.d \n\t"
        "fmul z7.d, p0/m, z7.d, z15.d \n\t"
        "fmul z8.d, p0/m, z8.d, z16.d \n\t"
        "fmul z9.d, p0/m, z9.d, z17.d \n\t"
        "fmul z10.d, p0/m, z10.d, z18.d \n\t"
        "fmul z11.d, p0/m, z11.d, z19.d \n\t"
        "fmul z12.d, p0/m, z12.d, z20.d \n\t"
        "fmul z13.d, p0/m, z13.d, z21.d \n\t"
        "fmul z14.d, p0/m, z14.d, z22.d \n\t"
        "fmul z15.d, p0/m, z15.d, z23.d \n\t"
        "fmul z0.d, p0/m, z0.d, z8.d \n\t"
        "fmul z1.d, p0/m, z1.d, z9.d \n\t"
        "fmul z2.d, p0/m, z2.d, z10.d \n\t"
        "fmul z3.d, p0/m, z3.d, z11.d \n\t"
        "fmul z4.d, p0/m, z4.d, z12.d \n\t"
        "fmul z5.d, p0/m, z5.d, z13.d \n\t"
        "fmul z6.d, p0/m, z6.d, z14.d \n\t"
        "fmul z7.d, p0/m, z7.d, z15.d \n\t"
        "fmul z8.d, p0/m, z8.d, z16.d \n\t"
        "fmul z9.d, p0/m, z9.d, z17.d \n\t"
        "fmul z10.d, p0/m, z10.d, z18.d \n\t"
        "fmul z11.d, p0/m, z11.d, z19.d \n\t"
        "fmul z12.d, p0/m, z12.d, z20.d \n\t"
        "fmul z13.d, p0/m, z13.d, z21.d \n\t"
        "fmul z14.d, p0/m, z14.d, z22.d \n\t"
        "fmul z15.d, p0/m, z15.d, z23.d \n\t"
        "fmul z0.d, p0/m, z0.d, z8.d \n\t"
        "fmul z1.d, p0/m, z1.d, z9.d \n\t"
        "fmul z2.d, p0/m, z2.d, z10.d \n\t"
        "fmul z3.d, p0/m, z3.d, z11.d \n\t"
        "fmul z4.d, p0/m, z4.d, z12.d \n\t"
        "fmul z5.d, p0/m, z5.d, z13.d \n\t"
        "fmul z6.d, p0/m, z6.d, z14.d \n\t"
        "fmul z7.d, p0/m, z7.d, z15.d \n\t"
        "fmul z8.d, p0/m, z8.d, z16.d \n\t"
        "fmul z9.d, p0/m, z9.d, z17.d \n\t"
        "fmul z10.d, p0/m, z10.d, z18.d \n\t"
        "fmul z11.d, p0/m, z11.d, z19.d \n\t"
        "fmul z12.d, p0/m, z12.d, z20.d \n\t"
        "fmul z13.d, p0/m, z13.d, z21.d \n\t"
        "fmul z14.d, p0/m, z14.d, z22.d \n\t"
        "fmul z15.d, p0/m, z15.d, z23.d \n\t"
        );
    }
}

