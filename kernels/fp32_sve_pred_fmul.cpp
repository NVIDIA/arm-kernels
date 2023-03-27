
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.s range(0,16) p0/m None z%d.s range(0,16) z%d.s range(8,24)";
int lanes = 4;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.s, p0/m, z0.s, z8.s \n\t"
        "fmul z1.s, p0/m, z1.s, z9.s \n\t"
        "fmul z2.s, p0/m, z2.s, z10.s \n\t"
        "fmul z3.s, p0/m, z3.s, z11.s \n\t"
        "fmul z4.s, p0/m, z4.s, z12.s \n\t"
        "fmul z5.s, p0/m, z5.s, z13.s \n\t"
        "fmul z6.s, p0/m, z6.s, z14.s \n\t"
        "fmul z7.s, p0/m, z7.s, z15.s \n\t"
        "fmul z8.s, p0/m, z8.s, z16.s \n\t"
        "fmul z9.s, p0/m, z9.s, z17.s \n\t"
        "fmul z10.s, p0/m, z10.s, z18.s \n\t"
        "fmul z11.s, p0/m, z11.s, z19.s \n\t"
        "fmul z12.s, p0/m, z12.s, z20.s \n\t"
        "fmul z13.s, p0/m, z13.s, z21.s \n\t"
        "fmul z14.s, p0/m, z14.s, z22.s \n\t"
        "fmul z15.s, p0/m, z15.s, z23.s \n\t"
        "fmul z0.s, p0/m, z0.s, z8.s \n\t"
        "fmul z1.s, p0/m, z1.s, z9.s \n\t"
        "fmul z2.s, p0/m, z2.s, z10.s \n\t"
        "fmul z3.s, p0/m, z3.s, z11.s \n\t"
        "fmul z4.s, p0/m, z4.s, z12.s \n\t"
        "fmul z5.s, p0/m, z5.s, z13.s \n\t"
        "fmul z6.s, p0/m, z6.s, z14.s \n\t"
        "fmul z7.s, p0/m, z7.s, z15.s \n\t"
        "fmul z8.s, p0/m, z8.s, z16.s \n\t"
        "fmul z9.s, p0/m, z9.s, z17.s \n\t"
        "fmul z10.s, p0/m, z10.s, z18.s \n\t"
        "fmul z11.s, p0/m, z11.s, z19.s \n\t"
        "fmul z12.s, p0/m, z12.s, z20.s \n\t"
        "fmul z13.s, p0/m, z13.s, z21.s \n\t"
        "fmul z14.s, p0/m, z14.s, z22.s \n\t"
        "fmul z15.s, p0/m, z15.s, z23.s \n\t"
        "fmul z0.s, p0/m, z0.s, z8.s \n\t"
        "fmul z1.s, p0/m, z1.s, z9.s \n\t"
        "fmul z2.s, p0/m, z2.s, z10.s \n\t"
        "fmul z3.s, p0/m, z3.s, z11.s \n\t"
        "fmul z4.s, p0/m, z4.s, z12.s \n\t"
        "fmul z5.s, p0/m, z5.s, z13.s \n\t"
        "fmul z6.s, p0/m, z6.s, z14.s \n\t"
        "fmul z7.s, p0/m, z7.s, z15.s \n\t"
        "fmul z8.s, p0/m, z8.s, z16.s \n\t"
        "fmul z9.s, p0/m, z9.s, z17.s \n\t"
        "fmul z10.s, p0/m, z10.s, z18.s \n\t"
        "fmul z11.s, p0/m, z11.s, z19.s \n\t"
        "fmul z12.s, p0/m, z12.s, z20.s \n\t"
        "fmul z13.s, p0/m, z13.s, z21.s \n\t"
        "fmul z14.s, p0/m, z14.s, z22.s \n\t"
        "fmul z15.s, p0/m, z15.s, z23.s \n\t"
        "fmul z0.s, p0/m, z0.s, z8.s \n\t"
        "fmul z1.s, p0/m, z1.s, z9.s \n\t"
        "fmul z2.s, p0/m, z2.s, z10.s \n\t"
        "fmul z3.s, p0/m, z3.s, z11.s \n\t"
        "fmul z4.s, p0/m, z4.s, z12.s \n\t"
        "fmul z5.s, p0/m, z5.s, z13.s \n\t"
        "fmul z6.s, p0/m, z6.s, z14.s \n\t"
        "fmul z7.s, p0/m, z7.s, z15.s \n\t"
        "fmul z8.s, p0/m, z8.s, z16.s \n\t"
        "fmul z9.s, p0/m, z9.s, z17.s \n\t"
        "fmul z10.s, p0/m, z10.s, z18.s \n\t"
        "fmul z11.s, p0/m, z11.s, z19.s \n\t"
        "fmul z12.s, p0/m, z12.s, z20.s \n\t"
        "fmul z13.s, p0/m, z13.s, z21.s \n\t"
        "fmul z14.s, p0/m, z14.s, z22.s \n\t"
        "fmul z15.s, p0/m, z15.s, z23.s \n\t"
        );
    }
}

