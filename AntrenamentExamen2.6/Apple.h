#pragma once
#include "Article.h"
class Apple : public Article
{
private:
	int Price;
	int Quantity;
	string Country;
public:
	Apple(int price, int quantity, string country);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

