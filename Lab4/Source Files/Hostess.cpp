#include "../Header Files/Hostess.h"
void Hostess::setTableNr(int tablenr) {
    tableNr = tablenr;
}
int Hostess::getTableNr() {
    return tableNr;
}

void Hostess::Introduce() {
    std::cout << "Hi. I'm " << getName() << " welcome here!" << std::endl;
}

void Hostess::checkReservation() {
    std::cout << "-> Checking list... " << std::endl;
    std::cout << "Table number " << getTableNr() << " is not booked, you can sit there." << std::endl;
}