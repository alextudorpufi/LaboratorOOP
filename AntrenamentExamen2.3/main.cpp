// AntrenamentExamen2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Parcare.h"
#include "Toyota.h"
#include "Dacia.h"
#include "FerrariRosu.h"
int main() 
{
	Parcare p;
	p.Create(4);
	p.Add(new Dacia("rosu"));
	p.Add(new Toyota("verde"));
	cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
	p.Add(new FerrariRosu());
	p.Add(new Toyota("albastru"));
	p.Add(new Toyota("rosu")); // returns false - s-a atins capacitatea maxima
	cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
	p.ShowAll();
	p.ShowByColor("rosu");
	p.RemoveByName("Toyota");
	p.Add(new Dacia("gri"));
	p.ShowAll();
	cout << "Masini in parcare:" << p.GetCount() << boolalpha << " , Parcare plina: " << p.IsFull() << endl;
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
