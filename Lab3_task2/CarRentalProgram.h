#pragma once
#include "Vehicle.h"
#include <vector>
#include "Microbus.h"
#include "Sedan.h"
#include "Coupe.h"
#include "Combi.h"
#include "Hatchback.h"
class CarRentalProgram
{
private:
	bool running = true;
	vector<Vehicle> vehicles;
	vector<Vehicle> rented;
public:
	CarRentalProgram();
	~CarRentalProgram();
	void runTask(bool start);
	void registerCar();
	void rentCar();
	void moveToRented(Vehicle v);
	void sortMatches(vector<Vehicle> &list);
	vector<string> split(string strToSplit, char delimeter);
};

