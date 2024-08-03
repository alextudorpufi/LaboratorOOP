#pragma once
#include "Masina.h"
#include "Dacia.h"
#include "Toyota.h"
#include "FerrariRosu.h"
class Parcare
{
private:
	vector<Masina*> masini;

public:

	void Create(int maxCapacity);
	bool Add(Masina* masina);
	void RemoveByName(string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(string color);

};

