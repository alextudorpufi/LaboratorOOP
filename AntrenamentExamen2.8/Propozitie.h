#pragma once
#include "Cuvant.h"
class Propozitie:public Text
{
protected:
	vector<Cuvant> cuvinte;
	
public:
	void Afiseaza() override
	{
		for (int i = 0; i < cuvinte.size(); i++)
			cuvinte[i].Afiseaza();
	}
	void AddCuvant(Cuvant Cuv)
	{
		cuvinte.push_back(Cuv);
	}
	Propozitie(string prop)
	{
		int i = 0;
		while (i < prop.size())
		{
			string temp;
			while (prop[i] != ' ' && i < prop.size())
			{
				temp = temp + prop[i];
				i++;
			}
			Cuvant temp1(temp);
			AddCuvant(temp1);
			i++;

		}
	}

};

