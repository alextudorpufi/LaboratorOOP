// LaboratorOOP8.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <queue>

using namespace std;

ifstream fin("file.txt");
struct date {

	string dataString;
	int dataInt;
	bool operator<(date n2) const
	{
		if (this->dataInt < n2.dataInt)
		{
			return 1;
		}
		if (this->dataInt == n2.dataInt)
		{
			return (this->dataString > n2.dataString);
		}
		return 0;
	}
	
};

int main()
{
	string proposition;
	getline(fin,proposition);
	for (int i = 0; i < proposition.size(); i++)
	{
		proposition[i] = tolower(proposition[i]);
	}

	map	<string,int> word_map;
	string limitator = " ,.!?";
	auto index = proposition.find_first_of(limitator);
	while (	index < proposition.size() )
	{ 
		while (index==0)
		{
			proposition = proposition.substr(1);
			index = proposition.find_first_of(limitator);
		}
		word_map[proposition.substr(0, index)]++;
		proposition = proposition.substr(index+1); // = proposition.substr(index+1, proposition.size() -1)
		index = proposition.find_first_of(limitator);
	}

	priority_queue<date> que;
	for (auto i: word_map)
	{
		que.push({ i.first, i.second });
	}
	while (!que.empty())
	{
		cout << que.top().dataString << " => " << que.top().dataInt << endl;
		que.pop();
	}
}
