#pragma once
class Car
{
protected:
	int fuelCapacity;
	int fuelConsumption;
	int maxSpeed;
	int maxSpeedSnow;
	int maxSpeedRain;
public:
	Car(int _fuelCapacity, int _fuelConsumption, int maxSpeed);
	virtual int getSpeed(Weather currentWeather);
	virtual int getfuelCapacity();
	virtual int getfuelConsumption();
};