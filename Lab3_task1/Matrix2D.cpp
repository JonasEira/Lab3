#include "pch.h"
#include "Matrix2D.h"



Matrix2D::Matrix2D()
{
}


Matrix2D::Matrix2D(float x1, float y1, float x2, float y2)
{
	matrix[0][0] = x1;
	matrix[0][1] = y1;
	matrix[1][0] = x2;
	matrix[1][1] = y2;
}

Matrix2D::Matrix2D(Matrix2D &m)
{
	matrix[0][0] = m.matrix[0][0];
	matrix[0][1] = m.matrix[0][1];
	matrix[1][0] = m.matrix[1][0];
	matrix[1][1] = m.matrix[1][1];
}

Matrix2D::~Matrix2D()
{
}
