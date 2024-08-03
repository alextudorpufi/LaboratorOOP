#pragma once
#include "Article.h"
class VideoGame:public Article
{

private:
	int Price;
	int Quantity;
	string Platform;
	string Name;
public:
	VideoGame(int price, int quantity, string platform, string name);
	string GetType();
	int GetQuantity();
	int GetPrice();
	void Print();


};

