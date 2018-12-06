#pragma once
#include "Vehicle.h"
class Sedan :
	public Vehicle
{
public:
	Sedan(string model, float mileage, float price, int capacity);
	~Sedan();
};

