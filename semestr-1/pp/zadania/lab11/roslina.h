#ifndef ZADANIA_ROSLINA_H
#define ZADANIA_ROSLINA_H
#include <iostream>
#include <vector>
#include <algorithm>

enum class TypRosliny {Owoc, Warzywo};

struct Roslina {
    TypRosliny typ;
    std::string nazwa;
};

typedef std::vector<Roslina> Koszyk;

void doKoszyka(Koszyk &koszyk);
bool czy_jest_gruszka(const Koszyk &koszyk);
bool czy_same_owoce(const Koszyk &koszyk);
bool czy_same_warzywa(const Koszyk &koszyk);
bool czy_jeden_owoc(const Koszyk &koszyk);
bool czy_jedno_warzywo(const Koszyk &koszyk);
int zlicz_owoce(const Koszyk &koszyk);
int zlicz_warzywa(const Koszyk &koszyk);
void usun_jezeli(Koszyk &koszyk);
Koszyk koszyk_marty();
std::ostream& operator<<(std::ostream& out, const Roslina& roslina);
std::ostream& operator<<(std::ostream& out, const Koszyk& koszyk);
bool operator<(const Roslina& r1, const Roslina& r2);



#endif //ZADANIA_ROSLINA_H
