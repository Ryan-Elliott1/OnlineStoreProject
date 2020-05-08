#include <string>
using namespace std;
#ifndef PRODUCT_H
#define PRODUCT_H


class Product {
private:
    string id;
    double price;
public:
    int numStock;
    Product();
    Product(string id, double price, int stock);
    void setPrice(double p);
    void setNumStock(int n);
    string getId();
    double getPrice();
    int getNumStock();
    void memberDiscount();
};

#endif
