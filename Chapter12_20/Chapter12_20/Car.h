#pragma once
#include "Engine.h"
#include "Tire.h"
class Car : public Engine, public Tire {
protected:
	Engine eng;
	Tire *tire;
public:
	Car() {};
};