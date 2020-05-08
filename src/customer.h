#ifndef CUSTOMER_H
#define CUSTOMER_H
using namespace std;
#include <string>


class Customer {
private:
    string fName;
    string lName;
    string address;
    string phoneNumber;
public:
    Customer();
    Customer(string f, string l, string a, string p);
    void setFName(string f);
    void setLName(string l);
    void setAddress(string a);
    void setPhoneNumber(string p);
    string getFName();
    string getLName();
    string getAddress();
    string getPhoneNumber();
};

#endif // CUSTOMER_H
