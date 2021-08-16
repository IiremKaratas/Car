#pragma once
#include "Car.h"

class GasCar : public Car{
private:
	string fuelType;
	int CO2Emission;
	int fuelTankVolume;
public:
	GasCar(const string&, const string&, int, int, const string&, int, int);
	void setFuelType(const string&);
	void setCO2Emission(int);
	void setFuelTankVolume(int);
	string getFuelType() const;
	int getCO2Emission() const;
	int getFuelTankVolume() const;
	void print() const;
};

