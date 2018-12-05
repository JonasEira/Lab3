#pragma once
#include <string>
using namespace std;
class Vehicle
{
private:
	int capacity;
	float price;
	float mileage;
	string model;
public:
	float getMileage();
	float getPrice();
	int getCapacity();
	string getModel();

};

