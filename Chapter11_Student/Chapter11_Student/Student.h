#pragma once
#include <iostream>
#include <string>
using namespace std;

//Student Class
class Student
{
private: //�������
	int no;
	string name;
	int kor;
	int mat;
	int eng;
	int total;
	double avg;

public: //����Լ�
	//������
	Student(int n = 0, string b = NULL, int k = 0, int m=0, int e=0);
	//�� �� ��� �Լ�
	int calculate_sum();
	//��� ��� �Լ�
	double calculate_avg();
	//����Լ�
	void print() const;

};