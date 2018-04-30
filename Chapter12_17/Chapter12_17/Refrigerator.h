#pragma once
#include "HomeAppliance.h"

class Refrigerator : public HomeAppliance{
protected :
	int capacity;
public:
	Refrigerator(int p, string m, string col, int c);
	void Prn();
};