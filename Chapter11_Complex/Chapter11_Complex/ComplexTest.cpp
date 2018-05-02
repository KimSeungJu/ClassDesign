#include "Complex.h"
//�����Լ�
void main()
{
	Complex x(1,2), y(2, 4),z;
	
	cout << "-- 7.�� Complex ��ü�� ���� ���� --\n";
	z = x*y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "-- 8.�� Complex ��ü�� ���� ����(�������Լ�) --\n";
	z = Sub(x,y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "-- 9.Complex ��ü�� 1 �����ϴ� ����Լ�(����ó��) --\n";
	z = x.subOnePrefix();
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 10.Complex ��ü�� 1 �����ϴ� ����Լ�(����ó��) --\n";
	z = subOnePostfix(x);
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 11.�� Complex ��ü�� ���� ����(���׿����� �����ε�) --\n";
	z = x - y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "++ ������ �����ε�(����ó��)\n";
	x.SetComplex(1, 2);
	z = ++x;
	x.ShowComplex();
	z.ShowComplex();

	cout << "++ ������ �����ε�(����ó��)\n";
	x.SetComplex(1, 2);
	z = x++;
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- ������ �����ε�(����ó��)\n";
	x.SetComplex(1, 2);
	z = --x;
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- ������ �����ε�(����ó��)\n";
	x.SetComplex(1, 2);
	z = x--;
	x.ShowComplex();
	z.ShowComplex();

}

//8. �� ���Ҽ� ��ü�� ���� �Լ�
Complex Sub(const Complex &a, const Complex &b)
{
	Complex retObj;

	retObj.real = a.real - b.real;
	retObj.image = a.image - b.image;

	return retObj;
}

//10. ��ü�� 1��ŭ ����(����ó��)
Complex subOnePostfix(Complex &a)
{
	Complex retObj;

	retObj.real = a.real--;
	retObj.image = a.image--;

	return retObj;

}

//11. ���׿����� - �����ε�
Complex operator- (const Complex &other, const Complex &other2)
{
	Complex retObj;

	retObj.real = other.real- other2.real;
	retObj.image = other.image - other2.image;

	return retObj;
}

//++ ������ ����ó��
Complex & operator ++ (Complex &other)
{
	other.real++;
	other.image++;
	return other;
}

//-- ������ ����ó��
Complex & operator -- (Complex &other)
{
	other.real--;
	other.image--;
	return other;
}
