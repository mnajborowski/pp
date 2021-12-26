#ifndef ZADANIA_PERSON_H
#define ZADANIA_PERSON_H
#include <vector>

struct Person {
    std::string firstName;
    std::string lastName;
    unsigned short age;
    char gender;


};

Person createPerson();
void display(const Person &p);
std::vector<Person> zapis();
void BubbleSort(std::vector<Person> &p);

#endif //ZADANIA_PERSON_H
