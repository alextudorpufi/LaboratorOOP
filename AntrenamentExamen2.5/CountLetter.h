#pragma once
#include "Procesor.h"
class CountLetter :public Procesor
{
private:
	string name;
	bool (*function)(char c);
public:
	CountLetter(string s,bool (*_function)(char c))
	{
		name = s;
		this->function = _function;
	}
	string GetName()
	{
		return name;
	}
	int Compute(string s)
	{
		int count = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (function(s[i]))
				count++;
		}
		return count;
	}

};

