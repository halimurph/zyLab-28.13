#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase(){}

void ItemToPurchase::SetName(string name){
  string name = itemName;
}

string ItemToPurchase::GetName(){
  return name;
}

void ItemToPurchase::SetPrice(int price){
  int price = itemPrice;
}

int ItemToPurchase::GetPrice(){
  return price;
}

void ItemToPurchase::SetQuantity(int quantity){
  int quantity = itemQuantity;
}

int ItemToPurchase::GetQuantity(){
  return quantity;
}

void ItemToPurchase::PrintInfo(){
  cout << "TOTAL COST" << endl;
   totalCost = (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice());
   cout << item1.GetName() << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << (item1.GetQuantity() * item1.GetPrice()) << endl; 
   cout << item2.GetName() << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << (item2.GetQuantity() * item2.GetPrice()) << endl; 
   cout << "Total: $" << totalCost << endl;

}
