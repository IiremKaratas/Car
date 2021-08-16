#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(const string& b, const string& m, int pow, int mspeed) 
	:brand(b), model(m), power(pow), maxSpeed(mspeed){
	cout << "Constructor for " << brand << " " << model << endl;
}
void Car::setBrand(const string& b) { 	brand = b; }

void Car::setModel(const string& m) {	model = m; }

void Car::setpower(int pow) {	power = pow; }

void Car::setMaxSpeed(int mspeed) {	maxSpeed = mspeed; }

string Car::getBrand() const {	return brand; }

string Car::getModel() const {	return model; }

int Car::getpower() const {	return power; }

int Car::getMaxSpeed() const {	return maxSpeed; }

void Car::print() const
{
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Power: " << power << " HP" << endl;
	cout << "Max Speed: " << maxSpeed << " km/h" << endl;
}


