#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase {
public:
ItemToPurchase();
void SetPrice(string name);
int GetPrice();

private:
string itemName = "none";
int itemPrice = 0;
int itemQuantity = 0;
};

#endif
