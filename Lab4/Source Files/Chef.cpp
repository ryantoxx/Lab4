#include "../Header Files/Chef.h"

void Chef::setSpecificType(string speficitype) {
    SpecificType = speficitype;
}
string Chef::getSpecificType() {
    return SpecificType;
}

void Chef::Introduce() {
    std::cout << "Our chef, " << getName() << " is preparing your meal." <<std::endl;
    std::cout << "He's a master at cooking " <<getSpecificType() <<  " food."<<std::endl;
}

int Chef::delayMeal(int RandNum) {
    if (RandNum <= 60) {
        std::cout << "-> Sorry, our kitchen is overloaded.";
        std::cout << " You will have to wait a while." << std::endl;
        return 0;
    }
    else return 1;
}

int Chef::missingIngredients(int RandNum) {
    if (RandNum <= 50) {
        std::cout << "-> We apologize, we don't currently dispose of certain ingredients.";
        std::cout << " Would you like to order something else?" << std::endl;
        return 0;
    }
    else return 1;
}

void Chef::PrepareMeal() {
    std::cout << "-> Your meal is prepared, enjoy it!" << std::endl;
}
