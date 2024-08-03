#pragma once
#include "Article.h"
class Shop
{
private:
	vector<Article*> items;

public:
	Shop& Add(Article* item);
	int GetTotalPrice();
	int GetQuantity(string type);
	void List();
};

