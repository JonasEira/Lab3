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
public:
	CarRentalProgram();
	~CarRentalProgram();
	void runTask(bool start);
	void registerCar();
	void rentCar();
};

