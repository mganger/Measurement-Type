//this program is to test the measurement library

#include "Measurement.hpp"
#include <iostream>

using namespace std;

int main(){
	Measurement<double> a(3, 4), b(1, 7), c(99, 1), d(0.5, 0.1), e(-0.5, 0.001);

	cout << a * b + c / exp(a) * sin(b) + cos(c) << endl;
	cout << atan(d) * asin(d) * acos(d) << endl;
	cout << pow(a,b) / log(c) * sqrt(a) << endl;
	cout << atan2(d,e) << endl;
}
