#include "stdafx.h"
#include "BinomialSolver.h"

double BinomialSolver::getA() const {
	return a;
}

double BinomialSolver::getB() const {
	return b;
}

double BinomialSolver::getC() const {
	return c;
}

double BinomialSolver::getX1() const {
	return x1;
}

double BinomialSolver::getX2() const {
	return x2;
}

double BinomialSolver::calculate(double x) const {
	return a * x * x + b * x + c;
}