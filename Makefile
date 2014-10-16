#simple makefile

all: build

try: test Measurement.hpp
	./test

build: test.cpp Measurement.hpp
	g++ -Wall -Werror test.cpp -O3 -o test

test.cpp: Measurement.hpp
