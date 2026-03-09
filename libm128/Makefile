
CXXFLAGS=-O0 -g

trial:	trial.cpp float128_t.h float128_t.o
	scr trial.log g++ $(CXXFLAGS) trial.cpp float128_t.o -o trial

f128test:	f128test.cpp float128_t.h float128_t.o
	scr f128test.log g++ $(CXXFLAGS) f128test.cpp float128_t.o -o f128test

float128_t.o:	float128_t.h float128_t.cpp
	scr float128_t.log g++ $(CXXFLAGS) -c float128_t.cpp -o float128_t.o

.PHONY:	float128_t.tar.bz2
float128_t.tar.bz2:
	tar cvfj float128_t.tar.bz2 Makefile *.h *.cpp
