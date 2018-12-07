// Lab3_task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Vector2D.h"
#include "Matrix2D.h"
using namespace std;

void runVectors() {
	float x1 = 1.0;
	float y1 = 1.0;
	float x2 = 2.0;
	float y2 = 2.0;
	Vector2D vec1 = Vector2D(x1, y2);
	Vector2D vec2 = Vector2D(x1, y2);
	Vector2D added = vec1 + vec2;
	Vector2D subbed = vec1 - vec2;
	Vector2D multiplied = vec1 * vec2;
	Vector2D reassigned = multiplied;
	subbed.printVector();
	multiplied.printVector();
	reassigned.printVector();
	added.printVector();
	vec1.printVector();
	vec2.printVector();

}

void runMatrices() {
	
	Matrix2D m;
	cout << "Matrix m:" << endl;
	m.setData(1.0, 0.0, 0.0, 1.0);
	m.printMatrix();

	Matrix2D u  = unity();
	cout << "Matrix u:" << endl;
	u.printMatrix();
	
	Matrix2D mult;
	cout << "Matrix m*u:" << endl;
	mult = m * u;
	mult.printMatrix();
	
	cout << "Transposed m*u:" << endl;
	transpose(mult);
	mult.printMatrix();

	cout << "rotated u pi/2:" << endl;
	Matrix2D rotated= u.rotate(0.5000*3.14159265);
	rotated.printMatrix();
}

int main()
{
	runVectors();
	runMatrices();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
