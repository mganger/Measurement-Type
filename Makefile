#simple makefile

all: build

try: test
	./test

build: test.cpp Measurement.hpp
	g++ test.cpp -O3 -o test

test.cpp: Measurement.hpp
