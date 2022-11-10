#include "../Header Files/HardMenu.h"

HardMenu::HardMenu(string whiskey, int wprice, string vodca, int vprice, string wine, int wineprice,
                   string liquer, int lprice, string tequila, int tprice) {
    Whiskey = whiskey; Wprice = wprice;
    Vodca = vodca; Vprice = vprice;
    Wine = wine; Wineprice = wineprice;
    Liquer = liquer; Lprice = lprice;
    Tequila = tequila; Tprice = tprice;
}

void HardMenu::Introduce() {
    std::cout << Whiskey << ": " << Wprice <<"$." << std::endl;
    std::cout << Vodca << ": " << Vprice <<"$." << std::endl;
    std::cout << Wine << ": " << Wineprice <<"$." << std::endl;
    std::cout << Liquer << ": " << Lprice <<"$." << std::endl;
    std::cout << Tequila << ": " << Tprice <<"$." << std::endl;
}
