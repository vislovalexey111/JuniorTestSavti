#pragma once

#include <vector>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"

class FigureList
{
private:
	std::vector<IFigure*> m_figures;
public:
	FigureList() {}
	FigureList(const FigureList& otherList);
	~FigureList();

	// Operators
	FigureList operator+(const FigureList& otherList) const;
	FigureList operator=(const FigureList& otherList);
	void operator+=(const FigureList& otherList);
	void operator+=(const IFigure* figure);

	void PrintFigures() const;
	void Add(const FigureList& otherList);
	void Clear();

	template <class T>
	void AddFigure(const T figure)
	{
		const IFigure* f = &figure;
		*this += f;
	}
};