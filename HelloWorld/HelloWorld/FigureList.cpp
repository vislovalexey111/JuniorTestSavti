#include <iostream>
#include "FigureList.h"

FigureList::FigureList()
{
}

FigureList::~FigureList()
{
	for (auto p : m_figures)
		delete p;

	m_figures.clear();
}

void FigureList::PrintFigures()
{
	for (auto figure : m_figures)
		figure->Print();
}