#ifndef LAB4_BASEMENU_H
#define LAB4_BASEMENU_H

#include "Menu.h"
#include <iostream>

using std::string;

class BaseMenu : public Menu {
private:
    string Pizza; int Pprice;
    string Burger; int Burgerprice;
    string Steak; int Sprice;
    string Salad; int Vprice;
    string Soup; int Bprice;
    string Coffee; int Cprice;
    string Juice; int Jprice;
    string Soda; int Sodaprice;
    string Water; int Wprice;
public:
    BaseMenu(string pizza,int p_price,string burger,int burgerprice,string steak,int sprice,string salad,int vprice,string soup,int bprice,
             string coffee,int cprice,string juice,int jprice,string soda,int sodaprice,string water,int wprice);
    void Introduce();
};


#endif //LAB4_BASEMENU_H
