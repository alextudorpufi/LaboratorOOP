#pragma once
#include "Animal.h"
class Eagle:public Animal
{
public:
	string GetName()
	{
		return "Eagle";
	}
	bool IsAFish()
	{
		return false;
	}
	bool IsABird()
	{
		return true;
	}
	bool IsAMammal()
	{
		return false;
	}
};

