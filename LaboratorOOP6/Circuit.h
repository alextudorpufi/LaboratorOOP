#pragma once
#include "Weather.h"
class Circuit
{
private:
	Car* car;
	Weather currentWeather;
	int length;
public:
	void SetLength(int _length);
	void SetWeather(Weather newWeather);
	void AddCar(Car* Car);

};