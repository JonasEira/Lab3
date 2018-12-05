#pragma once
#include "Vehicle.h"
#include <vector>
class CarRentalProgram
{
private:
	bool running = true;
	vector<Vehicle> vehicles;
public:
	CarRentalProgram();
	~CarRentalProgram();
	void runTask(bool start);
	void registerCar();
	void rentCar();
};

