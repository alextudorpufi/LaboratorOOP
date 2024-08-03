	#include "IntegerData.h"
	int CharToNr(string x)
	{
		int number = 0;
		for (int i = 0; i < x.size(); i++)
		{
			number = number * 10 + (x[i]-'0');
		}
		return number;
	}
	IntegerData::IntegerData(string name, string value) : Entry(name)
	{
		this->value = CharToNr(value);
	}
	void IntegerData::Add(string toAdd)
	{
		this->value += CharToNr(toAdd);
	}
	bool IntegerData::Substract(int toSubstract)
	{
		/*if (value < toSubstract)
		{
			cout << "IntegerData: value(" << value << ") < " << toSubstract;
			return false;
		}*/
		this->value -= toSubstract;
		return true;
	}
	void IntegerData::Print()
	{
		cout << value;
	}