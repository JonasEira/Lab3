#pragma once
#include <string>
#include <iostream>
using namespace std;
class Vehicle
{
private:
	bool valid = true;
	int capacity;
	float price;
	float mileage;
	string model;
public:
	float getMileage();
	void setMileage(float mileage);
	float getPrice();
	void setPrice(float price);
	void setValid(bool v);
	bool isValid();
	int getCapacity();
	void setCapacity(int capacity);
	string getModel();
	void setModel(string model);
	bool matches(int capacity, float mileage, string car_i);
	void printOut();
	friend ostream& operator<<(ostream& os, const Vehicle &v);
};
namespace CarTypes {
	enum Car_T
	{
		Microbus = 1,
		Sedan = 2,
		Coupe = 3,
		Hatchback = 4,
		Combi = 5
	};
	static const Car_T allCarTypes[] = { Microbus, Sedan, Coupe, Hatchback, Combi };
}

