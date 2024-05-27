#include "Cunoscut.h"
Cunoscut::Cunoscut(string _nume, string _nr_telefon) : Contact(_nume)
{

	nr_telefon = _nr_telefon;
}
string Cunoscut::GetNrTelefon()
{
	return nr_telefon;
}
string Cunoscut::GetTip()
{
	return "Cunoscut";
}
