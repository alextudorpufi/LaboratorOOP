#pragma once
#include "Procesator.h"
#include "Find.h"
#include "Suma.h"
class MyVector
{
private:
	vector<Procesator*> processors;
	vector<int> data;

public:
	MyVector& operator +=(int _data);
	MyVector& operator +=(Procesator* _procesator);
	MyVector& operator +=(initializer_list<int> _values);

	void process();
	void clear();

	operator int();
	operator unsigned int();
};

