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
	//생성자
	Movie(int a = 0,string b=NULL, string c = NULL, string d = NULL, string e = NULL, string f = NULL);
	//정보출력함수
	void print();

};