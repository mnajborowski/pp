#include "roslina.h"


int main() {
    int x;
    Koszyk koszyk, koszyk2;
    do {
        std::cout<<"1. Wloz owoc lub warzywo do koszyka [Zadanie 1]"<<std::endl;
        std::cout<<"2. Sprawdz co jest w koszyku [Zadanie 2]"<<std::endl;
        std::cout<<"3. Sprawdz, czy w koszyku jest gruszka [Zadanie 3]"<<std::endl;
        std::cout<<"4. Sprawdz, czy w koszyku sa same owoce/warzywa/przynajmniej jeden owoc/przynajmniej jedno warzywo [Zadanie 4]"<<std::endl;
        std::cout<<"5. Sprawdz liczba owocow i warzyw w koszyku [Zadanie 5]"<<std::endl;
        std::cout<<"6. Usun z koszyka wszystkie owoce/warzywa na litere 'g' [Zadanie 6]"<<std::endl;
        std::cout<<"7. Sprawdz roznice miedzy koszykiem Malgosi i Marty [Zadanie 8]"<<std::endl;
        std::cout<<"8. Wyswietl zawartosc obu koszykow [Zadanie 9]"<<std::endl;
        std::cout<<"0. Wyjscie"<<std::endl;
        std::cout<<"Co chcesz zrobic: ";
        std::cin>>x;
        switch(x) {
            case 1: {
                doKoszyka(koszyk);
                break;
            }
            case 2: {
                std::cout<<koszyk;
                break;
            }
            case 3: {
                if (czy_jest_gruszka(koszyk)) std::cout<<"W koszyku jest gruszka!";
                else std::cout<<"W koszyku nie ma gruszki :(";
                break;
            }
            case 4: {
                if (koszyk.size()!=0) {
                    if (czy_same_owoce(koszyk)) std::cout << "W koszyku sa same owoce" << std::endl;
                    else if (czy_same_warzywa(koszyk)) std::cout << "W koszyku sa same warzywa" << std::endl;
                    else {
                        if (czy_jeden_owoc(koszyk)) std::cout << "W koszyku jest przynajmniej jeden owoc" << std::endl;
                        if (czy_jedno_warzywo(koszyk))
                            std::cout << "W koszyku jest przynajmniej jedno warzywo" << std::endl;
                    }
                }
                else std::cout<<"Koszyk jest pusty";
                break;
            }
            case 5: {
                std::cout<<"Owocow: "<<zlicz_owoce(koszyk)<<std::endl;
                std::cout<<"Warzyw: "<<zlicz_warzywa(koszyk);
                break;
            }
            case 6: {
                usun_jezeli(koszyk);
                break;
            }
            case 7: {
                Koszyk koszyk_wspolny, koszyk_rozny;
                koszyk2 = koszyk_marty();
                std::cout<<"Utworzono drugi koszyk (koszyk Marty): [poziomka, pomidor, mango]"<<std::endl;
                std::sort(koszyk.begin(), koszyk.end());
                std::sort(koszyk2.begin(), koszyk2.end());
                std::set_intersection(koszyk.begin(), koszyk.end(), koszyk2.begin(), koszyk2.end(), std::back_inserter(koszyk_wspolny));
                if (koszyk_wspolny.size()!=0) std::cout<<"W jednym i drugim koszyku znajduje sie: "<<std::endl<<koszyk_wspolny;
                else std::cout<<"Koszyki nie maja wspolnych owocow/warzyw";
                std::cout<<std::endl;
                std::set_difference(koszyk.begin(), koszyk.end(), koszyk2.begin(), koszyk2.end(), std::inserter(koszyk_rozny, koszyk_rozny.begin()));
                if (koszyk_rozny.size()!=0) std::cout<<"Drugi koszyk rozni sie od pierwszego: "<<std::endl<<koszyk_rozny;
                else if (koszyk.size()==koszyk2.size()) std::cout<<"Koszyki maja te same owoce/warzywa";
                break;
            }
            case 8: {
                Koszyk koszyk_wielki;
                koszyk2 = koszyk_marty();
                std::cout<<"Utworzono drugi koszyk (koszyk Marty): [poziomka, pomidor, mango]"<<std::endl;
                std::set_union(koszyk.begin(), koszyk.end(), koszyk2.begin(), koszyk2.end(), std::back_inserter(koszyk_wielki));
                std::cout<<"Zawartosc obu koszykow: "<<std::endl<<koszyk_wielki;
            }
        }
        if (x!=0) {
            std::cout << std::endl << std::endl << "Wcisnij ENTER";
            std::cin.ignore();
            std::cin.get();
            system("CLS");
        }
    } while (x!=0);
    return 0;
}