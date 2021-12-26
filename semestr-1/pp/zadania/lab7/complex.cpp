#include "complex.h"

Complex add(const Complex &z1, const Complex &z2) {
    Complex z3;
    z3.a = z1.a + z2.a;
    z3.b = z1.b + z2.b;
    return z3;
}

Complex subtract(const Complex &z1, const Complex &z2) {
    Complex z3;
    z3.a = z1.a - z2.a;
    z3.b = z1.b - z2.b;
    return z3;
}

Complex multiply(const Complex &z1, const Complex &z2) {
    Complex z3;
    z3.a = (z1.a*z2.a)-(z1.b*z2.b);
    z3.b = (z1.b*z2.a)+(z1.a*z2.b);
    return z3;
}

bool equals(const Complex &z1, const Complex &z2) {
    if (z1.a == z2.a && z1.b == z2.b) return true;
    else return false;
}