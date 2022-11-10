#include "../Header Files/Menu.h"

void Menu::setType1(string type1) {
  Type1 = type1;
}
string Menu::getType1() {
    return Type1;
}

void Menu::setType2(string type2) {
    Type2 = type2;
}
string Menu::getType2() {
    return  Type2;
}
void Menu::setQuantity(int quantity) {
    Quantity = quantity;
}
int Menu::getQuantity() {
    return Quantity;
}

void Menu::Introduce() {
    std::cout << "We have " << getQuantity() << " types of menu ";
    std::cout << "the " << getType1() << " and " << getType2() << " one, you may choose whatever you want to."<< std::endl;
}