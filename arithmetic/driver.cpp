//
// Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
// Author: John Linford <jlinford@nvidia.com>
// 

#include <iostream>
#include <cstdint>
#include <chrono>
#include <cstdlib>

extern const char * description;
extern int block_inst;
extern int block_ops;
extern int unroll;
extern void kernel(unsigned long);

int main(int argc, char ** argv) 
{
    using namespace std;

    const uint64_t iters = 100000000ul;

    const uint64_t iter_inst = unroll * block_inst;
    const uint64_t iter_ops = unroll * block_ops;
	const uint64_t kernel_ins = iters * iter_inst;
    const uint64_t kernel_ops = iters * iter_ops;

    auto start = chrono::steady_clock::now();
    kernel(iters);
    auto end = chrono::steady_clock::now();
    double seconds=chrono::duration_cast<chrono::microseconds>(end-start).count();
    seconds = seconds * 1e-6;

    double gops = kernel_ops / (seconds * 1e9);

    const char sep = ';';
	cout << description << sep << endl;
    cout << "Iterations" << sep << iters << endl;
    cout << "Total Inst" << sep << kernel_ins << endl;
    cout << "Total Ops" << sep << kernel_ops << endl;
    cout << "Inst/Iter" << sep << iter_inst << endl;
    cout << "Ops/Iter" << sep << iter_ops << endl;
    cout << "Seconds" << sep << seconds << endl;
	cout << "GOps/sec" << sep << gops << endl;

    return 0;
}
