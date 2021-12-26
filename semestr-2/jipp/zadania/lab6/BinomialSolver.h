#pragma once
#include <iostream>
#include <math.h>

class no_real_solution : public std::runtime_error
{
public:
	no_real_solution() : std::runtime_error("") {};
	virtual const char* what() const throw() {
		return "No real solution";
	}
};

struct BinomialSolver {
	double a, b, c, x1, x2;

	BinomialSolver(double a, double b, double c) : a(a), b(b), c(c) {
		double delta = pow(b, 2) - 4 * a * c;
		if (delta >= 0) {
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
		}
		else throw no_real_solution();
	}

	double getA() const;

	double getB() const;

	double getC() const;

	double getX1() const;

	double getX2() const;

	double calculate(double x) const;
};