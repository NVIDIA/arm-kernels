
SUITES = \
	arithmetic

all: $(SUITES)

clean:
	for i in $(SUITES) ; do $(MAKE) -C $$i clean ; done

arithmetic:
	$(MAKE) -C $@


.PHONY: $(SUITES)