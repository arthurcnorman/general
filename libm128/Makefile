# Makefile for libm128 project

CXXFLAGS=-O0 -g

# trial will be my main test of such parts of the maths library as
# I have got to.

# Here I have a list of the source files I am at present working with.
LIBFILES =	my_polevll.cpp \
		my_e_expl.cpp

OBJFILES = $(LIBFILES:%.cpp=%.o)


trial:		trial.cpp \
		float128_t.o \
		$(OBJFILES)
	scr trial.log g++ $(CXXFLAGS) \
		trial.cpp \
		float128_t.o \
		$(OBJFILES) \
		-o trial

float128_t.o:	float128_t.h float128_t.cpp
	g++ $(CXXFLAGS) -c float128_t.cpp -o float128_t.o

my_e_expl.o:	my_e_expl.cpp float128_t.h
	g++ $(CXXFLAGS) -c my_e_expl.cpp -o my_e_expl.o

my_polevll.o:	my_polevll.cpp float128_t.h
	g++ $(CXXFLAGS) -c my_polevll.cpp -o my_polevll.o



# This is a small framework for testing float128_t stuff. It is not part
# of anything that will be used in the end.

f128test:	f128test.cpp float128_t.h float128_t.o
	g++ $(CXXFLAGS) f128test.cpp float128_t.o -o f128test

.PHONY:	float128_t.tar.bz2
float128_t.tar.bz2:
	tar cvfj float128_t.tar.bz2 Makefile *.h *.cpp
