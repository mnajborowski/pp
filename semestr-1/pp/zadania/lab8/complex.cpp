#include "complex.h"

namespace math {
    Complex operator+(const Complex &z1, const Complex &z2) {
        Complex z3;
        z3.a = z1.a + z2.a;
        z3.b = z1.b + z2.b;
        return z3;
    }

    Complex operator-(const Complex &z1, const Complex &z2) {
        Complex z3;
        z3.a = z1.a - z2.a;
        z3.b = z1.b - z2.b;
        return z3;
    }

    Complex operator*(const Complex &z1, const Complex &z2) {
        Complex z3;
        z3.a = (z1.a*z2.a)-(z1.b*z2.b);
        z3.b = (z1.b*z2.a)+(z1.a*z2.b);
        return z3;
    }

    bool operator==(const Complex &z1, const Complex &z2) {
        if (z1.a == z2.a && z1.b == z2.b) return true;
        return false;
    }

    std::ostream &operator<<(std::ostream &output, const Complex &z) {
        output<<z.a<<" + "<<z.b<<"i";
        return output;
    }
    std::istream &operator>>(std::istream &input, Complex &z) {
        std::cout<<"Czesc rzeczywista: ";
        input>>z.a;
        std::cout<<"Czesc urojona: ";
        input>>z.b;
        return input;
    }
}