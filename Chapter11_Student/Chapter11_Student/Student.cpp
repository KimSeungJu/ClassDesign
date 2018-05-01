#include "Student.h"

//생성자
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
//총 점 계산 함수
int Student::calculate_sum()
{
	int sum=kor+mat+eng;
	return sum;
}
//평균 계산 함수
double Student::calculate_avg() 
{
	double average = total / 3.0;
	return average;
}
//출력함수
void Student::print()const
{
	cout << no << "\t " <<name<<"  "<< kor << "   " << mat << "   " << eng << "   " << total << "  " << avg << endl;
}