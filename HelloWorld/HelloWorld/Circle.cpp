#include <iostream>
#include "Circle.h"

Circle::Circle(double radius) : IFigure()
{
	if (radius > 0.0)
		m_radius = radius;
	else
	{
		std::cout << "ERROR: Bad circle, radius will be set to 1.0!" << std::endl;
		m_radius = 1.0;
	}
}

void Circle::Print() const
{
	std::cout << "Circle with radius: " << m_radius << std::endl;
}

Circle* Circle::Clone() const
{
	return new Circle(*this);
}
