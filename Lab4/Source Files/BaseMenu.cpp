
#include "../Header Files/BaseMenu.h"
BaseMenu::BaseMenu(string pizza, int p_price, string burger, int burgerprice, string steak, int sprice,
                   string salad, int vprice, string soup, int bprice, string coffee, int cprice,
                   string juice, int jprice, string soda, int sodaprice, string water, int wprice){
    Pizza = pizza; Pprice = p_price;
    Burger = burger; Burgerprice = burgerprice;
    Steak = steak; Sprice = sprice;
    Salad = salad; Vprice = vprice;
    Soup = soup; Bprice = bprice;
    Coffee = coffee; Cprice = cprice;
    Juice = juice; Jprice = jprice;
    Soda = soda; Sodaprice = sodaprice;
    Water = water; Wprice = wprice;
}

void BaseMenu::Introduce() {
    std::cout << "Here is our " << getType1() << " menu." << std::endl;
    std::cout << Pizza <<": "<< Pprice <<"$."<< std::endl;
    std::cout << Burger <<": "<< Burgerprice <<"$."<< std::endl;
    std::cout << Steak <<": "<< Sprice <<"$."<< std::endl;
    std::cout << Salad <<": "<< Vprice <<"$."<< std::endl;
    std::cout << Soup <<": "<< Bprice <<"$."<< std::endl;
    std::cout << Coffee <<": " << Cprice <<"$."<< std::endl;
    std::cout << Juice <<": "<< Jprice <<"$."<< std::endl;
    std::cout << Soda <<": "<< Sodaprice <<"$."<< std::endl;
    std::cout << Water <<": "<< Wprice <<"$."<< std::endl;
}