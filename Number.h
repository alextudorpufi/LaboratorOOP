#pragma once

class Number
{
public:
	
	int base;
	char value[256];

	Number(const char* _value, int _base); // where base is between	2 and 16
	Number(const char* _value);
	~Number();	 

	// add operators and copy/move constructor
	friend Number operator+(Number value1, Number value2);
	friend Number operator-(Number value1, Number value2);
	friend Number operator!(Number value1);
	char operator[](int index)	{return value[index];}
	bool operator>=(Number& value1);
	bool operator>(Number& value1);
	bool operator<=(Number& value1);
	bool operator<(Number& value1);
	bool operator==(Number& value1);

	//

	void SwitchBase(int newBase);
	void Print();	
	int GetDigitsCount(); // returns the number of digits for the	current number
	int GetBase(); // returns the current base
};