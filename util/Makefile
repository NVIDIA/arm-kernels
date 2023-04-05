#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

EXE = sve_bit_width.x

all: $(EXE)

print_sve_bit_width: sve_bit_width.x
	./sve_bit_width.x

clean:
	rm -f $(EXE)

sve_bit_width.x: sve_bit_width.cpp
	$(CXX) -o $@ -march=armv8-a+sve $^

