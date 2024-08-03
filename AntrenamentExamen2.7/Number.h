#pragma once
#include "Printer.h"
#include "Hexazecimal.h"
#include "Decimal.h"

class Number
{
private:
	int number;
	int count;
	vector<Printer*> printers;

public:
	Number(int value);
	operator int();
	int operator+(Number* n);
	int operator-(Number* n);
	int operator*(Number* n);
	int operator/(Number* n);
	Number& operator+=(Printer* prnt);
	void Print();


};

