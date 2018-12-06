#include "pch.h"
#include "Combi.h"


Combi::Combi(string model, float mileage, float price, int capacity)
{
	setModel(model);
	setMileage(mileage);
	setPrice(price);
	setCapacity(capacity);
}


Combi::~Combi()
{
}