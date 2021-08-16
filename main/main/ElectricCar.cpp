#include "ElectricCar.h"
#include <iostream>
using namespace std;

ElectricCar::ElectricCar(const string& b, const string& m, int pow, int mspeed, int ct, const string& bt, int bc) 
	:Car(b, m, pow, mspeed), batteryType(bt){
	setChargingTime(ct);
	setBatteryCapacity(bc);
}

void ElectricCar::setChargingTime(int ct) {	 chargingTime = ct; }

void ElectricCar::setBatteryType(const string& bt) {  batteryType = bt; }

void ElectricCar::setBatteryCapacity(int bc) {	batteryCapacity = bc; }

int ElectricCar::getChargingTime() const {	return chargingTime; }

string ElectricCar::getBatteryType() const {	return batteryType; }

int ElectricCar::getBatteryCapacity() const {	return batteryCapacity; }

void ElectricCar::print() const
{
	Car::print();
	cout << "Charging Time: " << getChargingTime() << " hour" << endl;
	cout << "Battery Type: " << getBatteryType() << endl;
	cout << "Battery Capacity: " << getBatteryCapacity() << " kW/h" << endl;
	cout << endl;

}

