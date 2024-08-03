#pragma once
#include "Article.h"
class Book:public Article
{
private:
	int Price;
	int Quantity;
	string Title;
	string Author;
public:
	Book(int price, int quantity, string title, string author);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();
};

