#pragma once
#include "Procesor.h"
#include "ComputeVowals.h"
#include "CountLetter.h"
#include "LongestWord.h"
class Sentence
{
private:
	vector<Procesor*> procesators;
	string name;

public:
	Sentence(string s)
	{
		name = s;
	}
	void RunAll()
	{
		for (int i = 0; i < procesators.size(); i++)
			cout << "Name:" << procesators[i]->GetName() << " => " << procesators[i]->Compute(name) << endl;
	}
	void ListAll()
	{
		for (int i = 0; i < procesators.size(); i++)
			cout << "Name:" << procesators[i]->GetName() << endl;
	}
	void Run(string s)
	{
		for (int i = 0; i < procesators.size(); i++)
			if (procesators[i]->GetName() == s)
			{
				cout << procesators[i]->Compute(name) << endl;
				break;
			}
	}
	Sentence& operator+= (Procesor* p)
	{
		procesators.push_back(p);
		return *this;
	}
};

