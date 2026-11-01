# Makefile for wvs.

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++
else
CXX=g++
endif

OPTS=-O0 -g -DDEBUG=1
# OPTS=-O3

CXXFLAGS=$(OPTS) -std=c++23

SOURCES = wvs.cpp uniconv.cpp keymap.cpp entities.cpp adobenames.cpp \
		texnames.cpp combining.cpp \
		unicode-1.cpp unicode-2.cpp unicode-3.cpp unicode-4.cpp

OBJECTS=$(SOURCES:.cpp=.o)

wvs:	$(OBJECTS) $(SOURCES) wvs.h
	$(CXX) $(CXXFLAGS) $(OBJECTS) -l ncursesw -o wvs

#.cpp.o:
#	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJECTS):	%.o:	 %.cpp wvs.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o *.exe wvs *.tgz *.bak* *.old* *.tmp*


wvs.tgz:	Makefile wvs.h $(SOURCES)
	tar cvfz wvs.tgz Makefile wvs.h $(SOURCES)

# end of Makefile
