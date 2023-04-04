
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul v%d.4s range(0,16) v%d.4s range(8,24) v%d.4s range(16,32)";
int lanes = 4;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul v0.4s, v8.4s, v16.4s \n\t"
        "fmul v1.4s, v9.4s, v17.4s \n\t"
        "fmul v2.4s, v10.4s, v18.4s \n\t"
        "fmul v3.4s, v11.4s, v19.4s \n\t"
        "fmul v4.4s, v12.4s, v20.4s \n\t"
        "fmul v5.4s, v13.4s, v21.4s \n\t"
        "fmul v6.4s, v14.4s, v22.4s \n\t"
        "fmul v7.4s, v15.4s, v23.4s \n\t"
        "fmul v8.4s, v16.4s, v24.4s \n\t"
        "fmul v9.4s, v17.4s, v25.4s \n\t"
        "fmul v10.4s, v18.4s, v26.4s \n\t"
        "fmul v11.4s, v19.4s, v27.4s \n\t"
        "fmul v12.4s, v20.4s, v28.4s \n\t"
        "fmul v13.4s, v21.4s, v29.4s \n\t"
        "fmul v14.4s, v22.4s, v30.4s \n\t"
        "fmul v15.4s, v23.4s, v31.4s \n\t"
        "fmul v0.4s, v8.4s, v16.4s \n\t"
        "fmul v1.4s, v9.4s, v17.4s \n\t"
        "fmul v2.4s, v10.4s, v18.4s \n\t"
        "fmul v3.4s, v11.4s, v19.4s \n\t"
        "fmul v4.4s, v12.4s, v20.4s \n\t"
        "fmul v5.4s, v13.4s, v21.4s \n\t"
        "fmul v6.4s, v14.4s, v22.4s \n\t"
        "fmul v7.4s, v15.4s, v23.4s \n\t"
        "fmul v8.4s, v16.4s, v24.4s \n\t"
        "fmul v9.4s, v17.4s, v25.4s \n\t"
        "fmul v10.4s, v18.4s, v26.4s \n\t"
        "fmul v11.4s, v19.4s, v27.4s \n\t"
        "fmul v12.4s, v20.4s, v28.4s \n\t"
        "fmul v13.4s, v21.4s, v29.4s \n\t"
        "fmul v14.4s, v22.4s, v30.4s \n\t"
        "fmul v15.4s, v23.4s, v31.4s \n\t"
        "fmul v0.4s, v8.4s, v16.4s \n\t"
        "fmul v1.4s, v9.4s, v17.4s \n\t"
        "fmul v2.4s, v10.4s, v18.4s \n\t"
        "fmul v3.4s, v11.4s, v19.4s \n\t"
        "fmul v4.4s, v12.4s, v20.4s \n\t"
        "fmul v5.4s, v13.4s, v21.4s \n\t"
        "fmul v6.4s, v14.4s, v22.4s \n\t"
        "fmul v7.4s, v15.4s, v23.4s \n\t"
        "fmul v8.4s, v16.4s, v24.4s \n\t"
        "fmul v9.4s, v17.4s, v25.4s \n\t"
        "fmul v10.4s, v18.4s, v26.4s \n\t"
        "fmul v11.4s, v19.4s, v27.4s \n\t"
        "fmul v12.4s, v20.4s, v28.4s \n\t"
        "fmul v13.4s, v21.4s, v29.4s \n\t"
        "fmul v14.4s, v22.4s, v30.4s \n\t"
        "fmul v15.4s, v23.4s, v31.4s \n\t"
        "fmul v0.4s, v8.4s, v16.4s \n\t"
        "fmul v1.4s, v9.4s, v17.4s \n\t"
        "fmul v2.4s, v10.4s, v18.4s \n\t"
        "fmul v3.4s, v11.4s, v19.4s \n\t"
        "fmul v4.4s, v12.4s, v20.4s \n\t"
        "fmul v5.4s, v13.4s, v21.4s \n\t"
        "fmul v6.4s, v14.4s, v22.4s \n\t"
        "fmul v7.4s, v15.4s, v23.4s \n\t"
        "fmul v8.4s, v16.4s, v24.4s \n\t"
        "fmul v9.4s, v17.4s, v25.4s \n\t"
        "fmul v10.4s, v18.4s, v26.4s \n\t"
        "fmul v11.4s, v19.4s, v27.4s \n\t"
        "fmul v12.4s, v20.4s, v28.4s \n\t"
        "fmul v13.4s, v21.4s, v29.4s \n\t"
        "fmul v14.4s, v22.4s, v30.4s \n\t"
        "fmul v15.4s, v23.4s, v31.4s \n\t"
        : /* no input */
        : /* no output */
        : "v0", "v1", "v10", "v11", "v12", "v13", "v14", "v15", "v16", "v17", "v18", "v19", "v2", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27", "v28", "v29", "v3", "v30", "v31", "v4", "v5", "v6", "v7", "v8", "v9"
        );
    }
}

