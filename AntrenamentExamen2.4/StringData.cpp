#include "StringData.h"
StringData::StringData(string name, string value): Entry(name)
{
	this->value = value;
}
void StringData::Add(string toAdd)
{
	this->value += toAdd;
}
bool StringData::Substract(int toSubstract)
{
	if (value.size() < toSubstract)
	{
		cout << "StringData: len(" << value << ") < " << toSubstract;
		cout << endl;
		return false;
	}
	else
	{
		this->value.erase(value.size() - toSubstract);
		return true;
	}
}
void StringData::Print()
{
	cout << value;
}