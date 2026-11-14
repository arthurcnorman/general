# Makefile for r4.

# "r4" is a program editor modelled after (antique) wordstar but
# providing support for Unicode text including use of combining
# marks and discriticals.
# My name is Arthur and when slurred that turns into arfur and thus
# into r4. The resulting name is short and easy to type.


# Setting up the static data about Unicode uses a significant amount of
# compile-time processing so I need to override the default limits on that.
# Also I find that coloured diagnostic output makes inspection of log
# files harder in some cases, so I switch that off.

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++ -std=c++23 -fconstexpr-ops-limit=200000000 \
	-fdiagnostics-color=never
else
CXX=clang++ -std=c++23 -fconstexpr-steps=0 -fno-color-diagnostics 
#CXX=g++ std=c++23 -fconstexpr-ops-limit=200000000 -fdiagnostics-color=never
endif

CXXFLAGS=-O3

all:	r4

debug:	CXXFLAGS += -DDEBUG -O0 -g
debug:	r4

# The distinction between SOURCES and LOOKUP is that SOURCES are the
# files with genuine code and that depends on r4.h. LOOKUP just sets up
# static data and does not depend on the internals of this program so
# it has no dependency on r4.h and that avoid need to rebuild it
# for changes there that do not impact it. The file "codepoints.cpp"
# uses *.names which provide tabulation of names for characters.
#
SOURCES =	r4.cpp uniconv.cpp keymap.cpp

LOOKUP =	codepoints.cpp

DATA =		adobe.names combining.names html.names my.names \
		tex.names unicode.names


OBJECTS=$(SOURCES:.cpp=.o) $(LOOKUP:.cpp=.o)
ASMFILES=$(SOURCES:.cpp=.s) $(LOOKUP:.cpp=.s)


r4:	$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -l ncursesw -o r4

$(SOURCES:.cpp=.o):	%.o:	 %.cpp r4.h cuckoo.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(LOOKUP:.cpp=.o):	%.o:	 %.cpp $(DATA) cuckoo.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(SOURCES:.cpp=.s):	%.s:	 %.cpp r4.h cuckoo.h
	$(CXX) $(CXXFLAGS) -S $< -o $@

$(LOOKUP:.cpp=.s):	%.s:	 %.cpp $(DATA) cuckoo.h
	$(CXX) $(CXXFLAGS) -S $< -o $@


# If I am NOT building on Windows I will attempt a cross-build for that
# world, using ".obj" as suffix for object files and ".exe" for the
# executable. This will only work if you have the ncurses library with its
# header files etc installed on the platform you are working on, and on
# Linux it looks as if that generally needs ncurses to be cross-built
# from source.

ifneq ($(OS),Windows NT)

WOBJECTS=$(SOURCES:.cpp=.obj) $(LOOKUP:.cpp=.obj)

r4.exe:	$(WOBJECTS)
	x86_64-w64-mingw32-g++ $(CXXFLAGS) $(WOBJECTS) -l ncursesw -o r4.exe

$(SOURCES:.cpp=.obj):	%.obj:	%.cpp r4.h cuckoo.h
	x86_64-w64-mingw32-g++ $(CXXFLAGS) -c $< -o $@

$(LOOKUP:.cpp=.obj):	%.obj:	 %.cpp $(DATA) cuckoo.h
	x86_64-w64-mingw32-g++ $(CXXFLAGS) -c $< -o $@

endif

clean:
	rm *.o *.exe r4 *.tgz *.bak* *.old* *.tmp*


r4.tgz:	Makefile r4.h $(SOURCES) $(LOOKUP) $(DATA)
	tar cvfz r4.tgz Makefile r4.h $(SOURCES)

# end of Makefile
