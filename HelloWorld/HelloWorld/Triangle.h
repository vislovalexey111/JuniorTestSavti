#pragma once

#include "Figure.h"

class Triangle : public Figure
{
private:
	double m_sides[3];
public:
	Triangle(double side1 = 1.0, double side2 = 1.0, double side3 = 1.0);
	~Triangle();

	void Print();
};