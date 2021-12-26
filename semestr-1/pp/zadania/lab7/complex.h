#ifndef ZADANIA_COMPLEX_H
#define ZADANIA_COMPLEX_H

struct Complex {
    float a, b;

    Complex() {
        a=0;
        b=0;
    }
};

Complex add(const Complex &z1, const Complex &z2);
Complex subtract(const Complex &z1, const Complex &z2);
Complex multiply(const Complex &z1, const Complex &z2);
bool equals(const  Complex &z1, const Complex &z2);

#endif //ZADANIA_COMPLEX_H
