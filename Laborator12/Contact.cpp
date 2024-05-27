#include "Contact.h"
Contact::Contact(string nume)
{
	this->nume = nume;
}
string Contact::getName()
{
	return nume;
}