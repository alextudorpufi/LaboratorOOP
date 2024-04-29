#include "map.h"
#include <iostream>
using namespace std;
int main()
{
	Map<int, const char*> m;
	m[10] = "C++";
	m[20] = "test";
	m[30] = "Poo";
	
	for (auto [key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}

	/*for(int i=0;i < m.count;i ++)
		printf("Index:%d, Key=%d, Value=%s\n", m.elements[i].index, m.elements[i].key, m.elements[i].value);*/

	m[20] = "result";

	for (auto [key, value, index] : m)
	{
		printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
	}

	/*for (int i = 0; i < m.count; i++)
		printf("Index:%d, Key=%d, Value=%s\n", m.elements[i].index, m.elements[i].key, m.elements[i].value);*/

	Map<int, const char*> m2;
	m2[10] = "C++";
	cout << m.Includes(m2);
	m2[20] = "result";
	cout << " " << m.Includes(m2);
	m2.Clear();
	cout << " " << m.Includes(m2);
	return 0;
}