#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>

struct Complex {
	double a, b;

	Complex() {
		a = 0;
		b = 0;
	}
};

Complex operator+(const Complex &z1, const Complex &z2);

Complex operator*(const Complex &z1, const Complex &z2);

std::ostream &operator<<(std::ostream &output, const Complex &z);

std::istream &operator>>(std::istream &intput, Complex &z);

std::vector<Complex> read(const std::string &fileName);

double modul(Complex z);