
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla z%d.d range(0,8) z%d.d [i%8 for i in range(2,10)] z%d.d[0] [i%8 for i in range(4,12)]";
int lanes = 2;
int lane_ops = 2;
int block_inst = 8;
int unroll = 8;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        "fmla z0.d, z2.d, z4.d[0] \n\t"
        "fmla z1.d, z3.d, z5.d[0] \n\t"
        "fmla z2.d, z4.d, z6.d[0] \n\t"
        "fmla z3.d, z5.d, z7.d[0] \n\t"
        "fmla z4.d, z6.d, z0.d[0] \n\t"
        "fmla z5.d, z7.d, z1.d[0] \n\t"
        "fmla z6.d, z0.d, z2.d[0] \n\t"
        "fmla z7.d, z1.d, z3.d[0] \n\t"
        : /* no input */
        : /* no output */
        : "z0", "z1", "z2", "z3", "z4", "z5", "z6", "z7"
        );
    }
}

