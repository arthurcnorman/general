# Makefile for r4.

# "r4" is a program editor modelled after (antique) wordstar but
# providing support for Unicode text including use of combining
# marks and discriticals.
# My name is Arthur and when slurred that turns into arfur and thus
# into r4. The resulting name is short and easy to type.

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++
else
CXX=g++
endif

OPTS=-O0 -g -DDEBUG=1
# OPTS=-O3

CXXFLAGS=$(OPTS) -std=c++23

SOURCES = 	r4.cpp \
		uniconv.cpp keymap.cpp entities.cpp adobenames.cpp \
		texnames.cpp combining.cpp \
		unicode-1.cpp unicode-2.cpp unicode-3.cpp unicode-4.cpp

OBJECTS=$(SOURCES:.cpp=.o)

r4:	$(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -l ncursesw -o r4

$(OBJECTS):	%.o:	 %.cpp r4.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o *.exe r4 *.tgz *.bak* *.old* *.tmp*


r4.tgz:	Makefile r4.h $(SOURCES)
	tar cvfz r4.tgz Makefile r4.h $(SOURCES)

# end of Makefile
