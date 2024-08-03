#include "Revista.h"
Revista::Revista(string _title, int _nrArticole)
{
	title = _title;
	nrArticole = _nrArticole;
}
string Revista::GetInfo()
{
	string temp;

	string temp1 = "Revista ";
	for (int i = 0; i < temp1.size(); i++)
		temp.push_back(temp1[i]);

	for (int i = 0; i < title.size(); i++)
		temp.push_back(title[i]);

	string temp2 = " cu ";
	for (int i = 0; i < temp2.size(); i++)
		temp.push_back(temp2[i]);

	int _nrArticole = nrArticole;
	string temp3;
	while (_nrArticole)
	{
		temp3.push_back((_nrArticole % 10) + '0');
		_nrArticole /= 10;
	}
	for (int i = temp3.size()-1 ; i >= 0; i--)
		temp.push_back(temp3[i]);

	string temp4 = " articole";
	for (int i = 0; i < temp4.size(); i++)
		temp.push_back(temp4[i]);

	return temp;
}