#include <iostream>
#include "FigureList.h"

FigureList::FigureList(const FigureList& otherList)
{
	Add(otherList);
}

FigureList FigureList::operator=(const FigureList& otherList)
{
	Clear();
	Add(otherList);

	return *this;
}

FigureList FigureList::operator+(const FigureList& otherList)
{
	FigureList tempFigureList(*this);
	tempFigureList.Add(otherList);

	return tempFigureList;
}

void FigureList::operator+=(const FigureList& otherList)
{
	Add(otherList);
}

void FigureList::operator+=(const IFigure* figure)
{
	m_figures.push_back(figure->Clone());
}

FigureList::~FigureList()
{
	Clear();
}

void FigureList::PrintFigures() const
{
	for (auto p : m_figures)
		p->Print();
}

inline void FigureList::Add(const FigureList& otherList)
{
	for (auto p : otherList.m_figures)
		*this += p;
}

inline void FigureList::Clear()
{
	for (auto p : m_figures)
		delete p;

	m_figures.clear();
}