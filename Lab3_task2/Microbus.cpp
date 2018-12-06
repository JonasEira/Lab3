#include "pch.h"
#include "Microbus.h"


Microbus::Microbus(string model, float mileage, float price, int capacity)
{
	setModel(model);
	setMileage(mileage);
	setPrice(price);
	setCapacity(capacity);
}


Microbus::~Microbus()
{
}
