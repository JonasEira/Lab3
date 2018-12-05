#pragma once
#include "Vector2D.h"
class Vector3D
{
private:
	Vector2D vec[2];

public:

	Vector3D(float x1, float x2, float y1, float y2);

	~Vector3D();
};

