#include "Decimal.h"
string Decimal::GetFormatName()
{
	return "Decimal";
}
string Decimal::FormatNumber(int number)
{
	string temp;
	int i = 0;
	if (number == 0)
		return "0";
	string hexDigits = "0123456789";
	while (number)
	{
		int val = number % 10;
		temp = hexDigits[val] + temp;
		number = number / 10;
	}
	
	return temp;
}