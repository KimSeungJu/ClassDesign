#pragma once
#include <iostream>
using namespace std;

//myString Class
class MyString {
private: //�������
	char data[256];
public: //����Լ�
		//������
	MyString(char *str = "\0") { strcpy(data, str); }
	//12�� << ������ �����ε�
	friend ostream & operator << (ostream &os, MyString &a);
};