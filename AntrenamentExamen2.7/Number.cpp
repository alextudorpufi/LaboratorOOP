#include "Number.h"
Number::Number(int value)
{
	number = value;
	count = 0;
	printers.reserve(100);
							// Printer* printers = new Printer[100];
}
Number::operator int()
{
	return static_cast<int>(number); // (same with)  return number;
}
int Number::operator+(Number* n)
{
	return this->number + n->number;
}
int Number::operator-(Number* n)
{
	return this->number - n->number;
}
int Number::operator*(Number* n)
{
	return this->number * n->number;
}
int Number::operator/(Number* n)
{
	return this->number / n->number;
}
Number& Number::operator+=(Printer* prnt)
{
	printers.push_back(prnt);
	return *this;
}
void Number::Print()
{
	for (int i = 0; i < printers.size(); i++)
		cout << "Format: " << printers[i]->GetFormatName() << "  Value: " << printers[i]->FormatNumber(this->number) << endl;
}