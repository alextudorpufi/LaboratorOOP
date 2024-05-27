#pragma once
#include "Contact.h"
class Coleg:public Contact
{
private:
	string serviciu;
	string adresa;
	string nr_telefon;

public:
	Coleg(string _nume, string _serviciu, string _adresa, string _nr_telefon);
	string GetServiciu();
	string GetNrTelefon();
	string GetAdresa();
	string GetTip();
};

