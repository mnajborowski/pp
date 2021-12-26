#include <iostream>
#include <vector>
#include <algorithm>
#include "person.h"

Person createPerson() {
        Person p;
        std::cout << "Podaj imie nowej osoby: ";
        std::cin >> p.firstName;
        std::cout << "Podaj nazwisko nowej osoby: ";
        std::cin >> p.lastName;
        std::cout << "Podaj wiek nowej osoby: ";
        std::cin >> p.age;
        std::cout << "Podaj plec nowej osoby (m/k): ";
        std::cin >> p.gender;
        std::cout<<std::endl;
    return p;
}

void display(const Person &p) {
    std::cout<<p.firstName<<" "<<p.lastName<<", lat "<<p.age;
    if (p.gender == 'm') std::cout<<", mezczyzna"<<std::endl;
    else if (p.gender == 'k') std::cout<<", kobieta"<<std::endl;
}

std::vector<Person> zapis() {
    std::vector<Person> v;
    int ile;
    std::cout<<"Ile osob chcesz dodac? ";
    std::cin>>ile;
    Person *p = new Person[ile];
    for (int i=0; i<ile; i++) {
        std::cout<<"Podaj imie osoby nr "<<i+1<<": ";
        std::cin>>p[i].firstName;
        std::cout<<"Podaj nazwisko osoby nr "<<i+1<<": ";
        std::cin>>p[i].lastName;
        std::cout<<"Podaj wiek osoby nr "<<i+1<<": ";
        std::cin>>p[i].age;
        std::cout<<"Podaj plec osoby nr "<<i+1<<" (m/k): ";
        std::cin>>p[i].gender;
        v.push_back(p[i]);
    }
    return v;
}

void BubbleSort(std::vector<Person> &p) {
    Person temp;
    for (int i=1; i<p.size()-1; i++) {
        for (int j=0; j<p.size()-2; j++) {
            if (p[j].age>p[j+1].age) {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}