#pragma once
#include <vector>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"

class FigureList
{
private:
	std::vector<Figure*> m_figures;
public:
	FigureList();
	~FigureList();

	void PrintFigures();

	template <class T>
	void AddFigure(T figure) {
		Figure* f = new T(figure);
		m_figures.push_back(f);
	}
};