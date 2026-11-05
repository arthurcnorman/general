# Makefile for r4.

# "r4" is a program editor modelled after (antique) wordstar but
# providing support for Unicode text including use of combining
# marks and discriticals.
# My name is Arthur and when slurred that turns into arfur and thus
# into r4. The resulting name is short and easy to type.

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++
else
CXX=clang++
endif

OPTS=-O0 -g -DDEBUG=1
# OPTS=-O3

CXXFLAGS=$(OPTS) -std=c++23

# The distinction between SOURCES and TABLES is that SOURCES are the
# files with genuine code and that depends on r4.h. TABLES are just
# static data and do not depend on the internals of this program so
# they have no dependency on r4.h and that avoid need to rebuild them
# for changes there that do not impact them.
#
# entities.cpp counts as a source because some of the codes it maps names
# onto need combining characters and the way in which I pack those
# "complex characters" needs m4.h.

SOURCES = 	r4.cpp uniconv.cpp keymap.cpp entities.cpp

TABLES =	adobenames.cpp texnames.cpp combining.cpp \
		unicode-1.cpp unicode-2.cpp unicode-3.cpp unicode-4.cpp

OBJECTS=$(SOURCES:.cpp=.o) $(TABLES:.cpp=.o)

r4:	$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -l ncursesw -o r4

$(SOURCES:.cpp=.o):	%.o:	 %.cpp r4.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(TABLES:.cpp=.o):	%.o:	 %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o *.exe r4 *.tgz *.bak* *.old* *.tmp*


r4.tgz:	Makefile r4.h $(SOURCES)
	tar cvfz r4.tgz Makefile r4.h $(SOURCES)

# end of Makefile
