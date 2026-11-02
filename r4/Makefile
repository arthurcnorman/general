# Makefile for rf.

# "rf" is a program editor modelled after (antique) wordstar but
# providing support for Unicode text including use of combining
# marks and discriticals. Its name if a pun on "ws" for wordstar,
# which is the two keys to the left of "ed" (for editor). "rf" is
# the pair of keys to the right, and so is clearly a step forward
# in parts of the world that read in that direction. 

ifeq ($(OS),Windows NT)
CXX=x86_64-w64-mingw32-g++
else
CXX=g++
endif

OPTS=-O0 -g -DDEBUG=1
# OPTS=-O3

CXXFLAGS=$(OPTS) -std=c++23

SOURCES = rf.cpp uniconv.cpp keymap.cpp entities.cpp adobenames.cpp \
		texnames.cpp combining.cpp \
		unicode-1.cpp unicode-2.cpp unicode-3.cpp unicode-4.cpp

OBJECTS=$(SOURCES:.cpp=.o)

rf:	$(OBJECTS) $(SOURCES) rf.h
	$(CXX) $(CXXFLAGS) $(OBJECTS) -l ncursesw -o rf

$(OBJECTS):	%.o:	 %.cpp rf.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm *.o *.exe rf *.tgz *.bak* *.old* *.tmp*


rf.tgz:	Makefile rf.h $(SOURCES)
	tar cvfz rf.tgz Makefile rf.h $(SOURCES)

# end of Makefile
