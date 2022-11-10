#include "Header Files/Restaurant.h"
#include "Header Files/Menu.h"
#include "Header Files/People.h"
#include "Header Files/Customer.h"
#include "Header Files/Staff.h"
#include "Header Files/Hostess.h"
#include "Header Files/Waiter.h"
#include "Header Files/Sommelier.h"
#include "Header Files/Chef.h"
#include "Header Files/BaseMenu.h"
#include "Header Files/HardMenu.h"
#include <iostream>

using std::string;

int randNumber(int min, int max) {
    int randomNumber;
    randomNumber = (rand() % (max - min + 1)) + min;
    return randomNumber;
}

int main() {
    Restaurant rest;
    rest.setTitle("Fancy Restaurant");
    rest.setFoundation("The restaurant was built on 1st November of 1995");
    rest.Introduce();

    Customer customer;
    customer.setName("Jim");
    customer.setSurname("Blake");
    customer.setAge(32);
    customer.setPreference("Italian");
    customer.Introduce();
    customer.setBalance(1450.75);
    customer.checkBalance();

    Hostess hostess;
    hostess.setName("Jane");
    hostess.setAge(24);
    hostess.setP_number("78823221");
    hostess.setTableNr(22);
    hostess.Introduce();
    hostess.checkReservation();


    Waiter waiter;
    waiter.setName("John");
    waiter.setAge(28);
    waiter.setP_number("69906927");
    waiter.setExperience(4);
    waiter.Introduce();
    waiter.waiterLate(randNumber(1,100));
    waiter.waiterForget(randNumber(9, 100));

    Menu menu;
    menu.setType1("common");
    menu.setType2("hard");
    menu.setQuantity(2);
    menu.Introduce();

    BaseMenu basemenu = BaseMenu("Pepperoni", 12, "BigBurger", 10, "Beef Steak", 15, "Vinegred", 5, "Borsch", 8, "Latte", 5, "Apple Juice", 3, "Cola", 3, "Water", 1);
    basemenu.Introduce();

    std::cout << "" << std::endl;

    Sommelier sommelier;
    sommelier.setName("Bruce");
    sommelier.setAge(46);
    sommelier.setP_number("78823443");
    sommelier.setQualification("high-level");
    sommelier.Introduce();
    sommelier.OfferDiscount(0);

    HardMenu hardmenu = HardMenu("Irish Whiskey", 100, "Spicusor", 20, "Gallo Vine", 120, "McDowells", 150, "Blanco Tequila", 80);
    hardmenu.Introduce();

    customer.denyAlcohol();
    std::cout << "" << std::endl;

    customer.makeOrder();

    Chef chef;
    chef.setName("Oliver");
    chef.setAge(52);
    chef.setP_number("79124534");
    chef.setSpecificType("Italian");
    chef.Introduce();
    chef.delayMeal(randNumber(1, 70));
    chef.missingIngredients(randNumber(45, 100));
    chef.PrepareMeal();

}


