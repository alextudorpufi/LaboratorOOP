#include <iostream>
#include "tree.h"

using namespace std;
float operator"" _Kelvin(unsigned long long kelvin) {
	return kelvin - 273.15;
}
float operator"" _Fahrenheit(unsigned long long fahrenheit) {
	return (fahrenheit - 32.0) * 5.0 / 9.0;
}
int main()
{	

	float a = 300_Kelvin;
	float b = 120_Fahrenheit;

	cout << "300 Kelvin in Celsius: " << a << std::endl;
	cout << "120 Fahrenheit in Celsius: " << b << std::endl;

	Nod<int>* first = new Nod<int> (10) ;
	Nod<int>* third = new Nod<int>(30);
	Nod<int>* fifth = new Nod<int>(50);
	Nod<int>* fourth = new Nod<int>(40, third, fifth);
	Nod<int>* second = new Nod<int>(20, first, fourth);
	Nod<int>* seventh = new Nod<int>(70);
	Nod<int>* sixth = new Nod<int>(60, second, seventh);

	binaryTree<int> tree = binaryTree<int>(sixth);

	Nod<int>* new_node = new Nod<int>(15);
	tree.add_node(new_node, first);

	new_node = new Nod<int>(45);
	tree.add_node(new_node, fourth);

	return 0;
}