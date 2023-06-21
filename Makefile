# Copyright (c) 2023, NVIDIA CORPORATION. All rights reserved.
# Author: John Linford <jlinford@nvidia.com>


DIRS = \
	arithmetic

all: $(DIRS)

clean:
	for i in $(DIRS) ; do $(MAKE) -C $$i clean ; done

arithmetic:
	$(MAKE) -C $@


.PHONY: $(DIRS)
