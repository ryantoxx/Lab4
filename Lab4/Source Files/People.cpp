#include "../Header Files/People.h"

void People::setName(string name) {
    Name = name;
}
string People::getName() {
    return Name;
}

void People::setSurname(string surname) {
    Surname = surname;
}
string People::getSurname() {
    return Surname;
}

void People::setAge(int age) {
    Age = age;
}
int People::getAge() {
    return Age;
}
