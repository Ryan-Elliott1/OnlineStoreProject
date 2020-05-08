#ifndef ORDER_H
#define ORDER_H
#include <vector>
#include "product.h"
using namespace std;

class Order {
private:
    vector<Product> userOrder;
public:
    Order(vector<Product> userOrder);
    double viewOrder();
};

#endif // ORDER_H
