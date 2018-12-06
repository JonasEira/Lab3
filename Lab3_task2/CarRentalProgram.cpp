#include "pch.h"
#include "CarRentalProgram.h"
#include <iostream>
#include <string>
using namespace std;
CarRentalProgram::CarRentalProgram()
{
}


CarRentalProgram::~CarRentalProgram()
{
}

string tolower(const char * c) {
	string lowed;
	while (*c) {
		lowed += tolower(*c);
		c++;
	}
	return lowed;
}

void CarRentalProgram::runTask(bool start) {
	string word_s;
	while (this->running == true) {
		cout << "===Car Rental===:\n1: Register\n2: Rent\n3: Quit" << endl;
		getline(cin, word_s);
		const char* word_c = word_s.c_str();
		if (tolower(word_c).compare("register") == 0 || tolower(word_c).compare("1") == 0) {
			cout << "Register selected." << endl;
			// DO REGISTER here:
			registerCar();
		}
		else if (tolower(word_c).compare("rent") == 0 || tolower(word_c).compare("2") == 0) {
			cout << "Rent selected." << endl;
			// DO RENT here:
			rentCar();
		}
		else if (tolower(word_c).compare("quit") == 0 || tolower(word_c).compare("3") == 0) {
			this->running = false;
		}
		else {
			cout << "Wrong command." << endl;
		}
	}
}

Vehicle getCarDescription(int capacity, float price, float mileage, int i) {
	CarTypes::Car_T car_type;
	Vehicle car;
	switch (i) {
	case 1:
		car_type = CarTypes::Microbus;
		car = Microbus("Microbus", mileage, price, capacity);
		break;
	case 2:
		car_type = CarTypes::Sedan;
		car = Sedan("Sedan", mileage, price, capacity);
		break;
	case 3:
		car_type = CarTypes::Coupe;
		car = Coupe("Coupe", mileage, price, capacity);
		break;
	case 4:
		car_type = CarTypes::Hatchback;
		car = Hatchback("Hatchback", mileage, price, capacity);
		break;
	case 5:
		car_type = CarTypes::Combi;
		car = Combi("Combi", mileage, price, capacity);
		break;
	default:
		//?? No default type
		cout << "Not an option.";
		car.setValid(false);
		return car;
	}
	return car;
}

void CarRentalProgram::registerCar()
{
	//Registering
	string input;
	cout << "Enter the vehicle's capacity: ";
	getline(cin, input);
	int capacity = stoi(input);

	cout << "Enter the vehicle's price: ";
	getline(cin, input);
	float price = stof(input);

	cout << "Enter the vehicle's mileage: ";
	getline(cin, input);
	float mileage = stof(input);
	cout << "Type of car model? (1. Microbus, 2. Sedan, 3. Coupe, 4. Hatchback or 5. Combi)?" << endl;
	getline(cin, input);
	int car_i = stoi(input);
	Vehicle car;
	car = getCarDescription(capacity, price, mileage, car_i);
	if (car.isValid()) {
		vehicles.push_back(car);
	}
}


void CarRentalProgram::rentCar()
{
	//Renting
	string input;
	cout << "Enter the vehicle's capacity: ";
	getline(cin, input);
	int capacity = stoi(input);

	cout << "Enter the vehicle's mileage: ";
	getline(cin, input);
	float mileage = stof(input);

	cout << "Type of car model? (1. Microbus, 2. Sedan, 3. Coupe, 4. Hatchback or 5. Combi)?" << endl;
	getline(cin, input);
	int car_i = stoi(input);
	Vehicle carDesc = getCarDescription(capacity, 0.0, mileage, car_i);
	if (carDesc.isValid()) {
		string car_name = carDesc.getModel();
		vector<Vehicle> car_matches;
		std::vector<Vehicle>::iterator it = vehicles.begin();

		while (it != vehicles.end()) {
			Vehicle v = *it;
			if (v.matches(capacity, mileage, car_name)) {
				car_matches.push_back(v);
				v.printOut();
			}
			++it;
		}
		cout << "Matching vehicles found: " << car_matches.capacity() << endl;
		sortMatches(&car_matches);
	}
}
void sortMatches(vector<Vehicle> *list){
	
}