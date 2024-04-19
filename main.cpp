#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   /* Type your code here */
   ItemToPurchase item1, item2;
   string name;
   int quantity;
   int price;
   int totalCost;

   cout << "Item 1" << endl;
   cout << "Enter the item name: " << endl;
   getline(cin, name);

   cout << "Enter the item price: " << endl;
   cin >> price;

   cout << "Enter the item quantity: " << endl;
   cin >> quantity;

   item1.SetName(name);
   item1.SetPrice(price);
   item1.SetQuantity(quantity);
   cin.ignore();

   cout << "Item 2" << endl;
   cout << "Enter the item name: " << endl;
   getline(cin, name);

   cout << "Enter the item price: " << endl;
   cin >> price;

   cout << "Enter the item quantity: " << endl;
   cin >> quantity; 

   item2.SetName(name);
   item2.SetPrice(price);
   item2.SetQuantity(quantity);

   ItemToPurchase.PrintInfo();
   return 0;
}
