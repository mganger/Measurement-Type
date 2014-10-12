#simple makefile

all: build

try: test
	./test

build: test.cpp Measurement.hpp
	g++ test.cpp -o test

test.cpp: Measurement.hpp
