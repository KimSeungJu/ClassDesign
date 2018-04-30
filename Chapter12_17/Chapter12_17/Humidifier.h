#pragma once
#include "HomeAppliance.h"

class Humidifier : public HomeAppliance {
protected:
	bool au;
public:
	Humidifier(int p, string m, string col, bool a);
	void Prn();
};