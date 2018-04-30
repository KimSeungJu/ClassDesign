#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
protected:
	string model;
	string color;
public :
	Car();
	Car(string m, string c);
	virtual void Prn() = 0;
};