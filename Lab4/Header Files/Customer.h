#ifndef LAB4_CUSTOMER_H
#define LAB4_CUSTOMER_H

#include "People.h"
#include <iostream>
using std::string;

class Customer : public People {
private:
    string Preference;
    string P_number;
    double Balance;
public:
    void setPreference(string preference);
    string getPreference();

    void setP_number(string pnumber);
    string getP_number();

    void setBalance(double balance);
    double getBalance();

    void Introduce();

    void checkBalance();

    void denyAlcohol();

    void makeOrder();
};


#endif //LAB4_CUSTOMER_H
