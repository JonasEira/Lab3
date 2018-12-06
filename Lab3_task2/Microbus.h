#pragma once
#include "Vehicle.h"
class Microbus :
	public Vehicle
{
public:
	Microbus(string model, float mileage, float price, int capacity);
	~Microbus();
};

