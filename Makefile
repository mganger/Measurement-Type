#simple makefile

all: build

try: test
	./test

build: test.cpp
	g++ test.cpp -o test

test.cpp: Measurement.hpp
