#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

SVE_BIT_WIDTH = 128

CXX = g++
CXXFLAGS = -O -march=armv8-a+sve -msve-vector-bits=$(SVE_BIT_WIDTH)
LD = $(CXX)
