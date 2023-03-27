
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla v%d.4s range(0,16) v%d.4s range(8,24) v%d.4s range(16,32)";
int lanes = 4;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla v0.4s, v8.4s, v16.4s \n\t"
        "fmla v1.4s, v9.4s, v17.4s \n\t"
        "fmla v2.4s, v10.4s, v18.4s \n\t"
        "fmla v3.4s, v11.4s, v19.4s \n\t"
        "fmla v4.4s, v12.4s, v20.4s \n\t"
        "fmla v5.4s, v13.4s, v21.4s \n\t"
        "fmla v6.4s, v14.4s, v22.4s \n\t"
        "fmla v7.4s, v15.4s, v23.4s \n\t"
        "fmla v8.4s, v16.4s, v24.4s \n\t"
        "fmla v9.4s, v17.4s, v25.4s \n\t"
        "fmla v10.4s, v18.4s, v26.4s \n\t"
        "fmla v11.4s, v19.4s, v27.4s \n\t"
        "fmla v12.4s, v20.4s, v28.4s \n\t"
        "fmla v13.4s, v21.4s, v29.4s \n\t"
        "fmla v14.4s, v22.4s, v30.4s \n\t"
        "fmla v15.4s, v23.4s, v31.4s \n\t"
        "fmla v0.4s, v8.4s, v16.4s \n\t"
        "fmla v1.4s, v9.4s, v17.4s \n\t"
        "fmla v2.4s, v10.4s, v18.4s \n\t"
        "fmla v3.4s, v11.4s, v19.4s \n\t"
        "fmla v4.4s, v12.4s, v20.4s \n\t"
        "fmla v5.4s, v13.4s, v21.4s \n\t"
        "fmla v6.4s, v14.4s, v22.4s \n\t"
        "fmla v7.4s, v15.4s, v23.4s \n\t"
        "fmla v8.4s, v16.4s, v24.4s \n\t"
        "fmla v9.4s, v17.4s, v25.4s \n\t"
        "fmla v10.4s, v18.4s, v26.4s \n\t"
        "fmla v11.4s, v19.4s, v27.4s \n\t"
        "fmla v12.4s, v20.4s, v28.4s \n\t"
        "fmla v13.4s, v21.4s, v29.4s \n\t"
        "fmla v14.4s, v22.4s, v30.4s \n\t"
        "fmla v15.4s, v23.4s, v31.4s \n\t"
        "fmla v0.4s, v8.4s, v16.4s \n\t"
        "fmla v1.4s, v9.4s, v17.4s \n\t"
        "fmla v2.4s, v10.4s, v18.4s \n\t"
        "fmla v3.4s, v11.4s, v19.4s \n\t"
        "fmla v4.4s, v12.4s, v20.4s \n\t"
        "fmla v5.4s, v13.4s, v21.4s \n\t"
        "fmla v6.4s, v14.4s, v22.4s \n\t"
        "fmla v7.4s, v15.4s, v23.4s \n\t"
        "fmla v8.4s, v16.4s, v24.4s \n\t"
        "fmla v9.4s, v17.4s, v25.4s \n\t"
        "fmla v10.4s, v18.4s, v26.4s \n\t"
        "fmla v11.4s, v19.4s, v27.4s \n\t"
        "fmla v12.4s, v20.4s, v28.4s \n\t"
        "fmla v13.4s, v21.4s, v29.4s \n\t"
        "fmla v14.4s, v22.4s, v30.4s \n\t"
        "fmla v15.4s, v23.4s, v31.4s \n\t"
        "fmla v0.4s, v8.4s, v16.4s \n\t"
        "fmla v1.4s, v9.4s, v17.4s \n\t"
        "fmla v2.4s, v10.4s, v18.4s \n\t"
        "fmla v3.4s, v11.4s, v19.4s \n\t"
        "fmla v4.4s, v12.4s, v20.4s \n\t"
        "fmla v5.4s, v13.4s, v21.4s \n\t"
        "fmla v6.4s, v14.4s, v22.4s \n\t"
        "fmla v7.4s, v15.4s, v23.4s \n\t"
        "fmla v8.4s, v16.4s, v24.4s \n\t"
        "fmla v9.4s, v17.4s, v25.4s \n\t"
        "fmla v10.4s, v18.4s, v26.4s \n\t"
        "fmla v11.4s, v19.4s, v27.4s \n\t"
        "fmla v12.4s, v20.4s, v28.4s \n\t"
        "fmla v13.4s, v21.4s, v29.4s \n\t"
        "fmla v14.4s, v22.4s, v30.4s \n\t"
        "fmla v15.4s, v23.4s, v31.4s \n\t"
        );
    }
}

