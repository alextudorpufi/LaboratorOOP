#include "Car.h"
#include "Circuit.h"
#include "Weather.h"
#include <iostream>
using namespace std;

Car::Car(int _fuelCapacity, int _fuelConsumption,int _maxSpeed)
{
	fuelCapacity = _fuelCapacity;
	fuelConsumption = _fuelConsumption;
	maxSpeed = _maxSpeed;
}
int Car::getfuelCapacity()
{
	return fuelCapacity;
}
int Car::getfuelConsumption()
{
	return fuelConsumption;
}
int Car::getSpeed(Weather currentWeather)
{
	if (currentWeather == Sun)
		return maxSpeed;
	if (currentWeather == Snow)
		return maxSpeedSnow;
	if (currentWeather == Rain)
		return maxSpeedRain;
}