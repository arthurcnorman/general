# Makefile for wvs.

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++
else
CXX=g++
endif

CXXFLAGS=-O0 -g -std=c++23

SOURCES = wvs.cpp uniconv.cpp keymap.cpp entities.cpp adobenames.cpp \
		texnames.cpp combining.cpp

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
