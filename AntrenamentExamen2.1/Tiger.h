#pragma once
#include "Feline.h"
class Tiger:public Feline
{
	string GetName()
	{
		return "Tiger";
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
		return 80;
	}
};

