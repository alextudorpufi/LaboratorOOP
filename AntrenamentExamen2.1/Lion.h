#pragma once
#include "Feline.h"
class Lion :public Feline
{
	string GetName()
	{
		return "Lion";
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
	int GetSpeed()
	{
		return 100;
	}

};

