#include "student.h"

namespace student {
    std::ostream &operator<<(std::ostream &output, const Student &s) {
        output << "Imie: " << s.firstName << std::endl;
        output << "Nazwisko: " << s.lastName << std::endl;
        output << "Data urodzin: " << s.birth << std::endl;
        output << "Nr indeksu: " << s.index << std::endl << std::endl;
        return output;
    }

    std::istream &operator>>(std::istream &input, Student &s) {
        std::cout << "Imie nowego studenta: ";
        input >> s.firstName;
        std::cout << "Nazwisko nowego studenta: ";
        input >> s.lastName;
        std::cout << "Data urodzenia nowego studenta: ";
        input >> s.birth;
        std::cout << "Nr indeksu nowego studenta: ";
        input >> s.index;
        return input;
    }

    void add(std::vector<Student> &list) {
        Student s;
        std::cout << "Podaj dane nowego studenta: " << std::endl;
        std::cin >> s;
        list.push_back(s);
    }

    void show(std::vector<Student> &list, int &search) {
        int i;
        for (i = 0; i < list.size(); i++) {
            if (list[i].index == search) {
                std::cout << list[i];
                break;
            }
        }
        if (i==list.size()) std::cout << "Nie ma studenta o podanym numerze indeksu" << std::endl << std::endl;
    }

    void del(std::vector<Student> &list, int &search) {
        for (int i = 0; i < list.size(); i++) {
            if (list[i].index == search) {
                list.erase(list.begin()+i);
                break;
            }
        }
    }
}

void write(std::vector<student::Student> &list, std::string fileName) {
    std::ofstream output;
    output.open(fileName);
    if (output) {
        for (int i = 0; i < list.size(); i++) {
            output << list[i].firstName << " " << list[i].lastName << " " << list[i].birth << " " << list[i].index;
            if (i < list.size() - 1) output << std::endl;
        }
    }
    output.close();
}

void read(std::vector<student::Student> &list, std::string fileName) {
    list.clear();
    std::ifstream input;
    input.open(fileName);
    if (input) {
        student::Student s;
        while (input.eof()==0) {
            input >> s.firstName >> s.lastName >> s.birth >> s.index;
            list.push_back(s);
        }
    }
    input.close();
}
