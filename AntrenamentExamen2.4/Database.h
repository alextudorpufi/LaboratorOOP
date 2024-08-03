#pragma once
#include "Entry.h"
#include <vector>
class Database
{
public:
	vector<Entry*> entries;

public:

	Database& operator+=(Entry* e);
	Database& operator-=(string toDelete);
	Entry** begin();
	Entry** end();
	void Print();

};

