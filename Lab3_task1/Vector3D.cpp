#include "pch.h"
#include "Vector3D.h"


Vector3D::Vector3D()
{
}


Vector3D::Vector3D(float x1, float x2, float y1, float y2)
{
	vec[1].setX(x1);
	vec[1].setY(y1);
	vec[2].setX(x1);
	vec[2].setY(y1);

}

Vector3D::~Vector3D()
{
}
