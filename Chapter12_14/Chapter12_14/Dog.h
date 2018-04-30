#pragma once
#include "Animal.h"

class Dog : public Animal{
protected:
	string breed;
public:
	Dog(int a, int w, string b);
	void speak();//오버라이딩
	void print();//오버라이딩
};