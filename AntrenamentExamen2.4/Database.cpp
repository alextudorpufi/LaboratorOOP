#include "Database.h"
Database& Database::operator+=(Entry* e)
{
	entries.push_back(e);
	return *this;
}

Database& Database::operator-=(string toDelete)
{
	for (int i = 0; i < entries.size(); i++)

		if (entries[i]->GetName() == toDelete)
		{
			entries.erase(entries.begin() +i);
			i--;
		}
	return *this;
}
Entry** Database::begin()
{
	return &entries[0];
}
Entry** Database::end()
{
	return &entries[0 + entries.size()];
}

void Database::Print()
{
	for (int i = 0; i < entries.size(); i++)
	{
		cout << entries[i]->GetName() << " : ";
		entries[i]->Print();
		cout << ";";
	}
	cout << endl;

}
