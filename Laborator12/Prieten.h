#pragma once
#include "Contact.h"
class Prieten:public Contact
{
private:
	string data_nastere;
	string adresa;
	string nr_telefon;
	
public:
	Prieten(string _nume, string _data_nastere, string _adresa, string _nr_telefon);
	string GetAdresa();
	string GetDataNastere();
	string GetNrTelefon();
	string GetTip();

};

