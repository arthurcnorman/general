# Makefile for wvs.

OPT=-O0 -g
#OPT = -O3

SOURCES = wvs.cpp uniconv.cpp keymap.cpp entities.cpp adobenames.cpp

wvs:	wvs.h $(SOURCES)
	g++ $(OPT) $(SOURCES) -l ncursesw -o wvs

# Not yet tested, and the availability of the wide character version of
# ncurses is not quite clear yet.

winvs:	$(SOURCES) wvs.h
	x86_64-w64-mingw32-g++ $(OPT) $(SOURCES) -l ncursesw -o wvs.exe

wvs.tgz:	Makefile wvs.h $(SOURCES)
	tar cvfz wvs.tgz Makefile wvs.h $(SOURCES)

clean:
	rm *.o *.exe wvs *.tgz

# end of Makefile
