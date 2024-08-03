#pragma once
#include <iostream>
#include<string>
#include <vector>
using namespace std;
class Printer
{
public:
	virtual string GetFormatName() = 0;
	virtual string FormatNumber(int number) = 0;
};

