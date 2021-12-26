#include "stdafx.h"
#include "Complex.h"
#include <string>

Complex operator+(const Complex &z1, const Complex &z2) {
	Complex z3;
	z3.a = z1.a + z2.a;
	z3.b = z1.b + z2.b;
	return z3;
}

Complex operator*(const Complex &z1, const Complex &z2) {
	Complex z3;
	z3.a = (z1.a * z2.a) - (z1.b * z2.b);
	z3.b = (z1.b * z2.a) + (z1.a * z2.b);
	return z3;
}

std::ostream &operator<<(std::ostream &output, const Complex &z) {
	output << z.a << " + " << z.b << "i";
	return output;
}

std::istream &operator>>(std::istream &input, Complex &z) {
	input >> z.a >> z.b;
	return input;
}

std::vector<Complex> read(const std::string &fileName) {
	std::vector<Complex> v;
	std::string a, b;
	Complex c;
	std::ifstream input;
	input.open(fileName);
	if (input) {
		while (!input.eof()) {
			input >> a >> b;
			c.a = std::stod(a);
			c.b = std::stod(b);
			v.push_back(c);
		}
	}
	input.close();
	return v;
}

double modul(Complex z) {
	return sqrt(pow(z.a, 2) + pow(z.b, 2));
}