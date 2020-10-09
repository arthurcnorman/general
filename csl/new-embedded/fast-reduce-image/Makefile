# Makefile for building reduce.img suitable for embedded use.

# I *HOPE* that with the following conditions and provided you yse GNU make
# that this will build on 64-bit Linux, 64-bit Cygwin and on a Macintosh
# that has macports installed and libffi fetched via macports.
# I expect that other platforms might not be too hard... but some
# will need the include/config.h file adjusted.

CC=em++ -s DISABLE_EXCEPTION_CATCHING=0 -s STACK_OVERFLOW_CHECK=2 \
        -s EXIT_RUNTIME=1 -s TOTAL_STACK=5mb \
        -s MALLOC="dlmalloc" -s INITIAL_MEMORY=16777216 \
        -s ALLOW_MEMORY_GROWTH=1 -s SAFE_HEAP=1 \
        -s DEMANGLE_SUPPORT=1 

#OPT=-O0 -g
OPT=-O2

CPPFLAGS=$(CFLAGS) -std=gnu++11 $(OPT) -I. -I../include \
    -DHAVE_CONFIG_H=1 -DEMBEDDED=1 $(XCFLAGS)
LIBS=$(XLIBS) -s USE_ZLIB=1

S=../../cslbase
R=../../..

VPATH=$(S)

all:	reduce reduce.img image.cpp

reduce:		allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o stubs.o \
		u01.o u02.o u03.o u04.o u05.o u06.0 u07.o u08.o u09.o u10.o \
		u11.o u12.o u13.o u14.o u15.o u16.0 u17.o u18.o u19.o u20.o \
		u21.o u22.o u23.o u24.o u25.o u26.0 u27.o u28.o u29.o u30.o \
		u31.o u32.o u33.o u34.o u35.o u36.0 u37.o u38.o u39.o u40.o \
		u41.o u42.o u43.o u44.o u45.o u46.0 u47.o u48.o u49.o u50.o \
		u51.o u52.o u53.o u54.o u55.o u56.0 u57.o u58.o u59.o u60.o
	$(CC) allocate.o arith01.o arith02.o arith03.o arith04.o arith05.o \
		arith06.o arith07.o arith08.o arith09.o arith10.o \
		arith11.o arith12.o arith13.o arith14.o bytes.o char.o \
		csl.o cslmpi.o cslread.o eval1.o eval2.o eval3.o \
		eval4.o fasl.o fns1.o fns2.o fns3.o fwin.o cslgc.o lisphash.o \
		isprime.o preserve.o print.o restart.o sysfwin.o termed.o \
		inthash.o serialize.o stubs.o \
		u01.o u02.o u03.o u04.o u05.o u06.0 u07.o u08.o u09.o u10.o \
		u11.o u12.o u13.o u14.o u15.o u16.0 u17.o u18.o u19.o u20.o \
		u21.o u22.o u23.o u24.o u25.o u26.0 u27.o u28.o u29.o u30.o \
		u31.o u32.o u33.o u34.o u35.o u36.0 u37.o u38.o u39.o u40.o \
		u41.o u42.o u43.o u44.o u45.o u46.0 u47.o u48.o u49.o u50.o \
		u51.o u52.o u53.o u54.o u55.o u56.0 u57.o u58.o u59.o u60.o
		$(LIBS) -s ERROR_ON_UNDEFINED_SYMBOLS=0 -g4 \
		-s ALLOW_MEMORY_GROWTH=1 \
		-s DISABLE_EXCEPTION_CATCHING=0 \
		--pre-js mountfs.js \
		-s NODERAWFS=1 \
		--source-map-base http://localhost:8000/new-embedded/reduce-image/ -o reduce.js

.cpp.o:                                                                          <
	$(CC) $(CPPFLAGS) -c -o $@ $<

# Create the reduce.img file

reduce.img:	reduce
	-rm -f reduce.img
	node reduce.js -z -Dno_init_file $(S)/buildreduce.lsp \
		-D@srcdir=$(S) -D@reduce=$(R) -o reduce.img -- image.log

make-image:	../make-image.cpp
	$(CC) $(CPPFLAGS) ../make-image.cpp -o make-image

image.cpp:	make-image reduce.img
	./make-image
	cp image.cpp ../reduce-image.cpp
	cp reduce.img ..

clean:
	-rm -f *.o reduce hello reduce.img image.log make-image image.cpp


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
u06.0:		$(S)/u06.cpp $(HEADERS)
u07.o:		$(S)/u07.cpp $(HEADERS)
u08.o:		$(S)/u08.cpp $(HEADERS)
u09.o:		$(S)/u09.cpp $(HEADERS)
u10.o:		$(S)/u10.cpp $(HEADERS)
u11.o:		$(S)/u11.cpp $(HEADERS)
u12.o:		$(S)/u12.cpp $(HEADERS)
u13.o:		$(S)/u13.cpp $(HEADERS)
u14.o:		$(S)/u14.cpp $(HEADERS)
u15.o:		$(S)/u15.cpp $(HEADERS)
u16.0:		$(S)/u16.cpp $(HEADERS)
u17.o:		$(S)/u17.cpp $(HEADERS)
u18.o:		$(S)/u18.cpp $(HEADERS)
u19.o:		$(S)/u19.cpp $(HEADERS)
u20.o:		$(S)/u20.cpp $(HEADERS)
u21.o:		$(S)/u21.cpp $(HEADERS)
u22.o:		$(S)/u22.cpp $(HEADERS)
u23.o:		$(S)/u23.cpp $(HEADERS)
u24.o:		$(S)/u24.cpp $(HEADERS)
u25.o:		$(S)/u25.cpp $(HEADERS)
u26.0:		$(S)/u26.cpp $(HEADERS)
u27.o:		$(S)/u27.cpp $(HEADERS)
u28.o:		$(S)/u28.cpp $(HEADERS)
u29.o:		$(S)/u29.cpp $(HEADERS)
u30.o:		$(S)/u30.cpp $(HEADERS)
u31.o:		$(S)/u31.cpp $(HEADERS)
u32.o:		$(S)/u32.cpp $(HEADERS)
u33.o:		$(S)/u33.cpp $(HEADERS)
u34.o:		$(S)/u34.cpp $(HEADERS)
u35.o:		$(S)/u35.cpp $(HEADERS)
u36.0:		$(S)/u36.cpp $(HEADERS)
u37.o:		$(S)/u37.cpp $(HEADERS)
u38.o:		$(S)/u38.cpp $(HEADERS)
u39.o:		$(S)/u39.cpp $(HEADERS)
u40.o:		$(S)/u40.cpp $(HEADERS)
u41.o:		$(S)/u41.cpp $(HEADERS)
u42.o:		$(S)/u42.cpp $(HEADERS)
u43.o:		$(S)/u43.cpp $(HEADERS)
u44.o:		$(S)/u44.cpp $(HEADERS)
u45.o:		$(S)/u45.cpp $(HEADERS)
u46.0:		$(S)/u46.cpp $(HEADERS)
u47.o:		$(S)/u47.cpp $(HEADERS)
u48.o:		$(S)/u48.cpp $(HEADERS)
u49.o:		$(S)/u49.cpp $(HEADERS)
u50.o:		$(S)/u50.cpp $(HEADERS)
u51.o:		$(S)/u51.cpp $(HEADERS)
u52.o:		$(S)/u52.cpp $(HEADERS)
u53.o:		$(S)/u53.cpp $(HEADERS)
u54.o:		$(S)/u54.cpp $(HEADERS)
u55.o:		$(S)/u55.cpp $(HEADERS)
u56.0:		$(S)/u56.cpp $(HEADERS)
u57.o:		$(S)/u57.cpp $(HEADERS)
u58.o:		$(S)/u58.cpp $(HEADERS)
u59.o:		$(S)/u59.cpp $(HEADERS)
u60.o:		$(S)/u60.cpp $(HEADERS)

# end of Makefile
