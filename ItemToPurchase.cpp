#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase(){}

void ItemToPurchase::SetName(string name){
  name = itemName;
}

string ItemToPurchase::GetName(){
  return itemName;
}

void ItemToPurchase::SetPrice(int price){
  price = itemPrice;
}

int ItemToPurchase::GetPrice(){
  return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity){
  quantity = itemQuantity;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

void ItemToPurchase::PrintInfo(){
  cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}
