
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul z%d.h range(0,16) p0/m None z%d.h range(0,16) z%d.h range(8,24)";
int lanes = 8;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul z0.h, p0/m, z0.h, z8.h \n\t"
        "fmul z1.h, p0/m, z1.h, z9.h \n\t"
        "fmul z2.h, p0/m, z2.h, z10.h \n\t"
        "fmul z3.h, p0/m, z3.h, z11.h \n\t"
        "fmul z4.h, p0/m, z4.h, z12.h \n\t"
        "fmul z5.h, p0/m, z5.h, z13.h \n\t"
        "fmul z6.h, p0/m, z6.h, z14.h \n\t"
        "fmul z7.h, p0/m, z7.h, z15.h \n\t"
        "fmul z8.h, p0/m, z8.h, z16.h \n\t"
        "fmul z9.h, p0/m, z9.h, z17.h \n\t"
        "fmul z10.h, p0/m, z10.h, z18.h \n\t"
        "fmul z11.h, p0/m, z11.h, z19.h \n\t"
        "fmul z12.h, p0/m, z12.h, z20.h \n\t"
        "fmul z13.h, p0/m, z13.h, z21.h \n\t"
        "fmul z14.h, p0/m, z14.h, z22.h \n\t"
        "fmul z15.h, p0/m, z15.h, z23.h \n\t"
        "fmul z0.h, p0/m, z0.h, z8.h \n\t"
        "fmul z1.h, p0/m, z1.h, z9.h \n\t"
        "fmul z2.h, p0/m, z2.h, z10.h \n\t"
        "fmul z3.h, p0/m, z3.h, z11.h \n\t"
        "fmul z4.h, p0/m, z4.h, z12.h \n\t"
        "fmul z5.h, p0/m, z5.h, z13.h \n\t"
        "fmul z6.h, p0/m, z6.h, z14.h \n\t"
        "fmul z7.h, p0/m, z7.h, z15.h \n\t"
        "fmul z8.h, p0/m, z8.h, z16.h \n\t"
        "fmul z9.h, p0/m, z9.h, z17.h \n\t"
        "fmul z10.h, p0/m, z10.h, z18.h \n\t"
        "fmul z11.h, p0/m, z11.h, z19.h \n\t"
        "fmul z12.h, p0/m, z12.h, z20.h \n\t"
        "fmul z13.h, p0/m, z13.h, z21.h \n\t"
        "fmul z14.h, p0/m, z14.h, z22.h \n\t"
        "fmul z15.h, p0/m, z15.h, z23.h \n\t"
        "fmul z0.h, p0/m, z0.h, z8.h \n\t"
        "fmul z1.h, p0/m, z1.h, z9.h \n\t"
        "fmul z2.h, p0/m, z2.h, z10.h \n\t"
        "fmul z3.h, p0/m, z3.h, z11.h \n\t"
        "fmul z4.h, p0/m, z4.h, z12.h \n\t"
        "fmul z5.h, p0/m, z5.h, z13.h \n\t"
        "fmul z6.h, p0/m, z6.h, z14.h \n\t"
        "fmul z7.h, p0/m, z7.h, z15.h \n\t"
        "fmul z8.h, p0/m, z8.h, z16.h \n\t"
        "fmul z9.h, p0/m, z9.h, z17.h \n\t"
        "fmul z10.h, p0/m, z10.h, z18.h \n\t"
        "fmul z11.h, p0/m, z11.h, z19.h \n\t"
        "fmul z12.h, p0/m, z12.h, z20.h \n\t"
        "fmul z13.h, p0/m, z13.h, z21.h \n\t"
        "fmul z14.h, p0/m, z14.h, z22.h \n\t"
        "fmul z15.h, p0/m, z15.h, z23.h \n\t"
        "fmul z0.h, p0/m, z0.h, z8.h \n\t"
        "fmul z1.h, p0/m, z1.h, z9.h \n\t"
        "fmul z2.h, p0/m, z2.h, z10.h \n\t"
        "fmul z3.h, p0/m, z3.h, z11.h \n\t"
        "fmul z4.h, p0/m, z4.h, z12.h \n\t"
        "fmul z5.h, p0/m, z5.h, z13.h \n\t"
        "fmul z6.h, p0/m, z6.h, z14.h \n\t"
        "fmul z7.h, p0/m, z7.h, z15.h \n\t"
        "fmul z8.h, p0/m, z8.h, z16.h \n\t"
        "fmul z9.h, p0/m, z9.h, z17.h \n\t"
        "fmul z10.h, p0/m, z10.h, z18.h \n\t"
        "fmul z11.h, p0/m, z11.h, z19.h \n\t"
        "fmul z12.h, p0/m, z12.h, z20.h \n\t"
        "fmul z13.h, p0/m, z13.h, z21.h \n\t"
        "fmul z14.h, p0/m, z14.h, z22.h \n\t"
        "fmul z15.h, p0/m, z15.h, z23.h \n\t"
        );
    }
}

