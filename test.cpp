//this program is to test the measurement library

#include "Measurement.hpp"
#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	Measurement<double> a(3, 4), b(1, 7), c(99, 1), d(0.5, 0.1), e(-0.5, 0.001), f(10,6);

	cout << "Power/Log" << endl;
	cout << "---------" << endl;
	cout << "exp(" << a << "):        " << exp(a) << endl;
	cout << "log(" << a << "):        " << log(a) << endl;
	cout << "log10(" << a << "):      " << log10(a) << endl;
	cout << "pow(" << a << ',' << c << "): " << pow(a,c) << endl;

	cout << endl << "Trig" << endl;
	cout <<         "----" << endl;
	cout << "sin(" << a << "): " << sin(a) << endl;
	cout << "cos(" << a << "): " << cos(a) << endl;
	cout << "tan(" << a << "): " << tan(a) << endl;

	cout << endl << "Inverse Trig" << endl;
	cout <<         "------------" << endl;
	cout << "atan(" << d << "):               " << atan(d) << endl;
	cout << "atan2(" << d << ',' << e << "): " << atan2(d,e) << endl;
	cout << "asin(" << d << "):               " << asin(d) << endl;
	cout << "acos(" << d << "):               " << acos(d) << endl;

	cout << endl << "Hyperbolic Trig" << endl;
	cout <<         "---------------" << endl;
	cout << "sinh(" << a << "): " << sinh(a) << endl;
	cout << "cosh(" << a << "): " << cosh(a) << endl;
	cout << "tanh(" << a << "): " << tanh(a) << endl;

	cout << endl << "Inverse Hyperbolic Trig" << endl;
	cout <<         "-----------------------" << endl;
	cout << "asinh(" << a << "):     " << asinh(a) << endl;
	cout << "acosh(" << a << "):     " << acosh(a) << endl;
	cout << "atanh(" << d << "): " << atanh(d) << endl;


	cout << endl << "Measurement Operators (+=,-=,*=,/=)" << endl;
	cout <<         "-----------------------------------" << endl;
	cout << a << "        += " << b << " :        a = "; cout << (a += b) << endl;
	cout << c << "       -= " << d << " :    c = "; cout << (c -= d) << endl;
	cout << e << " *= " << f << " :       e = "; cout << (e *= f) << endl;
	cout << d << "    /= " << e << " : d = "; cout << (d /= e) << endl;

	cout << endl << "Measurement Operators (+,-,*,/)" << endl;
	cout <<         "-------------------------------" << endl;
	cout << a << "      + " << b << "            = " << (a + b) << endl;
	cout << c << "   - " << d << " = " << (c - d) << endl;
	cout << e << "     * " << f << "           = " << (e * f) << endl;
	cout << d << " / " << e << "     = " << (d / e) << endl;

	cout << endl << "Operators (+=, -=, *=, /=)" << endl;
	cout <<         "--------------------------" << endl;
	cout << a << "      += " << 10 << " : a = "; cout << (a += b) << endl;
	cout << c << "   -= " << 10 << " : c = "; cout << (c -= d) << endl;
	cout << e << "     *= " << 10 << " : e = "; cout << (e *= f) << endl;
	cout << d << " /= " << 10 << " : d = "; cout << (d /= e) << endl;

	cout << endl << "Operators (+,-,*,/)" << endl;
	cout <<         "-------------------" << endl;
	cout << a << "        + 10 = " << (a + 10) << endl;
	cout << b << "              - 10 = " << (b - 10) << endl;
	cout << c << "     / 10 = " << (c / 10) << endl;
	cout << d << " * 10 = " << (d * 10) << endl;


	cout << endl << "Merging:" << endl;
	cout <<         "-------" << endl;
	cout << a << " and " << b << endl;
	cout << Measurement<double>(a,b) << endl;
}
