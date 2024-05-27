#include "Coleg.h"
Coleg::Coleg(string _nume, string _serviciu, string _adresa, string _nr_telefon) : Contact(_nume)
{
	serviciu = _serviciu;
	adresa = _adresa;
	nr_telefon = _nr_telefon;
}
string Coleg::GetServiciu()
{
	return serviciu;
}
string Coleg::GetNrTelefon()
{
	return nr_telefon;
}
string Coleg::GetAdresa()
{
	return adresa;
}
string Coleg::GetTip()
{
	return "Coleg";
}