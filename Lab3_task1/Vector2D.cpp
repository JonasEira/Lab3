#include "pch.h"
#include "Vector2D.h"
#include <iostream>

using namespace std;
Vector2D::Vector2D()
{

}

Vector2D::Vector2D(float x, float y)
{
	cout << "Constructing" << endl;
	this->setX(x);
	this->setY(y);
}



Vector2D::~Vector2D()
{
	delete[] vec;
}

float Vector2D::getX() {
	return this->vec[0];
}
void Vector2D::setX(float newX)
{
	this->vec[0] = newX;
}
float Vector2D::getY() {
	return this->vec[1];
}

void Vector2D::setY(float newY)
{
	this->vec[1] = newY;
}

ostream & operator<<(ostream & stream, Vector2D * vec)
{
	return stream << "Vector2D=[" << vec->getX()
		<< "," << vec->getY() << "]";
}
