#pragma once
#include "Procesor.h"
class LongestWord:public Procesor
{
	string name;
public:
	LongestWord(string s)
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
		int longest = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != ' ')
			{
				count++;
			}
			else
			{
				if (count > longest)
					longest = count;
				count = 0;
			}
		}
		if (count > longest)
			longest = count;
		return longest;
	}
};

