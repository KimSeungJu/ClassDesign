#pragma once
#include "HomeAppliance.h"

class Washer : public HomeAppliance {
protected:
	float capacity;
public:
	Washer(int p,string m, string col, float c);
	void Prn();
};