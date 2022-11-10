#ifndef LAB4_STAFF_H
#define LAB4_STAFF_H

#include "People.h"
#include <iostream>

using std::string;

class Staff : public People{
private:
    string P_number;
    string Email;
    string Gender;
public:
    void setP_number(string pnumber);
    string getP_number();

    void setEmail(string email);
    string getEmail();

    void setGender(string gender);
    string getGender();

};

#endif //LAB4_STAFF_H
