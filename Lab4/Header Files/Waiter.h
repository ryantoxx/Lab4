#ifndef LAB4_WAITER_H
#define LAB4_WAITER_H

#include "Staff.h"
#include <iostream>

using std::string;

class Waiter : public Staff {
private:
    double Experience;
public:
    void  setExperience(double experience);
    double getExperience();

    void Introduce();

    int waiterLate(int RandNum);

    int waiterForget(int RandNum);
};


#endif //LAB4_WAITER_H
