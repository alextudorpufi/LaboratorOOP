#include "Biblioteca.h"

Biblioteca::Biblioteca()
{
	count = 0;
}

Biblioteca::~Biblioteca()
{
	count = 0;
	for (int i = 0; i < count; ++i) {
		delete carti[i];
	}
}

Biblioteca& Biblioteca::operator+=(Carte* c)
{
	carti[count] = c;
	count++;
	return (*this);
}
Biblioteca::operator int()
{
	return count;
}
void Biblioteca::PrintFilter(bool (*_function)(Carte* c))
{
	for (int i = 0; i < count; i++)
	{
		if (_function(carti[i]) == 1)
			cout << carti[i]->GetInfo() << endl;
	}

}
Carte* * Biblioteca::begin()
{
	return &carti[0];
}
Carte* * Biblioteca::end()
{
	return &carti[count];
}
