#include "customer.h"

Customer::Customer() {

}

Customer::Customer(string f, string l, string a, string p) {
    this->fName = f;
    this->lName = l;
    this->address = a;
    this->phoneNumber = p;
}

void Customer::setFName(string f) {
    this->fName = f;
}

void Customer::setLName(string l) {
    this->lName = l;
}

void Customer::setAddress(string a) {
    this->address = a;
}

void Customer::setPhoneNumber(string p) {
    this->phoneNumber = p;
}

string Customer::getFName() {
    return fName;
}

string Customer::getLName() {
    return lName;
}

string Customer::getAddress() {
    return address;
}

string Customer::getPhoneNumber() {
    return phoneNumber;
}
