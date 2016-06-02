# Trivial Makefile for lisphash

# I want to tee stderr as well as stdout, and the notation "|&" works
# nicely for me, but is bash specific. So I need to ask "make" to use it
# rather than a more standard version of "sh". Also PIPESTATUS.

SHELL=bash

# CFLAGS=-DTRACE=1
CFLAGS=

# The "LANG=C" setting here is so that gcc diagnostics do not contain
# characters outside that Basic Latin range. That will make it easier for
# me to read log files...

lisphash lisphash.exe:	lisphash.o fakecsl.o
	LANG=C g++ -O0 -g lisphash.o fakecsl.o -o lisphash


lisphash.o:	lisphash.cpp headers.h
	LANG=C g++ -c $(CFLAGS) -O0 -g lisphash.cpp |& tee lisphash.log ; test $${PIPESTATUS[0]} -eq 0

fakecsl.o:	fakecsl.cpp headers.h
	LANG=C g++ -c $(CFLAGS) -O0 -g fakecsl.cpp |& tee fakecsl.log ; test $${PIPESTATUS[0]} -eq 0

clean:
	rm -rf *.o *.exe *.bak *~ *.log

# end of Makefile

