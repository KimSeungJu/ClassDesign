#pragma once
#include <iostream> //cin cout을 사용할 때만 사용
using namespace std;

class Person
{
protected:
	char name[20];
	char address[80];
	char phone[30];
public:
	Person();
	Person(char *name, char *address, char *phone);
	void print();

 };