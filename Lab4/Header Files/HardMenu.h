#ifndef LAB4_HARDMENU_H
#define LAB4_HARDMENU_H

#include "Menu.h"
#include <iostream>

using std::string;
class HardMenu : public Menu {
private:
    string Whiskey; int Wprice;
    string Vodca; int Vprice;
    string Wine; int Wineprice;
    string Liquer; int Lprice;
    string Tequila; int Tprice;
public:
    HardMenu(string whiskey, int wprice, string vodca, int vprice, string wine,
    int wineprice, string liquer, int lprice, string tequila, int tprice);

    void Introduce();
};


#endif //LAB4_HARDMENU_H
