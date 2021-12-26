#include <iostream>
#include "complex.h"
#include "samochod.h"
#include "student.h"
#include <array>

std::array<math::Complex, 2> twoComplexes() {
    std::array<math::Complex, 2> arr;
    math::Complex z1, z2;
    std::cout<<"Podaj czesc rzeczywista liczby zespolonej nr 1: ";
    std::cin>>z1.a;
    std::cout<<"Podaj czesc urojona liczby zespolonej nr 1: ";
    std::cin>>z1.b;
    std::cout<<"Podaj czesc rzeczywista liczby zespolonej nr 2: ";
    std::cin>>z2.a;
    std::cout<<"Podaj czesc urojona liczby zespolonej nr 2: ";
    std::cin>>z2.b;
    arr[0]=z1;
    arr[1]=z2;
    return arr;
};

void zadanie1() {
    std::cout<<"Zadanie 1"<<std::endl<<std::endl;
    std::array<math::Complex, 2> z = twoComplexes();
    math::Complex z3;
    z3.a = z[0].a+z[1].a;
    z3.b = z[0].b+z[1].b;
    std::cout<<"Suma liczb zespolonych: "<<z3.a<<" + "<<z3.b<<"i";
    std::cout<<std::endl<<std::endl;
}

void zadanie2() {
    std::cout<<"Zadanie 2"<<std::endl<<std::endl;
    std::array<math::Complex, 2> z = twoComplexes();
    math::Complex z3;
    z3 = z[0]+z[1];
    std::cout<<"Suma liczb zespolonych: "<<z3.a<<" + "<<z3.b<<"i"<<std::endl;
    z3 = z[0]-z[1];
    std::cout<<"Suma liczb zespolonych: "<<z3.a<<" + "<<z3.b<<"i"<<std::endl;
    z3 = z[0]*z[1];
    std::cout<<"Suma liczb zespolonych: "<<z3.a<<" + "<<z3.b<<"i"<<std::endl;
    if (z[0]==z[1]) std::cout<<"Liczby sa takie same";
    else std::cout<<"Liczby sa rozne";
    std::cout<<std::endl<<std::endl;
}

void zadanie3() {
    std::cout<<"Zadanie 3"<<std::endl<<std::endl;
    math::Complex z;
    std::cout<<"Podaj czesc rzeczywista i urojona liczby zespolonej"<<std::endl;
    std::cin>>z;
    std::cout<<"Liczba zespolona: "<<z<<std::endl<<std::endl;
}

void zadanie4() {
    std::cout<<"Zadanie 4"<<std::endl<<std::endl;
    car::Samochod s;
    std::cout<<"Podaj parametry kol i silnika samochodu"<<std::endl;
    std::cin>>s;
    std::cout<<"Parametry samochodu"<<std::endl;
    std::cout<<s;
}

void zadanie5() {
    std::vector<student::Student> list;
    int x;
    do {
        std::cout<<"MENU BAZY STUDENTOW"<<std::endl;
        std::cout<<"1. Dodawanie nowego studenta na liste"<<std::endl;
        std::cout<<"2. Wyswietlanie na ekranie informacji o studencie z podanym nr indeksu"<<std::endl;
        std::cout<<"3. Zapisywanie listy studentow do pliku"<<std::endl;
        std::cout<<"4. Odczytywanie z pliku listy studentow"<<std::endl;
        std::cout<<"5. Usuwanie z listy studenta o podanym numerze indeksu"<<std::endl;
        std::cout<<"0. Wyjscie"<<std::endl;
        std::cout<<"Co chcesz zrobic: ";
        std::cin>>x;
        switch(x) {
            case 1: {
                student::add(list);
                break;
            }
            case 2: {
                int search;
                std::cout<<"Podaj nr indeksu szukanego studenta: ";
                std::cin>>search;
                student::show(list, search);
                break;
            }
            case 3: {
                write(list, "studenci.txt");
                break;
            }
            case 4: {
                read(list, "studenci.txt");
                break;
            }
            case 5: {
                int search;
                std::cout<<"Podaj nr indeksu studenta, ktorego chcesz usunac: ";
                std::cin>>search;
                student::del(list, search);
                break;
            }
        }
        if (x!=0) {
            std::cout << "Wcisnij ENTER";
            std::cin.ignore();
            std::cin.get();
            system("CLS");
        }
    } while(x!=0);
}

int main() {
    int x;
    do {
        std::cout<<"Jakie zadanie chcesz wykonac (1-5)(0 = wyjscie): ";
        std::cin>>x;
        switch(x) {
            case 1: {
                zadanie1();
                break;
            }
            case 2: {
                zadanie2();
                break;
            }
            case 3: {
                zadanie3();
                break;
            }
            case 4: {
                zadanie4();
                break;
            }
            case 5: {
                zadanie5();
                break;
            }
        }
    } while (x!=0);
    return 0;
}