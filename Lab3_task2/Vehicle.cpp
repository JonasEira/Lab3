#include "pch.h"
#include "Vehicle.h"

float Vehicle::getMileage()
{
	return this->mileage;
}

void Vehicle::setMileage(float mileage)
{
	this->mileage = mileage;
}

float Vehicle::getPrice()
{
	return this->price;
}

void Vehicle::setPrice(float price)
{
	this->price = price;
}

void Vehicle::setValid(bool v)
{
	this->valid = v;
}

bool Vehicle::isValid()
{
	return this->valid;
}


int Vehicle::getCapacity()
{
	return this->capacity;
}

void Vehicle::setCapacity(int capacity)
{
	this->capacity = capacity;
}

string Vehicle::getModel()
{
	return this->model;
}

void Vehicle::setModel(string model)
{
	this->model = model;
}

bool Vehicle::matches(int capacity, float mileage, string car_model)
{
	if (this->capacity >= capacity) {
		if (this->mileage <= mileage) {
			if (car_model.compare(this->getModel()) == 0) {
				return true;
			}
		}
	}
	return false;
}

void Vehicle::printOut()
{
	std::cout << "Capacity: " << capacity <<
		"\nPrice: " << price <<
		"\nMileage: " << mileage <<
		"\nModel: " << model << endl;
}



std::ostream & operator<<(ostream & os, const Vehicle & v)
{
	Vehicle ve = v;
	
	os << ve.getCapacity();
	
	return os;
}

bool & operator<(const Vehicle& rhs, const Vehicle& lhs)
{
	bool tmp = rhs.price < lhs.price;
	return tmp;
}

bool & operator==(const Vehicle & rhs, const Vehicle & lhs)
{
	bool tmp = (rhs.capacity == lhs.capacity
		&& rhs.mileage == lhs.mileage
		&& rhs.model == lhs.model
		&&rhs.price == lhs.price);
	return tmp;
}
