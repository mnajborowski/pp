#include <iostream>
#include "person.h"
#include "student.h"
#include <fstream>

void zadanie1() {
    std::cout<<"Zadanie 1"<<std::endl<<std::endl;
    Person p1, p2;

    p1.firstName = "Michal";
    p1.lastName = "Najborowski";
    p1.age = 20;
    p1.gender = 'm';

    p2.firstName = "Arkadiusz";
    p2.lastName = "Dokowicz";
    p2.age = 21;
    p2.gender = 'k';

    std::cout<<"Osoba 1:"<<std::endl;
    std::cout<<p1.firstName<<" "<<p1.lastName<<", lat "<<p1.age;
    if (p1.gender == 'm') std::cout<<", mezczyzna"<<std::endl<<std::endl;
    else if (p1.gender == 'k') std::cout<<", kobieta"<<std::endl<<std::endl;
    std::cout<<"Osoba 2:"<<std::endl;
    std::cout<<p2.firstName<<" "<<p2.lastName<<", lat "<<p2.age;
    if (p2.gender == 'm') std::cout<<", mezczyzna"<<std::endl<<std::endl;
    else if (p2.gender == 'k') std::cout<<", kobieta hehe"<<std::endl<<std::endl;
}

void zadanie2() {
    std::cout<<"Zadanie 2"<<std::endl<<std::endl;
    Person osoba = createPerson();
    display(osoba);
    std::cout<<std::endl;
}

void zadanie3() {
    std::cout<<"Zadanie 3"<<std::endl<<std::endl;
    Student s1;

    s1.firstName = "Michal";
    s1.lastName = "Najborowski";
    s1.birthday = "29.04.1997";
    s1.index = 132102;

    display(s1);
    //kompilator wie, ktora funkcje wybierac dzieki roznych strukturach ktore sa przekazywane do funkcji
}

void zadanie4() {
    std::cout<<"Zadanie 4"<<std::endl<<std::endl;
    std::vector<Person> lista = zapis();
    std::ofstream output;
    output.open("people.txt");
    if (output) {
        for (int i=0; i<lista.size(); i++) {
            output << lista[i].firstName <<" "<<lista[i].lastName<<" "<<lista[i].age<<" "<<lista[i].gender<<std::endl;
        }
    }
    output.close();
}

void zadanie5() {
    std::cout<<"Zadanie 5"<<std::endl<<std::endl;
    float srednia=0;
    std::vector<Person> lista;
    std::ifstream input;
    input.open("people.txt");
    if (input) {
        Person p;
        for (int i=0;;i++) {
            input >> p.firstName >> p.lastName >> p.age >> p.gender;
            lista.push_back(p);
            if (!input) break;
        }
    }
    input.close();
    for (int i=0; i<lista.size()-1; i++) {
        Person p = lista[i];
        display(p);
        srednia = srednia + p.age;
    }
    std::cout<<std::endl<<"Srednia wieku wszystkich osob: "<<srednia/(lista.size()-1)<<std::endl;
}

void zadanie6() {
    std::vector<Person> lista;
    std::ifstream input;
    input.open("people.txt");
    if (input) {
        Person p;
        for (int i=0;;i++) {
            input >> p.firstName >> p.lastName >> p.age >> p.gender;
            lista.push_back(p);
            if (!input) break;
        }
    }
    input.close();
    BubbleSort(lista);
    std::cout<<std::endl;
    for (int i=0; i<lista.size()-1; i++) {
        Person p = lista[i];
        display(p);
    }
    std::cout<<std::endl;
}

int main() {
    int x;
    do {
        std::cout << "Jakie zadanie chcesz wykonac (1-9)(0 = wyjscie): ";
        std::cin >> x;
        switch (x) {
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
            case 6: {
                zadanie6();
                break;
            }
        }
    } while (x != 0);
    return 0;
}