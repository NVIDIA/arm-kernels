#
# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
# Author: John Linford <jlinford@nvidia.com>
# 

# GCC 12+ with binutils 2.38+ recommended
CXX = g++
CXXFLAGS = -O -mcpu=native

LD = $(CXX)
LDFLAGS = 
