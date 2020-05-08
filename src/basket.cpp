#include "basket.h"

Basket::Basket(vector<Product> vect)
{
    this->userBasket = vect;
}

void Basket::viewBasket() {
    for(int i = 0; i < userBasket.size(); i++){
        Product temp = Product();
        temp = userBasket[i];
        printf("%d", temp.getPrice());
    }
}
