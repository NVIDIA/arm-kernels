
DIRS = \
	arithmetic

all: $(DIRS)

clean:
	for i in $(DIRS) ; do $(MAKE) -C $$i clean ; done

arithmetic:
	$(MAKE) -C $@


.PHONY: $(DIRS)
