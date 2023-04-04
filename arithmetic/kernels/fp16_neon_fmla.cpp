
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 

const char * description = "fmla v%d.8h range(0,16) v%d.8h range(8,24) v%d.8h range(16,32)";
int lanes = 8;
int lane_ops = 2;
int block_inst = 16;
int unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmla v0.8h, v8.8h, v16.8h \n\t"
        "fmla v1.8h, v9.8h, v17.8h \n\t"
        "fmla v2.8h, v10.8h, v18.8h \n\t"
        "fmla v3.8h, v11.8h, v19.8h \n\t"
        "fmla v4.8h, v12.8h, v20.8h \n\t"
        "fmla v5.8h, v13.8h, v21.8h \n\t"
        "fmla v6.8h, v14.8h, v22.8h \n\t"
        "fmla v7.8h, v15.8h, v23.8h \n\t"
        "fmla v8.8h, v16.8h, v24.8h \n\t"
        "fmla v9.8h, v17.8h, v25.8h \n\t"
        "fmla v10.8h, v18.8h, v26.8h \n\t"
        "fmla v11.8h, v19.8h, v27.8h \n\t"
        "fmla v12.8h, v20.8h, v28.8h \n\t"
        "fmla v13.8h, v21.8h, v29.8h \n\t"
        "fmla v14.8h, v22.8h, v30.8h \n\t"
        "fmla v15.8h, v23.8h, v31.8h \n\t"
        "fmla v0.8h, v8.8h, v16.8h \n\t"
        "fmla v1.8h, v9.8h, v17.8h \n\t"
        "fmla v2.8h, v10.8h, v18.8h \n\t"
        "fmla v3.8h, v11.8h, v19.8h \n\t"
        "fmla v4.8h, v12.8h, v20.8h \n\t"
        "fmla v5.8h, v13.8h, v21.8h \n\t"
        "fmla v6.8h, v14.8h, v22.8h \n\t"
        "fmla v7.8h, v15.8h, v23.8h \n\t"
        "fmla v8.8h, v16.8h, v24.8h \n\t"
        "fmla v9.8h, v17.8h, v25.8h \n\t"
        "fmla v10.8h, v18.8h, v26.8h \n\t"
        "fmla v11.8h, v19.8h, v27.8h \n\t"
        "fmla v12.8h, v20.8h, v28.8h \n\t"
        "fmla v13.8h, v21.8h, v29.8h \n\t"
        "fmla v14.8h, v22.8h, v30.8h \n\t"
        "fmla v15.8h, v23.8h, v31.8h \n\t"
        "fmla v0.8h, v8.8h, v16.8h \n\t"
        "fmla v1.8h, v9.8h, v17.8h \n\t"
        "fmla v2.8h, v10.8h, v18.8h \n\t"
        "fmla v3.8h, v11.8h, v19.8h \n\t"
        "fmla v4.8h, v12.8h, v20.8h \n\t"
        "fmla v5.8h, v13.8h, v21.8h \n\t"
        "fmla v6.8h, v14.8h, v22.8h \n\t"
        "fmla v7.8h, v15.8h, v23.8h \n\t"
        "fmla v8.8h, v16.8h, v24.8h \n\t"
        "fmla v9.8h, v17.8h, v25.8h \n\t"
        "fmla v10.8h, v18.8h, v26.8h \n\t"
        "fmla v11.8h, v19.8h, v27.8h \n\t"
        "fmla v12.8h, v20.8h, v28.8h \n\t"
        "fmla v13.8h, v21.8h, v29.8h \n\t"
        "fmla v14.8h, v22.8h, v30.8h \n\t"
        "fmla v15.8h, v23.8h, v31.8h \n\t"
        "fmla v0.8h, v8.8h, v16.8h \n\t"
        "fmla v1.8h, v9.8h, v17.8h \n\t"
        "fmla v2.8h, v10.8h, v18.8h \n\t"
        "fmla v3.8h, v11.8h, v19.8h \n\t"
        "fmla v4.8h, v12.8h, v20.8h \n\t"
        "fmla v5.8h, v13.8h, v21.8h \n\t"
        "fmla v6.8h, v14.8h, v22.8h \n\t"
        "fmla v7.8h, v15.8h, v23.8h \n\t"
        "fmla v8.8h, v16.8h, v24.8h \n\t"
        "fmla v9.8h, v17.8h, v25.8h \n\t"
        "fmla v10.8h, v18.8h, v26.8h \n\t"
        "fmla v11.8h, v19.8h, v27.8h \n\t"
        "fmla v12.8h, v20.8h, v28.8h \n\t"
        "fmla v13.8h, v21.8h, v29.8h \n\t"
        "fmla v14.8h, v22.8h, v30.8h \n\t"
        "fmla v15.8h, v23.8h, v31.8h \n\t"
        );
    }
}

