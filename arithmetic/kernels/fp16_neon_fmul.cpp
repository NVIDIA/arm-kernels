
//
// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
// Author: John Linford <jlinford@nvidia.com>
//
// This file was autogenerated by kgen.py
//


const char * description = "4( 32(NEON_FMUL_16b) )";
unsigned long block_inst = 32;
unsigned long block_ops = (32*(1*(128/16)));
unsigned long unroll = 4;

void kernel(unsigned long iters)
{
    for (unsigned long i=0; i<iters; ++i) {
        asm volatile (
        "fmul v0.8h, v8.8h, v16.8h \n\t"
        "fmul v1.8h, v9.8h, v17.8h \n\t"
        "fmul v2.8h, v10.8h, v18.8h \n\t"
        "fmul v3.8h, v11.8h, v19.8h \n\t"
        "fmul v4.8h, v12.8h, v20.8h \n\t"
        "fmul v5.8h, v13.8h, v21.8h \n\t"
        "fmul v6.8h, v14.8h, v22.8h \n\t"
        "fmul v7.8h, v15.8h, v23.8h \n\t"
        "fmul v8.8h, v16.8h, v24.8h \n\t"
        "fmul v9.8h, v17.8h, v25.8h \n\t"
        "fmul v10.8h, v18.8h, v26.8h \n\t"
        "fmul v11.8h, v19.8h, v27.8h \n\t"
        "fmul v12.8h, v20.8h, v28.8h \n\t"
        "fmul v13.8h, v21.8h, v29.8h \n\t"
        "fmul v14.8h, v22.8h, v30.8h \n\t"
        "fmul v15.8h, v23.8h, v31.8h \n\t"
        "fmul v16.8h, v24.8h, v0.8h \n\t"
        "fmul v17.8h, v25.8h, v1.8h \n\t"
        "fmul v18.8h, v26.8h, v2.8h \n\t"
        "fmul v19.8h, v27.8h, v3.8h \n\t"
        "fmul v20.8h, v28.8h, v4.8h \n\t"
        "fmul v21.8h, v29.8h, v5.8h \n\t"
        "fmul v22.8h, v30.8h, v6.8h \n\t"
        "fmul v23.8h, v31.8h, v7.8h \n\t"
        "fmul v24.8h, v0.8h, v8.8h \n\t"
        "fmul v25.8h, v1.8h, v9.8h \n\t"
        "fmul v26.8h, v2.8h, v10.8h \n\t"
        "fmul v27.8h, v3.8h, v11.8h \n\t"
        "fmul v28.8h, v4.8h, v12.8h \n\t"
        "fmul v29.8h, v5.8h, v13.8h \n\t"
        "fmul v30.8h, v6.8h, v14.8h \n\t"
        "fmul v31.8h, v7.8h, v15.8h \n\t"
        "fmul v0.8h, v8.8h, v16.8h \n\t"
        "fmul v1.8h, v9.8h, v17.8h \n\t"
        "fmul v2.8h, v10.8h, v18.8h \n\t"
        "fmul v3.8h, v11.8h, v19.8h \n\t"
        "fmul v4.8h, v12.8h, v20.8h \n\t"
        "fmul v5.8h, v13.8h, v21.8h \n\t"
        "fmul v6.8h, v14.8h, v22.8h \n\t"
        "fmul v7.8h, v15.8h, v23.8h \n\t"
        "fmul v8.8h, v16.8h, v24.8h \n\t"
        "fmul v9.8h, v17.8h, v25.8h \n\t"
        "fmul v10.8h, v18.8h, v26.8h \n\t"
        "fmul v11.8h, v19.8h, v27.8h \n\t"
        "fmul v12.8h, v20.8h, v28.8h \n\t"
        "fmul v13.8h, v21.8h, v29.8h \n\t"
        "fmul v14.8h, v22.8h, v30.8h \n\t"
        "fmul v15.8h, v23.8h, v31.8h \n\t"
        "fmul v16.8h, v24.8h, v0.8h \n\t"
        "fmul v17.8h, v25.8h, v1.8h \n\t"
        "fmul v18.8h, v26.8h, v2.8h \n\t"
        "fmul v19.8h, v27.8h, v3.8h \n\t"
        "fmul v20.8h, v28.8h, v4.8h \n\t"
        "fmul v21.8h, v29.8h, v5.8h \n\t"
        "fmul v22.8h, v30.8h, v6.8h \n\t"
        "fmul v23.8h, v31.8h, v7.8h \n\t"
        "fmul v24.8h, v0.8h, v8.8h \n\t"
        "fmul v25.8h, v1.8h, v9.8h \n\t"
        "fmul v26.8h, v2.8h, v10.8h \n\t"
        "fmul v27.8h, v3.8h, v11.8h \n\t"
        "fmul v28.8h, v4.8h, v12.8h \n\t"
        "fmul v29.8h, v5.8h, v13.8h \n\t"
        "fmul v30.8h, v6.8h, v14.8h \n\t"
        "fmul v31.8h, v7.8h, v15.8h \n\t"
        "fmul v0.8h, v8.8h, v16.8h \n\t"
        "fmul v1.8h, v9.8h, v17.8h \n\t"
        "fmul v2.8h, v10.8h, v18.8h \n\t"
        "fmul v3.8h, v11.8h, v19.8h \n\t"
        "fmul v4.8h, v12.8h, v20.8h \n\t"
        "fmul v5.8h, v13.8h, v21.8h \n\t"
        "fmul v6.8h, v14.8h, v22.8h \n\t"
        "fmul v7.8h, v15.8h, v23.8h \n\t"
        "fmul v8.8h, v16.8h, v24.8h \n\t"
        "fmul v9.8h, v17.8h, v25.8h \n\t"
        "fmul v10.8h, v18.8h, v26.8h \n\t"
        "fmul v11.8h, v19.8h, v27.8h \n\t"
        "fmul v12.8h, v20.8h, v28.8h \n\t"
        "fmul v13.8h, v21.8h, v29.8h \n\t"
        "fmul v14.8h, v22.8h, v30.8h \n\t"
        "fmul v15.8h, v23.8h, v31.8h \n\t"
        "fmul v16.8h, v24.8h, v0.8h \n\t"
        "fmul v17.8h, v25.8h, v1.8h \n\t"
        "fmul v18.8h, v26.8h, v2.8h \n\t"
        "fmul v19.8h, v27.8h, v3.8h \n\t"
        "fmul v20.8h, v28.8h, v4.8h \n\t"
        "fmul v21.8h, v29.8h, v5.8h \n\t"
        "fmul v22.8h, v30.8h, v6.8h \n\t"
        "fmul v23.8h, v31.8h, v7.8h \n\t"
        "fmul v24.8h, v0.8h, v8.8h \n\t"
        "fmul v25.8h, v1.8h, v9.8h \n\t"
        "fmul v26.8h, v2.8h, v10.8h \n\t"
        "fmul v27.8h, v3.8h, v11.8h \n\t"
        "fmul v28.8h, v4.8h, v12.8h \n\t"
        "fmul v29.8h, v5.8h, v13.8h \n\t"
        "fmul v30.8h, v6.8h, v14.8h \n\t"
        "fmul v31.8h, v7.8h, v15.8h \n\t"
        "fmul v0.8h, v8.8h, v16.8h \n\t"
        "fmul v1.8h, v9.8h, v17.8h \n\t"
        "fmul v2.8h, v10.8h, v18.8h \n\t"
        "fmul v3.8h, v11.8h, v19.8h \n\t"
        "fmul v4.8h, v12.8h, v20.8h \n\t"
        "fmul v5.8h, v13.8h, v21.8h \n\t"
        "fmul v6.8h, v14.8h, v22.8h \n\t"
        "fmul v7.8h, v15.8h, v23.8h \n\t"
        "fmul v8.8h, v16.8h, v24.8h \n\t"
        "fmul v9.8h, v17.8h, v25.8h \n\t"
        "fmul v10.8h, v18.8h, v26.8h \n\t"
        "fmul v11.8h, v19.8h, v27.8h \n\t"
        "fmul v12.8h, v20.8h, v28.8h \n\t"
        "fmul v13.8h, v21.8h, v29.8h \n\t"
        "fmul v14.8h, v22.8h, v30.8h \n\t"
        "fmul v15.8h, v23.8h, v31.8h \n\t"
        "fmul v16.8h, v24.8h, v0.8h \n\t"
        "fmul v17.8h, v25.8h, v1.8h \n\t"
        "fmul v18.8h, v26.8h, v2.8h \n\t"
        "fmul v19.8h, v27.8h, v3.8h \n\t"
        "fmul v20.8h, v28.8h, v4.8h \n\t"
        "fmul v21.8h, v29.8h, v5.8h \n\t"
        "fmul v22.8h, v30.8h, v6.8h \n\t"
        "fmul v23.8h, v31.8h, v7.8h \n\t"
        "fmul v24.8h, v0.8h, v8.8h \n\t"
        "fmul v25.8h, v1.8h, v9.8h \n\t"
        "fmul v26.8h, v2.8h, v10.8h \n\t"
        "fmul v27.8h, v3.8h, v11.8h \n\t"
        "fmul v28.8h, v4.8h, v12.8h \n\t"
        "fmul v29.8h, v5.8h, v13.8h \n\t"
        "fmul v30.8h, v6.8h, v14.8h \n\t"
        "fmul v31.8h, v7.8h, v15.8h \n\t"
        : /* no input */
        : /* no output */
        : "v0", "v1", "v10", "v11", "v12", "v13", "v14", "v15", "v16", "v17", "v18", "v19", "v2", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27", "v28", "v29", "v3", "v30", "v31", "v4", "v5", "v6", "v7", "v8", "v9"
        );
    }
}

