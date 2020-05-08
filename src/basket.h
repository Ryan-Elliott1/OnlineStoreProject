#ifndef BASKET_H
#define BASKET_H
#include <vector>
#include "product.h"
using namespace std;

class Basket {
private:
    vector<Product> userBasket;
public:
    Basket(vector<Product> userBasket);
    void viewBasket();


};

#endif // BASKET_H
