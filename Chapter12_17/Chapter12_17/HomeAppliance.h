#pragma once
#include <iostream>
#include <string>
using namespace std;

class HomeAppliance{
protected:
	int price;
	string model;
;	string color;
public:
	HomeAppliance();
	HomeAppliance(int p, string m, string c);
	virtual void Prn()=0;
};