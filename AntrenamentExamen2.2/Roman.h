#pragma once
#include "Carte.h"
class Roman:public Carte
{
private:
	string nume;
	string autor;

public:
	Roman(string _nume, string _autor);
	string GetInfo();

};

