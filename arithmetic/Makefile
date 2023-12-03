#
# Copyright (c) 2023 NVIDIA Corporation
# Author: John Linford <jlinford@nvidia.com>
# 

include ../config.mk

DRIVER_OBJ = driver.o

EXE = \
	w32_scalar_add.x \
	w32_scalar_mul.x \
	w32_scalar_madd.x \
	x64_scalar_add.x \
	x64_scalar_mul.x \
	x64_scalar_madd.x \
	fp32_scalar_fmul.x \
	fp32_scalar_fmadd.x \
	u8_neon_add.x \
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
	fp16_sve_pred_fmla.x \
	i8_i32_sve_smmla.x

KGEN = ../kgen.py
MAKEFILE = ./Makefile


all: $(EXE)

run: $(EXE)
	for x in $(EXE) ; do time ./$$x ; done

clean:
	rm -f kernels/*.o $(DRIVER_OBJ) $(EXE)

veryclean: clean
	rm -f kernels/*.cpp

kernels/w32_scalar_add.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 1 16 "add" "w%d" "range(0,16)" "w%d" "modrange(4,20,16)" "w%d" "modrange(8,24,16)" > $@

kernels/w32_scalar_mul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 1 16 "mul" "w%d" "range(0,16)" "w%d" "modrange(4,20,16)" "w%d" "modrange(8,24,16)" > $@

kernels/w32_scalar_madd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 2 16 "madd" "w%d" "range(0,16)" "w%d" "modrange(4,20,16)" "w%d" "modrange(8,24,16)" "w%d" "modrange(12,28,16)" > $@

kernels/x64_scalar_add.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 64 1 16 "add" "x%d" "range(0,16)" "x%d" "modrange(4,20,16)" "x%d" "modrange(8,24,16)" > $@

kernels/x64_scalar_mul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 64 1 16 "mul" "x%d" "range(0,16)" "x%d" "modrange(4,20,16)" "x%d" "modrange(8,24,16)" > $@

kernels/x64_scalar_madd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 2 16 "madd" "x%d" "range(0,16)" "x%d" "modrange(4,20,16)" "x%d" "modrange(8,24,16)" "x%d" "modrange(12,28,16)" > $@

kernels/fp32_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 1 32 "fmul" "s%d" "range(0,32)" "s%d" "modrange(8,40,32)" "s%d" "modrange(16,48,32)" > $@

kernels/fp32_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 32 2 32 "fmadd" "s%d" "range(0,32)" "s%d" "modrange(8,40,32)" "s%d" "modrange(16,48,32)" "s%d" "modrange(24,56,32)" > $@

kernels/u8_neon_add.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 32 1 32 "add" "v%d.16b" "range(0,32)" "v%d.16b" "modrange(8,40,32)" "v%d.16b" "modrange(16,48,32)" > $@

kernels/fp32_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 32 1 32 "fmul" "v%d.4s" "range(0,32)" "v%d.4s" "modrange(8,40,32)" "v%d.4s" "modrange(16,48,32)" > $@

kernels/fp32_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 32 2 32 "fmla" "v%d.4s" "range(0,32)" "v%d.4s" "modrange(8,40,32)" "v%d.4s" "modrange(16,48,32)" > $@

kernels/fp32_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 32 1 32 "fmul" "z%d.s" "range(0,32)" "z%d.s" "modrange(16,48,32)" "z%d.s" "modrange(16,48,32)" > $@

kernels/fp32_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 32 1 32 "fmul" "z%d.s" "range(0,32)" "p0/m" "None" "z%d.s" "range(0,32)" "z%d.s" "modrange(16,48,32)" > $@

kernels/fp32_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 32 2 8 "fmla" "z%d.s" "range(0,8)" "z%d.s" "modrange(1,9,8)" "z%d.s[0]" "modrange(2,10,8)" > $@

kernels/fp32_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 32 2 32 "fmla" "z%d.s" "range(0,32)" "p0/m" "None" "z%d.s" "modrange(8,40,32)" "z%d.s" "modrange(16,48,32)" > $@

kernels/fp64_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 64 1 32 "fmul" "d%d" "range(0,32)" "d%d" "modrange(8,40,32)" "d%d" "modrange(16,48,32)" > $@

kernels/fp64_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 64 2 32 "fmadd" "d%d" "range(0,32)" "d%d" "modrange(8,40,32)" "d%d" "modrange(16,48,32)" "d%d" "range(0,32)" > $@

kernels/fp64_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 64 1 32 "fmul" "v%d.2d" "range(0,32)" "v%d.2d" "modrange(8,40,32)" "v%d.2d" "modrange(16,48,32)" > $@

kernels/fp64_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 64 2 32 "fmla" "v%d.2d" "range(0,32)" "v%d.2d" "modrange(8,40,32)" "v%d.2d" "modrange(16,48,32)" > $@

kernels/fp64_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 64 1 32 "fmul" "z%d.d" "range(0,32)" "z%d.d" "modrange(8,40,32)" "z%d.d" "modrange(16,48,32)" > $@

kernels/fp64_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 64 1 16 "fmul" "z%d.d" "range(0,16)" "p0/m" "None" "z%d.d" "range(0,16)" "z%d.d" "range(8,24)" > $@

kernels/fp64_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 64 2 8 "fmla" "z%d.d" "range(0,8)" "z%d.d" "modrange(1,9,8)" "z%d.d[0]" "modrange(2,10,8)" > $@

kernels/fp64_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 64 2 32 "fmla" "z%d.d" "range(0,32)" "p0/m" "None" "z%d.d" "modrange(8,40,32)" "z%d.d" "modrange(16,48,32)" > $@

kernels/fp16_scalar_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 16 1 32 "fmul" "h%d" "range(0,32)" "h%d" "modrange(8,40,32)" "h%d" "modrange(16,48,32)" > $@

kernels/fp16_scalar_fmadd.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SCALAR 16 2 32 "fmadd" "h%d" "range(0,32)" "h%d" "modrange(8,40,32)" "h%d" "modrange(16,48,32)" "h%d" "range(0,32)" > $@

kernels/fp16_neon_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 16 1 32 "fmul" "v%d.8h" "range(0,32)" "v%d.8h" "modrange(8,40,32)" "v%d.8h" "modrange(16,48,32)" > $@

kernels/fp16_neon_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b NEON 16 2 32 "fmla" "v%d.8h" "range(0,32)" "v%d.8h" "modrange(8,40,32)" "v%d.8h" "modrange(16,48,32)" > $@

kernels/fp16_sve_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 16 1 32 "fmul" "z%d.h" "range(0,32)" "z%d.h" "modrange(8,40,32)" "z%d.h" "modrange(16,48,32)" > $@

kernels/fp16_sve_pred_fmul.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 16 1 32 "fmul" "z%d.h" "range(0,32)" "p0/m" "None" "z%d.h" "range(0,32)" "z%d.h" "modrange(8,40,32)" > $@

kernels/fp16_sve_indexed_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 16 2 8 "fmla" "z%d.h" "range(0,8)" "z%d.h" "modrange(1,9,8)" "z%d.h[0]" "modrange(2,10,8)" > $@

kernels/fp16_sve_pred_fmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 16 2 32 "fmla" "z%d.h" "range(0,32)" "p0/m" "None" "z%d.h" "modrange(8,40,32)" "z%d.h" "modrange(16,48,32)" > $@

kernels/i8_i32_sve_smmla.cpp: $(KGEN) $(MAKEFILE)
	$(KGEN) -b SVE 32 16 32 "smmla" "z%d.s" "range(0,32)" "z%d.b" "modrange(8,40,32)" "z%d.b" "modrange(16,48,32)" > $@



%.x: $(DRIVER_OBJ) kernels/%.o
	$(CXX) -o $@ $(CXXFLAGS) $^

%.o: %.cpp
	$(CXX) -o $@ -c $(CXXFLAGS) $<

