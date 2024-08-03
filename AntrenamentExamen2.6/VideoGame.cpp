#include "VideoGame.h"
VideoGame::VideoGame(int price, int quantity, string platform, string name)
{
	Price = price;
	Quantity = quantity;
	Platform = platform;
	Name = name;
}
string VideoGame::GetType()
{
	return "VideoGame";
}
int VideoGame::GetQuantity()
{
	return Quantity;
}
int VideoGame::GetPrice()
{
	return Price;
}
void VideoGame::Print()
{
	cout << "VideoGame (Platform = " << Platform << ", Name=" << Name << ") Price = " << GetPrice() << " Quantity = " << GetQuantity()<<endl;
}
