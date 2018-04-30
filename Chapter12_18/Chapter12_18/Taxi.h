#pragma once
#include "Car.h"

class Taxi : public Car {
protected :
	bool meter;
	int fare = 2000;
public :
	Taxi();
	Taxi(string m, string c);
	Taxi(string m, string c, bool met, int f);
	void Power();
	void Prn();
};