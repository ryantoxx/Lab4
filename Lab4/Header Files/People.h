#ifndef LAB4_PEOPLE_H
#define LAB4_PEOPLE_H

#include "Restaurant.h"
#include <iostream>

using std::string;

class People : public Restaurant{
private:
    string Name;
    string Surname;
    int Age;
public:
    void setName(string name);
    string getName();

    void setSurname(string surname);
    string getSurname();

    void setAge(int age);
    int getAge();
};

#endif //LAB4_PEOPLE_H
