#pragma once
#include "Masina.h"
class Dacia:public Masina
{

private:
	string color;
public:

	Dacia(string color);
	string GetColor();
	string GetName();

};

