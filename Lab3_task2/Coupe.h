#pragma once
#include "Vehicle.h"
class Coupe :
	public Vehicle
{
public:
	
	Coupe(string model, float mileage, float price, int capacity);
	~Coupe();
};

