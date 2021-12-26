#include "roslina.h"

//zadanie2
std::ostream& operator<<(std::ostream& out, const Roslina& r) {
    out<<r.nazwa;
    return out;
}

std::ostream& operator<<(std::ostream& out, const Koszyk& koszyk) {
    for (int i=0; i<koszyk.size(); i++) {
        out<<koszyk[i];
        if (i<koszyk.size()-1) out<<std::endl;
    }
    return out;
}

//zadanie7
bool operator<(const Roslina& r1, const Roslina& r2) {
    return r1.nazwa<r2.nazwa;
}

//zadanie1
void doKoszyka(Koszyk &koszyk) {
    std::string typ;
    Roslina r;
    do {
        std::cout << "Co chcesz wlozyc do koszyka? (owoc/warzywo): ";
        std::cin >> typ;
    } while (typ!="owoc" && typ!="warzywo");
    if (typ=="owoc") {
        r.typ=TypRosliny :: Owoc;
        std::cout<<"Jaki to owoc: ";
        std::cin>>r.nazwa;
    }
    if (typ=="warzywo") {
        r.typ=TypRosliny :: Warzywo;
        std::cout<<"Jakie to warzywo: ";
        std::cin>>r.nazwa;
    }
    koszyk.push_back(r);
}

//zadanie3
bool czy_jest_gruszka(const Koszyk &koszyk) {
    return std::find_if(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.nazwa=="gruszka"; }  )!=koszyk.end();
}

//zadanie4
bool czy_same_owoce(const Koszyk &koszyk) {
    return std::all_of(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Owoc;});
}

bool czy_same_warzywa(const Koszyk &koszyk) {
    return std::all_of(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Warzywo;});
}

bool czy_jeden_owoc(const Koszyk &koszyk) {
    return std::any_of(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Owoc;});
}

bool czy_jedno_warzywo(const Koszyk &koszyk) {
    return std::any_of(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Warzywo;});
}

//zadanie5
int zlicz_owoce(const Koszyk &koszyk) {
    return std::count_if(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Owoc;});
}

int zlicz_warzywa(const Koszyk &koszyk) {
    return std::count_if(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.typ == TypRosliny :: Warzywo;});
}

//zadanie6
void usun_jezeli(Koszyk &koszyk) {
    koszyk.erase(std::remove_if(koszyk.begin(), koszyk.end(), [](const Roslina &r){return r.nazwa[0]=='g';}), koszyk.end());
}

//zadanie8
Koszyk koszyk_marty() {
    Roslina r;
    Koszyk koszyk2;
    r.typ =  TypRosliny :: Owoc;
    r.nazwa = "poziomka";
    koszyk2.push_back(r);
    r.typ =  TypRosliny :: Warzywo;
    r.nazwa = "pomidor";
    koszyk2.push_back(r);
    r.typ =  TypRosliny :: Owoc;
    r.nazwa = "mango";
    koszyk2.push_back(r);
    return koszyk2;
}

