#pragma once

class Matrix2D
{
private:
	float matrix[2][2];

public:

	Matrix2D(float x1, float x2, float y1, float y2);
	Matrix2D(Matrix2D & m);
	Matrix2D();
	
	
	void setData(float x1, float y1, float x2, float y2);
	
	float* getData();

	Matrix2D & operator*(Matrix2D &m);

	~Matrix2D();
};

