#pragma once
#include "Animal.h"

class Bird : public Animal {
public:
	Bird(int a, int w);
	void speak();//오버라이딩
};