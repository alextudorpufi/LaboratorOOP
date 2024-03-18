#include "Sort.h"
#include <iostream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>
using namespace std;

Sort::Sort(int _count, int min, int max)
{
	count = _count;
	for (int i = 0; i < count; i++)
	{
		v[i] = min + (rand() % (max-min));
		cout << v[i]<<" ";
	}
}

Sort::Sort(int _v[], int _count)
{
	count = _count;
	for (int i = 0; i < count; i++)
	{
		v[i] = _v[i];
		cout << v[i] << " ";
	}
}
Sort::Sort(initializer_list <int> _v)
{
	count = 0;
	for (const int* i= _v.begin(); i < _v.end(); i++)
	{
		v[count] = *i;
		count++;
	}

}
Sort::Sort(int _count,... )
{
	count = _count;
	// Use va_list and va_start to access the variable arguments
	va_list args;
	va_start(args, count);

	// Iterate through the variable arguments and sum them up
	for (int i = 0; i < count; i++) {
		v[i] = va_arg(args, int);
		cout << v[i] << " ";
	}

	// Clean up the va_list
	va_end(args);
}
Sort::Sort(char a[256])
{
	count = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == ',')
		{
			count++;
		}
		else
		{
			v[count] = v[count] * 10 + (a[i] - '0');
		}
	}
}
void Sort::InsertSort(bool ascendant)
{
	else
	{
		for (int i = 1; i < count; i++)
			if ((v[i] > v[i - 1])==ascendant)
			{
				for (int j = i - 1; j >= 0; j--)
					if (v[j] > v[j - 1])
					{
						int aux = v[j];
						v[j] = v[j - 1];
						v[j - 1] = aux;
					}
					else
						break;
			}
	}
}
void Sort::BubbleSort(bool ascendant)
{	
	bool sortat;
	do
	{
		sortat = true;
		for (int i = 0; i < count - 1; i++)
				if ((v[i] > v[i + 1]) == ascendant)
					{
						int aux = v[i];
						v[i] = v[i + 1];
						v[i + 1] = aux;
						sortat = false;
					}
	}
	while (sortat==0);
}
void Sort::quickSort(int st, int dr,bool ascendant)
{
	if (st < dr)
	{
		//pivotul este inițial v[st]
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st, j = dr, d = 0;
		while (i < j)
		{
			if ((v[i] > v[j])==ascendant)
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		quickSort(st, i - 1,ascendant);
		quickSort(i + 1, dr,ascendant);
	}
}
void Sort::QuickSort(bool ascendant)
{
	quickSort(0, count - 1,ascendant);
}
void Sort::Print()
{
	for (int i = 0; i < count; i++)
		cout << v[i];
}
int Sort::GetElementsCount()
{
	return count;
}
int Sort::GetElementFromIndex(int index)
{
	return v[index];
}