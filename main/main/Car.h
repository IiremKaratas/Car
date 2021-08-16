#pragma once
#include <iostream>
using namespace std;

class Car{
protected:
	string brand;
	string model;
	int power;
	int maxSpeed;
public:
	Car(const string&, const string&, int, int);
	void setBrand(const string&);
	void setModel(const string&);
	void setpower(int);
	void setMaxSpeed(int);
	string getBrand() const;
	string getModel() const;
	int getpower() const;
	int getMaxSpeed() const;
	void print() const;
};

