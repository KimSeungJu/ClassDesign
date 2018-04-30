#pragma once
#include "Person.h"

class Customer :public Person{
protected:
	char id[30];
	int point;
public:
	Customer();
	Customer(char *name, char *address, char *phone, char *id, int point);
	void print();
};