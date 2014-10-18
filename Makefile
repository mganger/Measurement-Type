#simple makefile

all: test

try: all
	./test

test: test.cpp Measurement.hpp
	g++ -Wall -Werror test.cpp -O3 -o test

test.cpp: Measurement.hpp
