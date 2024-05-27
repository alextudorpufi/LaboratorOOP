#pragma once
#include <iostream>
#include <string>
using namespace std;
class Contact
{
private:
	string nume;

public:
	Contact(string nume);
	string getName();
	virtual string GetTip() = 0;

};

