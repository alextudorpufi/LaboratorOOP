#include "Hexazecimal.h"
string Hexazecimal::GetFormatName()
{
	return "Hexazecimal";
}
string Hexazecimal::FormatNumber(int number)
{
    if (number == 0) return "0";
    string hex;
    string hexDigits = "0123456789abcdef";
    while (number > 0) {
        int val = number % 16;
        hex = hexDigits[val] + hex;
        number = number / 16;
    }

    return hex;
}