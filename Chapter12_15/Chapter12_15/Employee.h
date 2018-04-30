#pragma once
#include "Person.h"
using namespace std;

class Employee : public Person {
protected:
	string no;
	int salary;
	string department;

public:
	Employee();
	Employee(string n, int a, bool g, string num, int s, string d);
	void Print();

};