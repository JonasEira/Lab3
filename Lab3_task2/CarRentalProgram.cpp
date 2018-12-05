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

string tolower(char * c) {
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
		cout << "===Car Rental===:\n1: Register\n2: Rent\n" << endl;
		getline(cin, word_s);
		char* word_c = &word_s[0];
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
		else if (tolower(word_c).compare("q") == 0) {
			this->running = false;
		}
		else {
			cout << "Wrong command." << endl;
		}
	}
}
void CarRentalProgram::registerCar()
{
	string input;
	cout << "Type of car? ("
	
	//Registering
}
void CarRentalProgram::rentCar()
{
	//Renting
}