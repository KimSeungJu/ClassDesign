#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;
	bool gender;
public:
	Person();
	Person(string n, int a, bool g);
	virtual void Print();
};