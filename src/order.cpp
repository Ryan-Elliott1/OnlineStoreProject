#include "order.h"

Order::Order(vector<Product> vect)
{
    this->userOrder = vect;
}

double Order::viewOrder() {
    double price = 0;
    for(__SIZE_TYPE__ i = 0; i < userOrder.size(); i++){
        Product temp = Product();
        temp = userOrder[i];
        price += temp.getPrice();
    }
    return price;
}
