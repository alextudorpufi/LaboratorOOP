#include "Dacia.h"

Dacia::Dacia(string color)
{
	this->color = color;
}
string Dacia::GetColor()
{
	return color;
}
string Dacia::GetName()
{
	string temp = "Dacia";
	return temp;
}