
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla z%d.s range(0,8) z%d.s [i%8 for i in range(2,10)] z%d.s[0] [i%8 for i in range(4,12)]";
int lanes = 4;
int lane_ops = 2;
int block_inst = 8;
int unroll = 8;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        "fmla z0.s, z2.s, z4.s[0] \n\t"
        "fmla z1.s, z3.s, z5.s[0] \n\t"
        "fmla z2.s, z4.s, z6.s[0] \n\t"
        "fmla z3.s, z5.s, z7.s[0] \n\t"
        "fmla z4.s, z6.s, z0.s[0] \n\t"
        "fmla z5.s, z7.s, z1.s[0] \n\t"
        "fmla z6.s, z0.s, z2.s[0] \n\t"
        "fmla z7.s, z1.s, z3.s[0] \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z2", "z3", "z4", "z5", "z6", "z7"
        );
    }
}

