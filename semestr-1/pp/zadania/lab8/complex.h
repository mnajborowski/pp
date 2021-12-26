#ifndef ZADANIA_COMPLEX_H
#define ZADANIA_COMPLEX_H
#include <iostream>

namespace math {
    struct Complex {
        float a, b;
        Complex() {
            a=0;
            b=0;
        }
    };

    Complex operator+(const Complex &z1, const Complex &z2);
    Complex operator-(const Complex &z1, const Complex &z2);
    Complex operator*(const Complex &z1, const Complex &z2);
    bool operator==(const Complex &z1, const Complex &z2);
    std::ostream &operator<<(std::ostream &output, const Complex &z);
    std::istream &operator>>(std::istream &intput, Complex &z);

}

#endif //ZADANIA_COMPLEX_H
