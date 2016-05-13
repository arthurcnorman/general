# Trivial Makefile for lisphash

lisphash:	lisphash.o fakecsl.o
	g++ -O1 -g lisphash.o fakecsl.o -o lisphash


lisphash.o:	lisphash.cpp fakecsl.h
	g++ -O1 -g lisphash.cpp

fakecsl.o:	fakecsl.cpp fakecsl.h
	g++ -O1 -g fakecsl.cpp


# end of Makefile

