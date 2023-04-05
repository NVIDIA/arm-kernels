//
// Copyright (c) 2023 NVIDIA Corporation
// Author: John Linford <jlinford@nvidia.com>
// 
// Prints the bit width of an SVE register
//

#include <iostream>

#ifdef __ARM_FEATURE_SVE
#include <arm_sve.h>
#else
#error SVE is required (__ARM_FEATURE_SVE)
#endif 


int main(int argc, char ** argv) 
{
    std::cout << (8 * svcntb()) << std::endl;
    return 0;
}
