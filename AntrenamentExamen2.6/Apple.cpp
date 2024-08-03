#include "Apple.h"
Apple::Apple(int price, int quantity, string country)
{
	Price = price;
	Quantity = quantity;
	Country = country;
}
string Apple::GetType()
{
	return "Apple";
}
int Apple::GetQuantity()
{
	return Quantity;
}
int Apple::GetPrice()
{
	return Price;
}
void Apple::Print()
{
	cout << "Apple (from = " << Country << ") Price = " << GetPrice() << " Quantity = " << GetQuantity()<<endl;
}