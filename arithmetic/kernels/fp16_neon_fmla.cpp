
//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
//


const char * description = "4( 16(NEON_FMLA_16b) )";
unsigned long block_inst = 16;
unsigned long block_ops = (16*(2*(128/16)));
unsigned long unroll = 4;

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
        : /* no input */
        : /* no output */
        : "v0", "v1", "v10", "v11", "v12", "v13", "v14", "v15", "v16", "v17", "v18", "v19", "v2", "v20", "v21", "v22", "v23", "v24", "v25", "v26", "v27", "v28", "v29", "v3", "v30", "v31", "v4", "v5", "v6", "v7", "v8", "v9"
        );
    }
}

