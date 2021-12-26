#include "samochod.h"

namespace car {
    std::ostream &operator<<(std::ostream &output, const Samochod &s) {
        output<<"Kola: "<<std::endl;
        output<<"- srednica: "<<s.kolo.sr<<" cm"<<std::endl;
        output<<"- szerokosc: "<<s.kolo.szer<<" cm"<<std::endl;
        output<<"- ogumienie: "<<s.kolo.guma<<std::endl<<std::endl;
        output<<"Silnik: "<<std::endl;
        output<<"- pojemnosc: "<<s.silnik.poj<<" l"<<std::endl;
        output<<"- typ paliwa: "<<s.silnik.typ<<std::endl<<std::endl;
        return output;
    }
    std::istream &operator>>(std::istream &input, Samochod &s) {
        std::cout<<"Srednica kola: ";
        input>>s.kolo.sr;
        std::cout<<"Szerokosc kola: ";
        input>>s.kolo.szer;
        std::cout<<"Rodzaj ogumienia: ";
        input>>s.kolo.guma;
        std::cout<<"Pojemnosc silnika: ";
        input>>s.silnik.poj;
        std::cout<<"Typ paliwa: ";
        input>>s.silnik.typ;
        return input;
    }
}