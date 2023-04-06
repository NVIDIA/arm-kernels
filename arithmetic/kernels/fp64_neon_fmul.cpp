
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(NEON_FMUL_64b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(1*(128/64)));
unsigned long unroll = 4;

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
        : /* no input */
        : /* no output */
        : "v0", "v1", "v10", "v11", "v12", "v13", "v14", "v15", "v16", "v17", "v18", "v19", "v2", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27", "v28", "v29", "v3", "v30", "v31", "v4", "v5", "v6", "v7", "v8", "v9"
        );
    }
}

