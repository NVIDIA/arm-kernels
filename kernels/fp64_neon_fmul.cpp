
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmul v%d.2d range(0,16) v%d.2d range(8,24) v%d.2d range(16,32)";
int lanes = 2;
int lane_ops = 1;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul v0.2d, v8.2d, v16.2d \n\t"
        "fmul v1.2d, v9.2d, v17.2d \n\t"
        "fmul v2.2d, v10.2d, v18.2d \n\t"
        "fmul v3.2d, v11.2d, v19.2d \n\t"
        "fmul v4.2d, v12.2d, v20.2d \n\t"
        "fmul v5.2d, v13.2d, v21.2d \n\t"
        "fmul v6.2d, v14.2d, v22.2d \n\t"
        "fmul v7.2d, v15.2d, v23.2d \n\t"
        "fmul v8.2d, v16.2d, v24.2d \n\t"
        "fmul v9.2d, v17.2d, v25.2d \n\t"
        "fmul v10.2d, v18.2d, v26.2d \n\t"
        "fmul v11.2d, v19.2d, v27.2d \n\t"
        "fmul v12.2d, v20.2d, v28.2d \n\t"
        "fmul v13.2d, v21.2d, v29.2d \n\t"
        "fmul v14.2d, v22.2d, v30.2d \n\t"
        "fmul v15.2d, v23.2d, v31.2d \n\t"
        "fmul v0.2d, v8.2d, v16.2d \n\t"
        "fmul v1.2d, v9.2d, v17.2d \n\t"
        "fmul v2.2d, v10.2d, v18.2d \n\t"
        "fmul v3.2d, v11.2d, v19.2d \n\t"
        "fmul v4.2d, v12.2d, v20.2d \n\t"
        "fmul v5.2d, v13.2d, v21.2d \n\t"
        "fmul v6.2d, v14.2d, v22.2d \n\t"
        "fmul v7.2d, v15.2d, v23.2d \n\t"
        "fmul v8.2d, v16.2d, v24.2d \n\t"
        "fmul v9.2d, v17.2d, v25.2d \n\t"
        "fmul v10.2d, v18.2d, v26.2d \n\t"
        "fmul v11.2d, v19.2d, v27.2d \n\t"
        "fmul v12.2d, v20.2d, v28.2d \n\t"
        "fmul v13.2d, v21.2d, v29.2d \n\t"
        "fmul v14.2d, v22.2d, v30.2d \n\t"
        "fmul v15.2d, v23.2d, v31.2d \n\t"
        "fmul v0.2d, v8.2d, v16.2d \n\t"
        "fmul v1.2d, v9.2d, v17.2d \n\t"
        "fmul v2.2d, v10.2d, v18.2d \n\t"
        "fmul v3.2d, v11.2d, v19.2d \n\t"
        "fmul v4.2d, v12.2d, v20.2d \n\t"
        "fmul v5.2d, v13.2d, v21.2d \n\t"
        "fmul v6.2d, v14.2d, v22.2d \n\t"
        "fmul v7.2d, v15.2d, v23.2d \n\t"
        "fmul v8.2d, v16.2d, v24.2d \n\t"
        "fmul v9.2d, v17.2d, v25.2d \n\t"
        "fmul v10.2d, v18.2d, v26.2d \n\t"
        "fmul v11.2d, v19.2d, v27.2d \n\t"
        "fmul v12.2d, v20.2d, v28.2d \n\t"
        "fmul v13.2d, v21.2d, v29.2d \n\t"
        "fmul v14.2d, v22.2d, v30.2d \n\t"
        "fmul v15.2d, v23.2d, v31.2d \n\t"
        "fmul v0.2d, v8.2d, v16.2d \n\t"
        "fmul v1.2d, v9.2d, v17.2d \n\t"
        "fmul v2.2d, v10.2d, v18.2d \n\t"
        "fmul v3.2d, v11.2d, v19.2d \n\t"
        "fmul v4.2d, v12.2d, v20.2d \n\t"
        "fmul v5.2d, v13.2d, v21.2d \n\t"
        "fmul v6.2d, v14.2d, v22.2d \n\t"
        "fmul v7.2d, v15.2d, v23.2d \n\t"
        "fmul v8.2d, v16.2d, v24.2d \n\t"
        "fmul v9.2d, v17.2d, v25.2d \n\t"
        "fmul v10.2d, v18.2d, v26.2d \n\t"
        "fmul v11.2d, v19.2d, v27.2d \n\t"
        "fmul v12.2d, v20.2d, v28.2d \n\t"
        "fmul v13.2d, v21.2d, v29.2d \n\t"
        "fmul v14.2d, v22.2d, v30.2d \n\t"
        "fmul v15.2d, v23.2d, v31.2d \n\t"
        );
    }
}

