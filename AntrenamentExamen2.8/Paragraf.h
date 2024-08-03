#pragma once
#include "Cuvant.h"
class Paragraf:public Text
{
protected:
	vector<Text*> texte;
public:
	void Afiseaza() override
	{
		for (int i = 0; i < texte.size(); i++)
			texte[i]->Afiseaza();
	}
	void Add(Text* txt)
	{
		texte.push_back(txt);
	}
};

