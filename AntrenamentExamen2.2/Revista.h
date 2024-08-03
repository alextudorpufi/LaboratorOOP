#pragma once
#include "Carte.h"
class Revista:public Carte
{
private:
	string title;
	int nrArticole;

public:
	Revista(string _title, int _nrArticole);
	string GetInfo();

};

