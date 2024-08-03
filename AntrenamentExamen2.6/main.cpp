#include <iostream>
#include "Shop.h"
#include "Book.h"
#include "Apple.h"
#include "VideoGame.h"

int main()
{
	Shop s;
	s.Add(new Book(100, 3, "Dune", "Frank Herbert")).Add(new Apple(20, 100, "Romania"));
	s.Add(new VideoGame(10, 2, "Nintendo", "Super Mario"));
	s.Add(new Apple(12, 15, "Germany"));
	std::cout << "Total price : " << s.GetTotalPrice() <<std:: endl;
	std::cout << "Apple quantity: " << s.GetQuantity("Apple") << std::endl;	
	std::cout << "Items" << std::endl;
	s.List();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
