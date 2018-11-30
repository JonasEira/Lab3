#pragma once
class Vector2D
{
private:
	float vec[2];
	friend ostream& operator<< (ostream& stream, Vector2D* vec);

public:
	Vector2D();
	Vector2D(float x, float y);
	~Vector2D();
	float getX();
	void setX(float newX);
	float getY();
	void setY(float newY);
};

