#pragma once
#include "Text.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Cuvant:public Text
{
protected:
	string txt;

public:
	Cuvant(string std)
	{
		txt = std;
	}
	void Afiseaza() override
	{
		cout << txt << " ";
	}
	void SetCuvant(string cuvant)
	{
		txt = cuvant;
	}

};

