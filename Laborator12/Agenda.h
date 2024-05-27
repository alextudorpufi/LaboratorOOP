#pragma once
#include "Contact.h"
#include "Prieten.h"
#include "Coleg.h"
#include "Cunoscut.h"
#include <vector>

class Agenda
{
private:
	vector<Contact*> contacte;

public:
	Contact* Cauta(string nume);
	vector<Contact*> GetPrieteni();
	void Sterge(string nume);
	void Adauga(Contact* c);

};

