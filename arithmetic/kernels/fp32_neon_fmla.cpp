
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(NEON_FMLA_32b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(2*(128/32)));
unsigned long unroll = 4;

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
        : /* no input */
        : /* no output */
        : "v0", "v1", "v10", "v11", "v12", "v13", "v14", "v15", "v16", "v17", "v18", "v19", "v2", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27", "v28", "v29", "v3", "v30", "v31", "v4", "v5", "v6", "v7", "v8", "v9"
        );
    }
}

