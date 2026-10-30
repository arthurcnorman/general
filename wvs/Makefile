# Makefile for wvs.

CXX=g++
CFLAGS=-O0 -g

SOURCES = wvs.cpp uniconv.cpp keymap.cpp entities.cpp adobenames.cpp \
		texnames.cpp combining.cpp

OBJECTS=$(SOURCES:.cpp=.o)

wvs:	$(OBJECTS) $(SOURCES) wvs.h
	$(CXX) $(CFLAGS) $(OBJECTS) -l ncursesw -o wvs

.cpp.o:
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm *.o *.exe wvs *.tgz *.bak* *.old* *.tmp*


wvs.tgz:	Makefile wvs.h $(SOURCES)
	tar cvfz wvs.tgz Makefile wvs.h $(SOURCES)

# end of Makefile
