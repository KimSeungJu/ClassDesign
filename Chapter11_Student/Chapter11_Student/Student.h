#pragma once
#include <iostream>
#include <string>
using namespace std;

//Student Class
class Student
{
private: //멤버변수
	int no;
	string name;
	int kor;
	int mat;
	int eng;
	int total;
	double avg;

public: //멤버함수
	//생성자
	Student(int n = 0, string b = NULL, int k = 0, int m=0, int e=0);
	//총 점 계산 함수
	int calculate_sum();
	//평균 계산 함수
	double calculate_avg();
	//출력함수
	void print() const;

};