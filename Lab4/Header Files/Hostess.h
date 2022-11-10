#ifndef LAB4_HOSTESS_H
#define LAB4_HOSTESS_H

#include "Staff.h"
#include <iostream>

using std::string;

class Hostess : public Staff {
private:
    int tableNr;
public:
    void setTableNr(int tablenr);
    int getTableNr();

    void Introduce();

    void checkReservation();

};



#endif //LAB4_HOSTESS_H
