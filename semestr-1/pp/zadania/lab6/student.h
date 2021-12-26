#ifndef ZADANIA_STUDENT_H
#define ZADANIA_STUDENT_H

struct Student {
    std::string firstName;
    std::string lastName;
    std::string birthday;
    int index;


};

void display(const Student &s);

#endif //ZADANIA_STUDENT_H
