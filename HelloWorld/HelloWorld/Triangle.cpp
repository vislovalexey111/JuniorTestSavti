#include <iostream>
#include "Triangle.h"

Triangle::Triangle(double side1, double side2, double side3) : IFigure()
{
	//Check if all sides are correct and if triangle with those sides does exist
	bool isTriangleGood = (side1 > 0.0 && side2 > 0.0 && side3 > 0.0)
		&& (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2);

	if (isTriangleGood)
	{
		m_sides[0] = side1;
		m_sides[1] = side2;
		m_sides[2] = side3;
	}
	else
	{
		std::cout << "ERROR: Bad triangle, all sides will be set to 1.0!";

		for (int i = 0; i < 3; i++)
			m_sides[i] = 1.0;
	}
}

void Triangle::Print() const
{
	std::cout << "Triangle with sides: a = ";
	std::cout << m_sides[0] << ", b = ";
	std::cout << m_sides[1] << ", c = ";
	std::cout << m_sides[0] << std::endl;
}

Triangle* Triangle::Clone() const
{
	return new Triangle(*this);
}