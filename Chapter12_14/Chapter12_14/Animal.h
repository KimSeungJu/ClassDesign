#pragma once
#include <iostream>

using namespace std;

class Animal {
protected:
	int age;
	int weight;
public:
	Animal();
	Animal(int a, int w);
	void sleep();
	void eat();
	virtual void speak()=0;
	void print();
};