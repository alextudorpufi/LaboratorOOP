#pragma once
#include "Animal.h"
class Shark:public Animal
{
public:
	string GetName()
	{
		return "Shark";
	}
	bool IsAFish()
	{
		return true;
	}
	bool IsABird()
	{
		return false;
	}
	bool IsAMammal()
	{
		return false;
	}
};

