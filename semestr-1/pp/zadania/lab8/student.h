#ifndef ZADANIA_STUDENT_H
#define ZADANIA_STUDENT_H
#include <iostream>
#include <vector>
#include <fstream>

namespace student {
    struct Student {
        std::string firstName, lastName, birth;
        int index;
    };

    void add(std::vector<Student> &list);
    void show(std::vector<Student> &list, int &search);
    void del(std::vector<Student> &list, int &search);

    std::ostream &operator<<(std::ostream &output, const Student &s);
    std::istream &operator>>(std::istream &input, Student &s);
}

void write(std::vector<student::Student> &list, std::string fileName);
void read(std::vector<student::Student> &list, std::string fileName);

#endif //ZADANIA_STUDENT_H
