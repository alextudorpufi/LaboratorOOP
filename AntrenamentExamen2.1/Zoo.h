#pragma once
#include <iostream>
#include <vector>

#include "Zoo.h"
#include "Shark.h"
#include "Eagle.h"
#include "Tiger.h"
#include "Lion.h"
#include "Cow.h"
#include "Animal.h"

using namespace std;
class Zoo
{
private:

	vector<Animal*> animals;

public:
	
	vector<Animal*> GetFishes()
	{
		vector<Animal*> fishes;
		for (auto a : animals)
		{
			if (a->IsAFish() == true)
			{
				fishes.push_back(a);
			}
		}
		return fishes;
	}

	vector<Animal*> GetBirds()
	{
		vector<Animal*> birds;
		for (auto a : animals)
		{
			if (a->IsABird() == true)
			{
				birds.push_back(a);
			}
		}
		return birds;
	}

	vector<Animal*> GetMammals()
	{
		vector<Animal*> mammals;
		for (auto a : animals)
		{
			if (a->IsAMammal() == true)
			{
				mammals.push_back(a);
			}
		}
		return mammals;
	}

	//cam suspicios acest GetFelines()
	vector<Feline*> GetFelines()
	{
		vector<Feline*> felines;
		for (auto a : animals)
		{
			Feline* feline = dynamic_cast<Feline*>(a);
			if (feline) {
				felines.push_back(feline);
			}
		}
		return felines;
	}

	int GetTotalAnimals()
	{
		int count = 0;
		for (auto a : animals)
			count++;
		return count;
	}

	void operator+=(Animal* animal) 
	{
		animals.push_back(animal);
	}
	
	bool operator () (string name)
	{
		for (auto a : animals)
		{
			if (a->GetName() == name)
			{
				return true;
			}
		}
		return false;
	}



	
};

