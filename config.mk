#
# SPDX-License-Identifier: BSD-3-Clause
# Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
# Author: John Linford <jlinford@nvidia.com>
# 

CXX = g++-12
CXXFLAGS = -O -march=armv8-a+sve

LD = $(CXX)
LDFLAGS = 
