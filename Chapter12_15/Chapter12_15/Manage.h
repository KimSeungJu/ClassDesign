#pragma once
#include "Employee.h"
using namespace std;

class Manage : public Employee {
protected:
	int bonus;
public :
	Manage();
	Manage(string n, int a, bool g, string num, int s, string d, int b);
	void Print();

};