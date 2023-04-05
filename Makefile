
DIRS = \
	util \
	arithmetic

all: $(DIRS)

clean:
	for i in $(DIRS) ; do $(MAKE) -C $$i clean ; done

util:
	$(MAKE) -C $@

arithmetic:
	$(MAKE) -C $@


.PHONY: $(DIRS)
