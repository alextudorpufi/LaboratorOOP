#pragma once
#include "Printer.h"
using namespace std;
class Decimal:public Printer
{
	string GetFormatName() override;
	string FormatNumber(int number) override;
};

