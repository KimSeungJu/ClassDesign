#pragma once
#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
	int code;
	string sub;
	string director;
	string member;
	string type;
	string day;

public:
	//������
	Movie(int a = 0,string b=NULL, string c = NULL, string d = NULL, string e = NULL, string f = NULL);
	//��������Լ�
	void print();

};