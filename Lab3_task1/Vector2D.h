#pragma once
#include "pch.h"
using namespace std;
class Vector2D
{
private:
	float v[2];

public:
	Vector2D();
	Vector2D(float x, float y);
	~Vector2D();


	float getX();
	void setX(float newX);
	float getY();
	void setY(float newY);
	Vector2D operator+(Vector2D &v);
	Vector2D operator-(Vector2D &v);
	Vector2D operator*(Vector2D &v);

	float dot(Vector2D a, Vector2D b);
	Vector2D operator=(Vector2D &vector);

	bool & operator==(Vector2D &b);
	bool & operator!=(Vector2D &b);
	
	void printVector();

};



