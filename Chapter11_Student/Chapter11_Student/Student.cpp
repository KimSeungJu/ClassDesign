#include "Student.h"

//������
Student::Student(int n, string b, int k, int m, int e)
{
	no = n;
	name = b;
	kor = k;
	mat = m;
	eng = e;
	total = calculate_sum();
	avg = calculate_avg();
}
//�� �� ��� �Լ�
int Student::calculate_sum()
{
	int sum=kor+mat+eng;
	return sum;
}
//��� ��� �Լ�
double Student::calculate_avg() 
{
	double average = total / 3.0;
	return average;
}
//����Լ�
void Student::print()const
{
	cout << no << "\t " <<name<<"  "<< kor << "   " << mat << "   " << eng << "   " << total << "  " << avg << endl;
}