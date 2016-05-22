# Trivial Makefile for lisphash

# CFLAGS=-DTRACE=1
CFLAGS=

lisphash:	lisphash.o fakecsl.o
	LANG=C g++ -O1 -g lisphash.o fakecsl.o -o lisphash


lisphash.o:	lisphash.cpp headers.h
	LANG=C g++ -c $(CFLAGS) -O1 -g lisphash.cpp

fakecsl.o:	fakecsl.cpp headers.h
	LANG=C g++ -c $(CFLAGS) -O1 -g fakecsl.cpp


# end of Makefile

