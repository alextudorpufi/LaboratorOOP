#pragma once
#include "Animal.h"
class Cow: public Animal
{
public:
	string GetName()
	{
		return "Cow";
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return true;
	}
	


};

