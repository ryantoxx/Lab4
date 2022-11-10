#include "../Header Files/Sommelier.h"

void Sommelier::setQualification(string qualification) {
    Qualification = qualification;
}
string Sommelier::getQualification() {
    return Qualification;
}

void Sommelier::Introduce() {
    std::cout << "Hey.I'm called " << getName() << " and I'm " << getAge() << " years old. ";
    std::cout << "I have a " << getQualification() << " qualification, so I'll help you choose a drink."<< std::endl;
    std::cout << "Check the menu first:" << std::endl;
}

int Sommelier::OfferDiscount(int nr) {
    if (nr == 2 )
    {
        std::cout << "Nice, you just earned a 5% discount today." << std::endl;
        return 1;
    }
    else return 0;
}