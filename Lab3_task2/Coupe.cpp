#include "pch.h"
#include "Coupe.h"


Coupe::Coupe(string model, float mileage, float price, int capacity)
{
	setModel(model);
	setMileage(mileage);
	setPrice(price);
	setCapacity(capacity);
}


Coupe::~Coupe()
{
}
