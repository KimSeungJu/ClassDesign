#pragma once
#include "Animal.h"

class Dog : public Animal{
protected:
	string breed;
public:
	Dog(int a, int w, string b);
	void speak();//�������̵�
	void print();//�������̵�
};