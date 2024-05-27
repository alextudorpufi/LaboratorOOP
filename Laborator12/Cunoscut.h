#pragma once
#include "Contact.h"
class Cunoscut:public Contact
{
private:
	string nr_telefon;

public:
	Cunoscut(string _nume, string _nr_telefon);
	string GetNrTelefon();
	string GetTip();


};

