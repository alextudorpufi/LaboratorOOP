#include "Agenda.h"
Contact* Agenda::Cauta(string nume)
{
	for(int i=0;i<contacte.size();i++)
		if (contacte[i]->getName() == nume)
			return contacte[i];
	///caz de eroare... whatever
}
void Agenda::Sterge(string nume)
{
	for (int i = 0; i < contacte.size(); i++)
		if (contacte[i]->getName() == nume)
		{
			contacte.erase(contacte.begin() + i);
			i--;
		}
}

void Agenda::Adauga(Contact* c)
{
	contacte.push_back(c);
}

vector<Contact*> Agenda::GetPrieteni()
{
	vector<Contact*> temp;
	for (int i = 0; i < contacte.size(); i++)
		if (contacte[i]->GetTip() == "Prieten")
		{
			temp.push_back(contacte[i]);
		}
	return temp;
}