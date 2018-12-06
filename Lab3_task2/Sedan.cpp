#include "pch.h"
#include "Sedan.h"


Sedan::Sedan(string model, float mileage, float price, int capacity)
{
	setModel(model);
	setMileage(mileage);
	setPrice(price);
	setCapacity(capacity);
}


Sedan::~Sedan()
{
}
