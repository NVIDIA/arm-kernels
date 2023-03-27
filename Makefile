#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

SVE_BIT_WIDTH = 128


CXX = g++
CXXFLAGS = -O -march=armv8-a+sve -msve-vector-bits=$(SVE_BIT_WIDTH)
LD = $(CXX)

KGEN = ./kgen.py
MAKEFILE = ./Makefile

DRIVER_OBJ = driver.o

EXE = \
	fp32_scalar_fmul.x \
	fp32_scalar_fmadd.x \
	fp32_neon_fmul.x \
	fp32_neon_fmla.x \
	fp32_sve_fmul.x \
	fp32_sve_pred_fmul.x \
	fp32_sve_indexed_fmla.x \
	fp32_sve_pred_fmla.x \
	fp64_scalar_fmul.x \
	fp64_scalar_fmadd.x \
	fp64_neon_fmul.x \
	fp64_neon_fmla.x \
	fp64_sve_fmul.x \
	fp64_sve_pred_fmul.x \
	fp64_sve_indexed_fmla.x \
	fp64_sve_pred_fmla.x \
	fp16_scalar_fmul.x \
	fp16_scalar_fmadd.x \
	fp16_neon_fmul.x \
	fp16_neon_fmla.x \
	fp16_sve_fmul.x \
	fp16_sve_pred_fmul.x \
	fp16_sve_indexed_fmla.x \
	fp16_sve_pred_fmla.x


all: $(EXE)

run: $(EXE)
	for x in $(EXE) ; do time ./$$x ; done

clean:
	rm -f kernels/*.cpp kernels/*.o $(DRIVER_OBJ) $(EXE)

kernels/fp32_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 1 16 4 "fmul" "s%d" "range(0,16)" "s%d" "range(8,24)" "s%d" "range(16,32)" > $@

kernels/fp32_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 2 16 4 "fmadd" "s%d" "range(0,16)" "s%d" "range(8,24)" "s%d" "range(16,32)" "s%d" "range(0,16)" > $@

kernels/fp32_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 4 1 16 4 "fmul" "v%d.4s" "range(0,16)" "v%d.4s" "range(8,24)" "v%d.4s" "range(16,32)" > $@

kernels/fp32_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 4 2 16 4 "fmla" "v%d.4s" "range(0,16)" "v%d.4s" "range(8,24)" "v%d.4s" "range(16,32)" > $@

kernels/fp32_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/32)) 1 16 4 "fmul" "z%d.s" "range(0,16)" "z%d.s" "range(8,24)" "z%d.s" "range(16,32)" > $@

kernels/fp32_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/32)) 1 16 4 "fmul" "z%d.s" "range(0,16)" "p0/m" "None" "z%d.s" "range(0,16)" "z%d.s" "range(8,24)" > $@

kernels/fp32_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/32)) 2 8 8 "fmla" "z%d.s" "range(0,8)" "z%d.s" "[i%8 for i in range(2,10)]" "z%d.s[0]" "[i%8 for i in range(4,12)]" > $@

kernels/fp32_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/32)) 2 16 4 "fmla" "z%d.s" "range(0,16)" "p0/m" "None" "z%d.s" "range(8,24)" "z%d.s" "range(16,32)" > $@

kernels/fp64_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 1 16 4 "fmul" "d%d" "range(0,16)" "d%d" "range(8,24)" "d%d" "range(16,32)" > $@

kernels/fp64_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 2 16 4 "fmadd" "d%d" "range(0,16)" "d%d" "range(8,24)" "d%d" "range(16,32)" "d%d" "range(0,16)" > $@

kernels/fp64_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 2 1 16 4 "fmul" "v%d.2d" "range(0,16)" "v%d.2d" "range(8,24)" "v%d.2d" "range(16,32)" > $@

kernels/fp64_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 2 2 16 4 "fmla" "v%d.2d" "range(0,16)" "v%d.2d" "range(8,24)" "v%d.2d" "range(16,32)" > $@

kernels/fp64_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/64)) 1 16 4 "fmul" "z%d.d" "range(0,16)" "z%d.d" "range(8,24)" "z%d.d" "range(16,32)" > $@

kernels/fp64_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/64)) 1 16 4 "fmul" "z%d.d" "range(0,16)" "p0/m" "None" "z%d.d" "range(0,16)" "z%d.d" "range(8,24)" > $@

kernels/fp64_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/64)) 2 8 8 "fmla" "z%d.d" "range(0,8)" "z%d.d" "[i%8 for i in range(2,10)]" "z%d.d[0]" "[i%8 for i in range(4,12)]" > $@

kernels/fp64_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/64)) 2 16 4 "fmla" "z%d.d" "range(0,16)" "p0/m" "None" "z%d.d" "range(8,24)" "z%d.d" "range(16,32)" > $@

kernels/fp16_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 1 16 4 "fmul" "h%d" "range(0,16)" "h%d" "range(8,24)" "h%d" "range(16,32)" > $@

kernels/fp16_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 1 2 16 4 "fmadd" "h%d" "range(0,16)" "h%d" "range(8,24)" "h%d" "range(16,32)" "h%d" "range(0,16)" > $@

kernels/fp16_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 8 1 16 4 "fmul" "v%d.8h" "range(0,16)" "v%d.8h" "range(8,24)" "v%d.8h" "range(16,32)" > $@

kernels/fp16_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) 8 2 16 4 "fmla" "v%d.8h" "range(0,16)" "v%d.8h" "range(8,24)" "v%d.8h" "range(16,32)" > $@

kernels/fp16_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/16)) 1 16 4 "fmul" "z%d.h" "range(0,16)" "z%d.h" "range(8,24)" "z%d.h" "range(16,32)" > $@

kernels/fp16_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/16)) 1 16 4 "fmul" "z%d.h" "range(0,16)" "p0/m" "None" "z%d.h" "range(0,16)" "z%d.h" "range(8,24)" > $@

kernels/fp16_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/16)) 2 8 8 "fmla" "z%d.h" "range(0,8)" "z%d.h" "[i%8 for i in range(2,10)]" "z%d.h[0]" "[i%8 for i in range(4,12)]" > $@

kernels/fp16_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) $$(($(SVE_BIT_WIDTH)/16)) 2 16 4 "fmla" "z%d.h" "range(0,16)" "p0/m" "None" "z%d.h" "range(8,24)" "z%d.h" "range(16,32)" > $@




%.x: $(DRIVER_OBJ) kernels/%.o
	$(CXX) -o $@ $(CXXFLAGS) $^

%.o: %.cpp
	$(CXX) -o $@ -c $(CXXFLAGS) $<

