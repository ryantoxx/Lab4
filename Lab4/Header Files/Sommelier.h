#ifndef LAB4_SOMMELIER_H
#define LAB4_SOMMELIER_H

#include "Staff.h"
#include <iostream>

using std::string;

class Sommelier : public Staff {
private:
    string Qualification;
public:
    void setQualification(string qualification);
    string getQualification();

    void Introduce();

    int OfferDiscount(int nr);
};


#endif //LAB4_SOMMELIER_H
