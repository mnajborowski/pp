#include <iostream>
#include "student.h"

void display(const Student &s) {
    std::cout<<std::endl<<s.firstName<<" "<<s.lastName<<", data urodzenia: "<<s.birthday<<", nr indeksu: "<<s.index;
    std::cout<<std::endl<<std::endl;
}