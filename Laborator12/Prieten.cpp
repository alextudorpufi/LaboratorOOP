#include "Prieten.h"
Prieten::Prieten(string _nume, string _data_nastere, string _adresa, string _nr_telefon) : Contact(_nume)
{
	data_nastere = _data_nastere;
	adresa = _adresa;
	nr_telefon = _nr_telefon;
}
string Prieten::GetAdresa()
{
	return adresa;
}
string Prieten::GetDataNastere()
{
	return data_nastere;
}
string Prieten::GetNrTelefon()
{
	return nr_telefon;
}
string Prieten::GetTip()
{
	return "Prieten";
}