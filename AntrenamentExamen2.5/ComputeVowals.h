#pragma once
#include "Procesor.h"
class ComputeVowals:public Procesor
{
	string name;
public:
	ComputeVowals(string s)
	{
		name = s;
	}
	string GetName()
	{
		return name;
	}
	int Compute(string s)
	{
		int count = 0;
		for (int i = 0; i < s.size(); i++)
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' && s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			{
				count++;
			}
		return count;
	}
};

