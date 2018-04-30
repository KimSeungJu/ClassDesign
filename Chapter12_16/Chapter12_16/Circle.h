#pragma once
#include "Shape.h"

class Circle : public Shape{
protected:
	double radius;
public :
	Circle();
	Circle(double r);
	double CalcArea();
};