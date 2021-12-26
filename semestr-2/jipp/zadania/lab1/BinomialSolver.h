#pragma once
#include <math.h>

struct BinomialSolver {
	double a, b, c, x1, x2;

	BinomialSolver(double a, double b, double c) : a(a), b(b), c(c) {
		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	}

	double getA() const;

	double getB() const;

	double getC() const;

	double getX1() const;

	double getX2() const;

	double calculate(double x) const;
};