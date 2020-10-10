# Makefile for building reduce.img suitable for embedded use.

# I *HOPE* that with the following conditions and provided you use GNU make
# that this will build on 64-bit Linux, 64-bit Cygwin and on a Macintosh
# that has macports installed and libffi fetched via macports.
# I expect that other platforms might not be too hard... but some
# will need the include/config.h file adjusted.


# For a FULL bootstrapped build you need to go
#
#    make bootstrapreduce.img
#    rm bootstrapreduce.img; make bootstrapreduce.img
#    make c-code
#    make reduce.img
#
# The repeated build of bootstrapreduce.img is so that forward references
# to inline functions end up coped with properly.

ifeq ($(shell uname),Darwin)
CC=clang++
XCFLAGS= -I/opt/local/lib/libffi-3.2.1/include
XLIBS=-lm

else
ifeq ($(shell uname -o),Cygwin)
CC=g++
XLIBS=-lm
else

CC=g++
XLIBS=-lm -lpthread
endif
endif

#OPT=-O0 -g
OPT=-O3

CPPFLAGS=$(CFLAGS) -std=gnu++11 $(OPT) -I. -I../include -I$(S) \
    -DHAVE_CONFIG_H=1 -DEMBEDDED=1 $(XCFLAGS) $(USERFLAGS)
LIBS=$(XLIBS) -lz -lffi

S=../../cslbase
R=../../..

VPATH=$(S)

all:	reduce reduce.img image.cpp

objtype:	$(S)/objtype.cpp
	g++ $(S)/objtype.cpp -o objtype

makeheaders:	$(S)/makeheaders.cpp
	g++ $(S)/makeheaders.cpp -o makeheaders

machineid.cpp:	cslread.o ../include/config.h objtype makeheaders Makefile \
		$(S)/machine.h $(S)/int128_t.h \
		$(S)/log.h $(S)/$(FWIN) \
		$(S)/tags.h $(S)/cslerror.h \
		$(S)/thread_local.h \
		$(S)/externs.h $(S)/arith.h \
		$(S)/entries.h $(S)/lispthrow.h \
		$(S)/allocate.h $(S)/newallocate.h
	./objtype cslread.o \
		machineid-1.cpp g++
	./makeheaders ../include/config.h \
		$(S)/machine.h \
		$(S)/$(FWIN) \
		$(S)/int128_t.h \
		$(S)/log.h \
		$(S)/tags.h \
		$(S)/thread_local.h \
		$(S)/cslerror.h \
		$(S)/externs.h \
		$(S)/arith.h \
		$(S)/entries.h \
		$(S)/lispthrow.h \
		> machineid-2.cpp
	cat machineid-1.cpp machineid-2.cpp > machineid.cpp

bootstrapreduce:		allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o stubs.o
	$(CC) allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o stubs.o \
		$(LIBS) -o bootstrapreduce

.cpp.o:
	$(CC) $(CPPFLAGS) -c -o $@ $<

# Create the bootstrapreduce.img file

bootstrapreduce.img:	bootstrapreduce
	-rm -f bootstrapreduce.img
	./bootstrapreduce -z -Dno_init_file $(S)/buildreduce.lsp -Dbootstrap \
		-D@srcdir=$(S) -D@reduce=$(R) -o bootstrapreduce.img -L bootstrap_image.log


c-code:	bootstrapreduce.img
	./bootstrapreduce -i- -w $(CSLFLAGS) \
		-Dno_init_file \
		$(S)/make-c-code.red \
		-D@destdir=$(R)/cslbuild/generated-c \
		-Dhow_many=$(how_many) -Dsize_per_file=$(size_per_file) \
		-L c-code.log


# Now the full version.

reduce:		allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o \
		u01.o u02.o u03.o u04.o u05.o u06.o u07.o u08.o u09.o u10.o \
		u11.o u12.o u13.o u14.o u15.o u16.o u17.o u18.o u19.o u20.o \
		u21.o u22.o u23.o u24.o u25.o u26.o u27.o u28.o u29.o u30.o \
		u31.o u32.o u33.o u34.o u35.o u36.o u37.o u38.o u39.o u40.o \
		u41.o u42.o u43.o u44.o u45.o u46.o u47.o u48.o u49.o u50.o \
		u51.o u52.o u53.o u54.o u55.o u56.o u57.o u58.o u59.o u60.o
	$(CC) allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o \
		u01.o u02.o u03.o u04.o u05.o u06.o u07.o u08.o u09.o u10.o \
		u11.o u12.o u13.o u14.o u15.o u16.o u17.o u18.o u19.o u20.o \
		u21.o u22.o u23.o u24.o u25.o u26.o u27.o u28.o u29.o u30.o \
		u31.o u32.o u33.o u34.o u35.o u36.o u37.o u38.o u39.o u40.o \
		u41.o u42.o u43.o u44.o u45.o u46.o u47.o u48.o u49.o u50.o \
		u51.o u52.o u53.o u54.o u55.o u56.o u57.o u58.o u59.o u60.o \
		$(LIBS) -o reduce


reduce.img:	reduce
	-rm -f reduce.img
	export reduce=$(R) && ./reduce -z -Dforce_c_code -Dno_init_file $(S)/buildreduce.lsp \
		-D@srcdir=$(S) -D@reduce=$(R) -o reduce.img -L reduce_image.log

make-image:	../make-image.cpp
	$(CC) $(CPPFLAGS) ../make-image.cpp -o make-image

image.cpp:	make-image reduce.img
	./make-image
	cp image.cpp ../reduce-image.cpp
	cp reduce.img ..

clean:
	-rm -f *.o reduce hello *.img *.log make-image image.cpp
	-rm -f machineid* makeheaders objtype bootstrapreduce *.bak


HEADERS = ../include/config.h \
	$(S)/md5.h       $(S)/termed.h    $(S)/arith.h       $(S)/openmath.h \
	$(S)/bigvector.h $(S)/entries.h     $(S)/proc.h     \
	$(S)/uninames.h  $(S)/bytes.h     $(S)/externs.h     $(S)/int128_t.h \
	$(S)/sockhdr.h   $(S)/version.h   $(S)/charmetrics.h $(S)/fwin.h     \
	$(S)/inthash.h   $(S)/stream.h    $(S)/cslerror.h    $(S)/headers.h  \
	$(S)/lispthrow.h $(S)/syscsl.h    $(S)/cslread.h     $(S)/machine.h  \
	$(S)/tags.h

allocate.o:	$(S)/allocate.cpp $(HEADERS)
arith01.o:	$(S)/arith01.cpp $(HEADERS)
arith02.o:	$(S)/arith02.cpp $(HEADERS)
arith03.o:	$(S)/arith03.cpp $(HEADERS)
arith04.o:	$(S)/arith04.cpp $(HEADERS)
arith05.o:	$(S)/arith05.cpp $(HEADERS)
arith06.o:	$(S)/arith06.cpp $(HEADERS)
arith07.o:	$(S)/arith07.cpp $(HEADERS)
arith08.o:	$(S)/arith08.cpp $(HEADERS)
arith09.o:	$(S)/arith09.cpp $(HEADERS)
arith10.o:	$(S)/arith10.cpp $(HEADERS)
arith11.o:	$(S)/arith11.cpp $(HEADERS)
arith12.o:	$(S)/arith12.cpp $(HEADERS)
arith13.o:	$(S)/arith13.cpp $(HEADERS)
arith14.o:	$(S)/arith14.cpp $(HEADERS)
bytes.o:	$(S)/bytes.cpp $(HEADERS)
bytes1.o:	$(S)/bytes1.cpp $(S)/opnames.cpp $(HEADERS)
char.o:		$(S)/char.cpp $(HEADERS)
csl.o:		$(S)/csl.cpp $(HEADERS)
cslmpi.o:	$(S)/cslmpi.cpp $(S)/mpipack.cpp $(HEADERS)
cslread.o:	$(S)/cslread.cpp $(HEADERS)
driver.o:	$(S)/driver.cpp $(HEADERS)
embedcsl.o:	$(S)/embedcsl.cpp $(S)/csl.cpp $(HEADERS)
eval1.o:	$(S)/eval1.cpp $(HEADERS)
eval2.o:	$(S)/eval2.cpp $(HEADERS)
eval3.o:	$(S)/eval3.cpp $(HEADERS)
eval4.o:	$(S)/eval4.cpp $(HEADERS)
fasl.o:		$(S)/fasl.cpp $(HEADERS)
fns1.o:		$(S)/fns1.cpp $(HEADERS)
fns2.o:		$(S)/fns2.cpp $(HEADERS)
fns3.o:		$(S)/fns3.cpp $(HEADERS)
fwin.o:		$(S)/fwin.cpp $(HEADERS)
cslgc.o:	$(S)/cslgc.cpp $(HEADERS)
lisphash.o:	$(S)/lisphash.cpp $(HEADERS)
isprime.o:	$(S)/isprime.cpp $(HEADERS)
preserve.o:	$(S)/preserve.cpp $(HEADERS)
print.o:	$(S)/print.cpp $(HEADERS)
restart.o:	$(S)/restart.cpp machineid.cpp $(HEADERS)
sysfwin.o:	$(S)/sysfwin.cpp $(HEADERS)
termed.o:	$(S)/termed.cpp $(HEADERS)
inthash.o:	$(S)/inthash.cpp $(HEADERS)
serialize.o:	$(S)/serialize.cpp $(HEADERS)
u01.o:		$(S)/u01.cpp $(HEADERS)
u02.o:		$(S)/u02.cpp $(HEADERS)
u03.o:		$(S)/u03.cpp $(HEADERS)
u04.o:		$(S)/u04.cpp $(HEADERS)
u05.o:		$(S)/u05.cpp $(HEADERS)
u06.o:		$(S)/u06.cpp $(HEADERS)
u07.o:		$(S)/u07.cpp $(HEADERS)
u08.o:		$(S)/u08.cpp $(HEADERS)
u09.o:		$(S)/u09.cpp $(HEADERS)
u10.o:		$(S)/u10.cpp $(HEADERS)
u11.o:		$(S)/u11.cpp $(HEADERS)
u12.o:		$(S)/u12.cpp $(HEADERS)
u13.o:		$(S)/u13.cpp $(HEADERS)
u14.o:		$(S)/u14.cpp $(HEADERS)
u15.o:		$(S)/u15.cpp $(HEADERS)
u16.o:		$(S)/u16.cpp $(HEADERS)
u17.o:		$(S)/u17.cpp $(HEADERS)
u18.o:		$(S)/u18.cpp $(HEADERS)
u19.o:		$(S)/u19.cpp $(HEADERS)
u20.o:		$(S)/u20.cpp $(HEADERS)
u21.o:		$(S)/u21.cpp $(HEADERS)
u22.o:		$(S)/u22.cpp $(HEADERS)
u23.o:		$(S)/u23.cpp $(HEADERS)
u24.o:		$(S)/u24.cpp $(HEADERS)
u25.o:		$(S)/u25.cpp $(HEADERS)
u26.o:		$(S)/u26.cpp $(HEADERS)
u27.o:		$(S)/u27.cpp $(HEADERS)
u28.o:		$(S)/u28.cpp $(HEADERS)
u29.o:		$(S)/u29.cpp $(HEADERS)
u30.o:		$(S)/u30.cpp $(HEADERS)
u31.o:		$(S)/u31.cpp $(HEADERS)
u32.o:		$(S)/u32.cpp $(HEADERS)
u33.o:		$(S)/u33.cpp $(HEADERS)
u34.o:		$(S)/u34.cpp $(HEADERS)
u35.o:		$(S)/u35.cpp $(HEADERS)
u36.o:		$(S)/u36.cpp $(HEADERS)
u37.o:		$(S)/u37.cpp $(HEADERS)
u38.o:		$(S)/u38.cpp $(HEADERS)
u39.o:		$(S)/u39.cpp $(HEADERS)
u40.o:		$(S)/u40.cpp $(HEADERS)
u41.o:		$(S)/u41.cpp $(HEADERS)
u42.o:		$(S)/u42.cpp $(HEADERS)
u43.o:		$(S)/u43.cpp $(HEADERS)
u44.o:		$(S)/u44.cpp $(HEADERS)
u45.o:		$(S)/u45.cpp $(HEADERS)
u46.o:		$(S)/u46.cpp $(HEADERS)
u47.o:		$(S)/u47.cpp $(HEADERS)
u48.o:		$(S)/u48.cpp $(HEADERS)
u49.o:		$(S)/u49.cpp $(HEADERS)
u50.o:		$(S)/u50.cpp $(HEADERS)
u51.o:		$(S)/u51.cpp $(HEADERS)
u52.o:		$(S)/u52.cpp $(HEADERS)
u53.o:		$(S)/u53.cpp $(HEADERS)
u54.o:		$(S)/u54.cpp $(HEADERS)
u55.o:		$(S)/u55.cpp $(HEADERS)
u56.o:		$(S)/u56.cpp $(HEADERS)
u57.o:		$(S)/u57.cpp $(HEADERS)
u58.o:		$(S)/u58.cpp $(HEADERS)
u59.o:		$(S)/u59.cpp $(HEADERS)
u60.o:		$(S)/u60.cpp $(HEADERS)

# end of Makefile

