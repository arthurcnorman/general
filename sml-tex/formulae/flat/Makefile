SML ?= poly

.PHONY: all
all: test1 test2

.PHONY: test%
test%:
	echo 'use "all.sml"; $@();' | $(SML)


sml:
	$O/cslbuild/i686-pc-cygwin/csl/bootstrapreduce -w sml.red -l sml.log

lispfile:
	./lispfile.sh

