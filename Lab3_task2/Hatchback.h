#pragma once
#include "Vehicle.h"
class Hatchback :
	public Vehicle
{
public:
	Hatchback(string model, float mileage, float price, int capacity);
	~Hatchback();
};

