#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "product.h"
#include "order.h"
#include "customer.h"
#include "basket.h"
using namespace std;

int main()
{
    string input;
    char selection, selectionA, selectionB, selectionC;
    bool condition = true, conditionA = true, conditionB = true, conditionC = true;
    vector<Product> basket;
    vector<Product> tempBasket;
    vector<Order> orders;
    Customer user = Customer();
    double price = 0;

    Product cannedBeans = Product("Canned Beans", .99, 4);
    Product toiletPaper = Product("Toilet Paper", 3.98, 3);
    Product milk = Product("Milk", 1.99, 6);


    cout << "Enter your first name: \n";
    cin >> input;
    user.setFName(input);
    cout << "Enter your last name: \n";
    cin >> input;
    user.setLName(input);
    cout << "Enter your address (No spaces): \n";
    cin >> input;
    user.setAddress(input);
    cout << "Enter your phone number (No spaces): \n";
    cin >> input;
    user.setPhoneNumber(input);

    while (condition)
        {

            cout << "\nWelcome " + user.getFName() + "\n";
            cout << "A. Edit your basket \n";
            cout << "B. Checkout \n";
            cout << "C. Edit User Information \n";
            cout << "D. Exit \n";
            cin >> selection;

            switch (selection)
            {
            case'A':
            case'a': conditionA = true;
                     while (conditionA) {
                         cout << "\nA. Add 1 unit of Canned Beans to your basket \n";
                         cout << "B. Add 1 unit of Toilet Paper to your basket \n";
                         cout << "C. Add 1 unit of Milk to your basket \n";
                         cout << "D. View your basket \n";
                         cout << "E. Reset your basket \n";
                         cout << "F. Exit \n";
                         cin >> selectionA;
                         switch (selectionA)
                         {
                         case'A':
                         case'a': try {
                                if (cannedBeans.numStock == 0) {
                                 cout << "Sorry none left in stock \n";
                                 break;
                             }
                         } catch (const char*) {
                             cout << "error adding items" << endl;
                         }
                             cannedBeans.numStock -= 1;
                             basket.push_back(cannedBeans);
                             break;
                         case'B':
                         case'b': try {
                                if (toiletPaper.numStock == 0) {
                                 cout << "Sorry none left in stock \n";
                                 break;
                             }
                         } catch (const char*) {
                             cout << "error adding items" << endl;
                         }
                             toiletPaper.numStock -= 1;
                             basket.push_back(toiletPaper);
                             break;
                         case'C':
                         case'c': try {
                                if (milk.numStock == 0) {
                                 cout << "Sorry none left in stock \n";
                                 break;
                             }
                         } catch (const char*) {
                             cout << "error adding items" << endl;
                         }
                             milk.numStock -= 1;
                             basket.push_back(milk);
                             break;
                         case'D':
                         case'd': cout << "Basket contents: ";
                                  for(__SIZE_TYPE__ i=0; i<basket.size(); i++) {
                                        Product temp = basket[i];
                                        cout << temp.getId() << ", ";
                                    }
                             break;
                         case'E':
                         case'e':  basket.clear();
                                   cannedBeans.setNumStock(4);
                                   toiletPaper.setNumStock(3);
                                   milk.setNumStock(6);
                             break;
                         case'F':
                         case'f': conditionA=false;
                             break;
                         default: cout << "Invalid selection \n";
                         }
                    }
                break;
            case'B':
            case'b': conditionB = true;
                     while (conditionB) {
                         cout << "\nA. Checkout with your current basket? \n";
                         cout << "B. Exit \n";
                         cin >> selectionB;
                         switch (selectionB)
                         {
                         case'A':
                         case'a': cout << "\nOrder Submitted \n";
                                  orders.push_back(basket);
                                  cout << "Basket contents: ";
                                  for(__SIZE_TYPE__ i=0; i<basket.size(); i++) {
                                        Product temp = basket[i];
                                        price += temp.getPrice();
                                        cout << temp.getId() << ", ";
                                    }
                                  cout << "\nTotal price: $" << price;
                                  price = 0;
                                  cout << "\nBASKET RESET AND PRODUCTS STOCKED";
                                  basket.clear();
                                  cannedBeans.setNumStock(4);
                                  toiletPaper.setNumStock(3);
                                  milk.setNumStock(6);
                             break;
                         case'B':
                         case'b': conditionB = false;
                             break;
                         default: cout << "Invalid selection \n";
                         }
                     }
                break;
            case'C':
            case'c': conditionC = true;
                     while (conditionC) {
                         cout << "\nA. Edit First Name \n";
                         cout << "B. Edit Last Name \n";
                         cout << "C. Edit Address \n";
                         cout << "D. Edit Phone Number \n";
                         cout << "E. Exit \n";
                         cin >> selectionC;
                         switch (selectionC)
                         {
                         case'A':
                         case'a': cout << "Enter your first name: \n";
                                  cin >> input;
                                  user.setFName(input);
                             break;
                         case'B':
                         case'b': cout << "Enter your last name: \n";
                                  cin >> input;
                                  user.setLName(input);
                             break;
                         case'C':
                         case'c': cout << "Enter your address: \n";
                                  cin >> input;
                                  user.setAddress(input);
                             break;
                         case'D':
                         case'd':  cout << "Enter your phone number: \n";
                                   cin >> input;
                                   user.setPhoneNumber(input);
                             break;
                         case'E':
                         case'e': conditionC=false;
                             break;
                         default: cout << "Invalid selection \n";
                         }
                     }
                break;
            case'D':
            case'd': condition=false;
                break;
            default: cout << "Invalid selection \n";
            }
        }
}
