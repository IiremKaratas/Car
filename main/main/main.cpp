#include <iostream>
#include "GasCar.h"
#include "ElectricCar.h"
using namespace std;

int main()
{
	GasCar c1("Volkswagen", "Golf", 115, 198, "Diesel", 109, 50);
	c1.print();

	ElectricCar c2("Tesla", "Model S", 301, 193, 20, "Li-ion", 60);
	c2.print();
	
}

