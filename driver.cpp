//
// Copyright NVIDIA March 2023
//
// John Linford <jlinford@nvidia.com>
//
#include <iostream>
#include <cstdint>
#include <chrono>
#include <cstdlib>

extern const char * description;
extern int lanes;
extern int lane_ops;
extern int block_inst;
extern int unroll;
extern void kernel(unsigned long);

int main(int argc, char ** argv) 
{
    using namespace std;

    const uint64_t iters = 100000000ul;

	const uint64_t kernel_ins = block_inst * unroll;
    const uint64_t kernel_ops = lanes * lane_ops * kernel_ins * iters;

    auto start = chrono::steady_clock::now();
    kernel(iters);
    auto end = chrono::steady_clock::now();
    double seconds=chrono::duration_cast<chrono::microseconds>(end-start).count();
    seconds = seconds * 1e-6;

    double gops = kernel_ops / (seconds * 1e9);

	cout << description << endl;
	cout << kernel_ins << " Instructions per iteration" << endl;
    cout << kernel_ops << " Ops in " << seconds << " seconds" << endl;
    cout << gops << " GOps/second" << endl;

    return 0;
}
