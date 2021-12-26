#ifndef ZADANIA_SAMOCHOD_H
#define ZADANIA_SAMOCHOD_H
#include <iostream>

namespace car {
    struct Kolo {
        float sr;
        float szer;
        std::string guma;
    };

    struct Silnik {
        float poj;
        std::string typ;
    };

    struct Samochod {
        Kolo kolo;
        Silnik silnik;
    };

    std::ostream &operator<<(std::ostream &output, const Samochod &s);
    std::istream &operator>>(std::istream &intput, Samochod &s);
}

#endif //ZADANIA_SAMOCHOD_H
