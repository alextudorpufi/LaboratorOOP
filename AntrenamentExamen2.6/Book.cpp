#include "Book.h"
Book::Book(int price, int quantity, string title, string author)
{
	Price = price;
	Quantity = quantity;
	Title = title;
	Author = author;
}
string Book::GetType()
{
	return "Book";
}
int Book::GetQuantity()
{
	return Quantity;
}
int Book::GetPrice()
{
	return Price;
}
void Book::Print()
{
	cout << "Book (Title=" << Title << ", Author=" << Author << ") Price=" << GetPrice() << " Quantity=" << GetQuantity()<<endl;
}