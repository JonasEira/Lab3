#include "pch.h"
#include "Hatchback.h"


Hatchback::Hatchback(string model, float mileage, float price, int capacity)
{
	setModel(model);
	setMileage(mileage);
	setPrice(price);
	setCapacity(capacity);
}


Hatchback::~Hatchback()
{
}
