#include "Shop.h"
Shop& Shop::Add(Article* item)
{
	items.push_back(item);
	return *this;
}
int Shop::GetTotalPrice()
{
	int sum = 0;
	for (int i = 0; i < items.size(); i++)
		sum = sum + items[i]->GetPrice() * items[i]->GetQuantity();
	return sum;
}
int Shop::GetQuantity(string type)
{
	int sum = 0;
	for (int i = 0; i < items.size(); i++)
		if (items[i]->GetType() == type)
			sum = sum + items[i]->GetQuantity();
	return sum;
}
void Shop::List()
{
	for (int i = 0; i < items.size(); i++)
		items[i]->Print();
}