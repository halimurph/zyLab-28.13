#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
ItemToPurchase::ItemToPurchase(){}

void ItemToPurchase::SetName(string itemName){
  string name = itemName;
}

string ItemToPurchase::GetName(){
  return name;
}

void ItemToPurchase::SetPrice(int itemPrice){
  int price = itemPrice;
}

int ItemToPurchase::GetPrice(){
  return price;
}

void ItemToPurchase::SetQuantity(int itemQuantity){
  int quantity = itemQuantity;
}

int ItemToPurchase::GetQuantity(){
  return quantity;
}
