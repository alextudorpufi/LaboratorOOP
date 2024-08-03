#pragma once
#include <iostream>
#include "Carte.h"
using namespace std;

class Biblioteca
{
private:
	int count;
	Carte* carti[100];

public:
	Biblioteca();
	~Biblioteca();

	Biblioteca& operator+=(Carte* c);
	operator int();
	
	void PrintFilter(bool (*_function)(Carte* c));
	

	Carte* * begin();
	Carte* * end();

};

