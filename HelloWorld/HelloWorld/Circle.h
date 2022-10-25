#pragma once

#include "Figure.h"

class Circle : public Figure
{
private:
	double m_radius;
public:
	Circle(double radius = 1.0);
	~Circle();

	void Print();
};