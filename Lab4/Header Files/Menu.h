#ifndef LAB4_MENU_H
#define LAB4_MENU_H

#include "Restaurant.h"
#include <iostream>

using std::string;

class Menu : public Restaurant{
private:
    string Type1;
    string Type2;
    int Quantity;
public:
    void setType1(string type1);
    string getType1();

    void setType2(string type2);
    string getType2();

    void setQuantity(int quantity);
    int getQuantity();

    void Introduce();
};


#endif //LAB4_MENU_H
