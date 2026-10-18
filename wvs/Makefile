# Makefile for wvs.

OPT=-O0 -g
#OPT = -O3

wvs:	wvs.cpp uniconv.cpp keymap.cpp wvs.h
	g++ $(OPT) wvs.cpp uniconv.cpp keymap.cpp \
		-l ncursesw -o wvs

# Not yet tested, and the availability of the wide character version of
# ncurses is not quite clear yet.

winvs:	wvs.cpp uniconv.cpp keymap.cpp wvs.h
	x86_64-w64-mingw32-g++ $(OPT) wvs.cpp uniconv.cpp keymap.cpp \
		-l ncursesw -o wvs.exe

wvs.tgz:	Makefile wvs.h wvs.cpp uniconv.cpp keymap.cpp
	tar cvfz wvs.tgz Makefile wvs.h wvs.cpp uniconv.cpp keymap.cpp

clean:
	rm *.o *.exe wvs *.tgz

# end of Makefile
