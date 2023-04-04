
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla z%d.s range(0,16) p0/m None z%d.s range(8,24) z%d.s range(16,32)";
int lanes = 4;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.s, p0/m, z8.s, z16.s \n\t"
        "fmla z1.s, p0/m, z9.s, z17.s \n\t"
        "fmla z2.s, p0/m, z10.s, z18.s \n\t"
        "fmla z3.s, p0/m, z11.s, z19.s \n\t"
        "fmla z4.s, p0/m, z12.s, z20.s \n\t"
        "fmla z5.s, p0/m, z13.s, z21.s \n\t"
        "fmla z6.s, p0/m, z14.s, z22.s \n\t"
        "fmla z7.s, p0/m, z15.s, z23.s \n\t"
        "fmla z8.s, p0/m, z16.s, z24.s \n\t"
        "fmla z9.s, p0/m, z17.s, z25.s \n\t"
        "fmla z10.s, p0/m, z18.s, z26.s \n\t"
        "fmla z11.s, p0/m, z19.s, z27.s \n\t"
        "fmla z12.s, p0/m, z20.s, z28.s \n\t"
        "fmla z13.s, p0/m, z21.s, z29.s \n\t"
        "fmla z14.s, p0/m, z22.s, z30.s \n\t"
        "fmla z15.s, p0/m, z23.s, z31.s \n\t"
        "fmla z0.s, p0/m, z8.s, z16.s \n\t"
        "fmla z1.s, p0/m, z9.s, z17.s \n\t"
        "fmla z2.s, p0/m, z10.s, z18.s \n\t"
        "fmla z3.s, p0/m, z11.s, z19.s \n\t"
        "fmla z4.s, p0/m, z12.s, z20.s \n\t"
        "fmla z5.s, p0/m, z13.s, z21.s \n\t"
        "fmla z6.s, p0/m, z14.s, z22.s \n\t"
        "fmla z7.s, p0/m, z15.s, z23.s \n\t"
        "fmla z8.s, p0/m, z16.s, z24.s \n\t"
        "fmla z9.s, p0/m, z17.s, z25.s \n\t"
        "fmla z10.s, p0/m, z18.s, z26.s \n\t"
        "fmla z11.s, p0/m, z19.s, z27.s \n\t"
        "fmla z12.s, p0/m, z20.s, z28.s \n\t"
        "fmla z13.s, p0/m, z21.s, z29.s \n\t"
        "fmla z14.s, p0/m, z22.s, z30.s \n\t"
        "fmla z15.s, p0/m, z23.s, z31.s \n\t"
        "fmla z0.s, p0/m, z8.s, z16.s \n\t"
        "fmla z1.s, p0/m, z9.s, z17.s \n\t"
        "fmla z2.s, p0/m, z10.s, z18.s \n\t"
        "fmla z3.s, p0/m, z11.s, z19.s \n\t"
        "fmla z4.s, p0/m, z12.s, z20.s \n\t"
        "fmla z5.s, p0/m, z13.s, z21.s \n\t"
        "fmla z6.s, p0/m, z14.s, z22.s \n\t"
        "fmla z7.s, p0/m, z15.s, z23.s \n\t"
        "fmla z8.s, p0/m, z16.s, z24.s \n\t"
        "fmla z9.s, p0/m, z17.s, z25.s \n\t"
        "fmla z10.s, p0/m, z18.s, z26.s \n\t"
        "fmla z11.s, p0/m, z19.s, z27.s \n\t"
        "fmla z12.s, p0/m, z20.s, z28.s \n\t"
        "fmla z13.s, p0/m, z21.s, z29.s \n\t"
        "fmla z14.s, p0/m, z22.s, z30.s \n\t"
        "fmla z15.s, p0/m, z23.s, z31.s \n\t"
        "fmla z0.s, p0/m, z8.s, z16.s \n\t"
        "fmla z1.s, p0/m, z9.s, z17.s \n\t"
        "fmla z2.s, p0/m, z10.s, z18.s \n\t"
        "fmla z3.s, p0/m, z11.s, z19.s \n\t"
        "fmla z4.s, p0/m, z12.s, z20.s \n\t"
        "fmla z5.s, p0/m, z13.s, z21.s \n\t"
        "fmla z6.s, p0/m, z14.s, z22.s \n\t"
        "fmla z7.s, p0/m, z15.s, z23.s \n\t"
        "fmla z8.s, p0/m, z16.s, z24.s \n\t"
        "fmla z9.s, p0/m, z17.s, z25.s \n\t"
        "fmla z10.s, p0/m, z18.s, z26.s \n\t"
        "fmla z11.s, p0/m, z19.s, z27.s \n\t"
        "fmla z12.s, p0/m, z20.s, z28.s \n\t"
        "fmla z13.s, p0/m, z21.s, z29.s \n\t"
        "fmla z14.s, p0/m, z22.s, z30.s \n\t"
        "fmla z15.s, p0/m, z23.s, z31.s \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z10", "z11", "z12", "z13", "z14", "z15", "z16", "z17", "z18", "z19", "z2", "z20", "z21", "z22", "z23", "z24", "z25", "z26", "z27", "z28", "z29", "z3", "z30", "z31", "z4", "z5", "z6", "z7", "z8", "z9"
        );
    }
}

