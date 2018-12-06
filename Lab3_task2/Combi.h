#pragma once

#include "Vehicle.h"
class Combi :
	public Vehicle
{
public:
	Combi(string model, float mileage, float price, int capacity);
	~Combi();
};

