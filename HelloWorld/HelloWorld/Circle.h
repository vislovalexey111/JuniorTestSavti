#pragma once

#include "Figure.h"

class Circle : public IFigure
{
private:
	double m_radius;
public:
	Circle(double radius = 1.0);
	~Circle() {}
	
	void Print() const override;
	Circle* Clone() const override;
};