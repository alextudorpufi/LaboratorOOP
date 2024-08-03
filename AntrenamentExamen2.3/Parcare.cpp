 #include "Parcare.h"

void Parcare::Create(int maxCapacity)
{
	masini.reserve(maxCapacity);
}
bool Parcare::Add(Masina* masina)
{
	if (masini.size() == masini.capacity())
		return false;
	else
	{
		masini.push_back(masina);
		return true;
	}
}
void Parcare::RemoveByName(string name)
{
	for (int i = 0; i < masini.size(); i++)
		if (masini[i]->GetName() == name)
		{
			masini.erase(masini.begin() + i);
			i--;
		}
}
int Parcare::GetCount()
{
	return masini.size();
}
bool Parcare::IsFull()
{
	if (masini.size() == masini.capacity())
		return true;
	else
		return false;
}
void Parcare::ShowAll()
{
	cout << "SHOW-ALL: ";
	for (int i = 0; i < masini.size(); i++)
		cout << masini[i]->GetName()<<"("<<masini[i]->GetColor()<<")"<< " ";
	cout << endl;
}
void Parcare::ShowByColor(string color)
{
	cout << "SHOW-COLOR: ";
	for (int i = 0; i < masini.size(); i++)
		if(masini[i]->GetColor() == color)
			cout << masini[i]->GetName() << "(" << masini[i]->GetColor() << ")" << " ";
	cout << endl;

}