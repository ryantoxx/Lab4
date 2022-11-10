#include "../Header Files/Customer.h"

void Customer::setPreference(string preference) {
    Preference = preference;
}
string Customer::getPreference() {
    return Preference;
}

void Customer::setP_number(string pnumber) {
    P_number = pnumber;
}
string Customer::getP_number() {
    return P_number;
}

void Customer::setBalance(double balance) {
    Balance = balance;
}
double Customer::getBalance() {
    return Balance;
}

void Customer::Introduce() {
    std::cout << "Hi. My name is " << getName() << " " << getSurname();
    std::cout << ", I'm " << getAge() << " years old ";
    std::cout << "and I like " << getPreference() << " food." << std::endl;
}

void Customer::checkBalance() {
    std::cout << "-> " << getName() << " has checked the balance.";
    std::cout << "Your account has " << Balance << " $." << std::endl;
}

void Customer::denyAlcohol() {
    std::cout << "-> " <<getName() << " does not drink alcohol!" << std::endl;
}

void Customer::makeOrder() {
    std::cout << "-> " << getName() << " want to order pizza and juice." << std::endl;
}
