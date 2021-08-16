#pragma once
#include "Car.h"

class ElectricCar : public Car{
private:
	string batteryType;
	int chargingTime;
	int batteryCapacity;
public:
	ElectricCar(const string&, const string&, int, int, int, const string&, int);
	void setChargingTime(int);
	void setBatteryType(const string&);
	void setBatteryCapacity(int);
	int getChargingTime() const;
	string getBatteryType() const;
	int getBatteryCapacity() const;
	void print() const;
};

