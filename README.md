Measurement-Type
================

This repository holds a C++ class to make measurement propagation easier

Basically, it takes care of all the measurement propagation issues when doing
calculations, at the expense of computation time. If one is truly interested
in speed of calculation, it is better to derive an equation for the propagation
of error ahead of time.

However, this gives a good approximation where attempting to find the error
manually is impractical.

It is templated, so any number type can be used (although floating point precision
is generally reccomended). It has been tested to work with boost arbitrary precision
floats.
