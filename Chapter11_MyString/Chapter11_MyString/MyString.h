#pragma once
#include <iostream>
using namespace std;

//myString Class
class MyString {
private: //멤버변수
	char data[256];
public: //멤버함수
		//생성자
	MyString(char *str = "\0") { strcpy(data, str); }
	//12번 << 연산자 오버로딩
	friend ostream & operator << (ostream &os, MyString &a);
};