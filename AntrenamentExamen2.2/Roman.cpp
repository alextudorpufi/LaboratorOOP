#include "Roman.h"
Roman::Roman(string _nume, string _autor)
{
	nume = _nume;
	autor = _autor;
}
string Roman::GetInfo()
{
	string temp;

	string temp1 = "Roman ";
	for (int i = 0; i < temp1.size(); i++)
		temp.push_back(temp1[i]);

	for (int i = 0; i < nume.size(); i++)
		temp.push_back(nume[i]);

	string temp2 = " de ";
	for (int i = 0; i < temp2.size(); i++)
		temp.push_back(temp2[i]);

	for (int i = 0; i < autor.size(); i++)
		temp.push_back(autor[i]);
	return temp;
}