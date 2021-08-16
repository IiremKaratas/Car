#include "GasCar.h"
#include <iostream>
using namespace std;

GasCar::GasCar(const string& b, const string& m, int pow, int mspeed, const string& ftype, int co2em, int ftvol) 
	:Car(b, m, pow, mspeed), fuelType(ftype){
	setCO2Emission(co2em);
	setFuelTankVolume(ftvol);
}

void GasCar::setFuelType(const string& ftype) {	fuelType = ftype; }

void GasCar::setCO2Emission(int co2em) {	CO2Emission = co2em; }

void GasCar::setFuelTankVolume(int ftvol) {	fuelTankVolume = ftvol; }

string GasCar::getFuelType() const {	return fuelType; }

int GasCar::getCO2Emission() const {	return CO2Emission; }

int GasCar::getFuelTankVolume() const {	return fuelTankVolume; }

void GasCar::print() const
{
	Car::print();
	cout << "Fuel Type: " << fuelType << endl;
	cout << "CO2 Emission: " << getCO2Emission() << " g/km" << endl;
	cout << "Fuel Tank Volume: " << getFuelTankVolume() << " L" << endl;
	cout << endl;
}

