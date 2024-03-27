#include "Number.h"
#include <iostream>
#include <cstring>
using namespace std;


Number::Number(const char* _value, int _base)
{
	strcpy_s(value, _value);
	base = _base;
}
Number::Number(const char* _value)
{
	strcpy_s(value, _value);
	base = 10;
}
Number::~Number()
{
	delete[] value;
}
int Number::GetBase()
{
	return base;
}
int Number::GetDigitsCount()
{
	int i = 0;
	return strlen(value);
}
void Number::Print()
{
	cout << value;
}
void Number::SwitchBase(int newBase)
{

}
Number operator +(Number value1, Number value2)
{
	char result[256];
	int lenght, rest;
	if (value1.base > value2.base)
		value2.SwitchBase(value1.base);
	else
		value1.SwitchBase(value2.base);
	int _base = value1.base;
	if (strlen(value1.value) > strlen(value2.value))
		lenght = strlen(value1.value);
	else
		lenght = strlen(value1.value);
	for (int i = lenght - 1; i > 0; i--)
	{
		if ((value1.value[i] + value2.value[i]) >= _base)
			rest = 1;
		result[i] = (value1.value[i] + value2.value[i]) % _base;
		if (rest == 1)
			result[i - 1]++;
		rest = 0;
	}
	if ((value1.value[0] + value2.value[0]) >= _base)
		rest = 1;
	result[0] = (value1.value[0] + value2.value[0]) % _base;
	if (rest == 1)
		for (int i = lenght; i < 0; i--)
			result[i] = result[i - 1];
	result[0] = rest;
	return Number(result, _base);
}
bool operator>(Number& value1)
{
	int _base_;
	_base_ = value1.base;
	value1.SwitchBase(value2.SwitchBase);
	if (strcmp(value1.value, value2.value) > 0)
	{
		value1.SwitchBase(_base_);
		return true;
	}
	else
	{
		value1.SwitchBase(_base_);
		return false;
	}
}