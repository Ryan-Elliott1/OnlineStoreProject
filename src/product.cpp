#include "product.h"

Product::Product(string id, double price, int numStock) {
    this->id = id;
    this->price = price;
    this->numStock = numStock;
}

void Product::setPrice(double price) {
    this->price = price;
}

void Product::setNumStock(int numStock) {
    this->numStock = numStock;
}

string Product::getId() {
    return id;
}

double Product::getPrice() {
    return price;
}

int Product::getNumStock() {
    return numStock;
}

void Product::memberDiscount() {
    price = price * 0.8;
}
