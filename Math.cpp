#include "Math.h"
#include <cstring>
#include <cstdarg>

int Math::Add(int a, int b)
{
	return a + b;
}
int Math::Add(int a, int b, int c)
{
	return a + b + c;
}
int Math::Add(double a, double b)
{
	return a + b;
}
int Math::Add(double a, double b, double c)
{
	return a + b + c;
}
int Math::Mul(int a, int b)
{
	return a * b;
}
int Math::Mul(int a, int b, int c) 
{
	return a * b * c;
}
int Math::Mul(double a, double b)
{
	return a * b;
}
int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}
char* Math::Add(char a[30], char b[30])
{
	int min;
	if (strlen(a) < strlen(b))
		min = strlen(a);
	else
		min = strlen(b);
	while (min >= 0)
	{
		if (a[min] + b[min] <= 9)
			a[min] += b[min];
		else
		{
			a[min] = (a[min] + b[min]) % 10;
			a[min - 1]++;
		}
	}
	//fara cazul de carry over ca sa nu pierd timpul din lab..
	return a;
}
int Math::Add(int count, ...)
{
	int sum = 0;

	// Use va_list and va_start to access the variable arguments
	va_list args;
	va_start(args, count);

	// Iterate through the variable arguments and sum them up
	for (int i = 0; i < count; ++i) {
		sum += va_arg(args, int);
	}

	// Clean up the va_list
	va_end(args);

	return sum;
}