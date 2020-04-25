#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "product.h"
using namespace std;

void addProduct() {

}

int main()
{
    char selection;
    bool condition = true;
    vector<Product> basket(5);

    while (condition)
        {
            cout << "\nA. Add to your basket \n";
            cout << "B. Checkout \n";
            cout << "C. \n";
            cout << "D. Exit \n";
            cin >> selection;

            switch (selection)
            {
            case'A':
            case'a': cout << "A";
                break;
            case'B':
            case'b': cout << "B";
                break;
            case'C':
            case'c': cout << "C";
                break;
            case'D':
            case'd': cout << "D";
                break;
            default: cout << "Invalid selection \n";
            }
        }
}
