#include "Complex.h"
//메인함수
void main()
{
	Complex x(1,2), y(2, 4),z;
	
	cout << "-- 7.두 Complex 객체에 대한 곱셈 --\n";
	z = x*y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "-- 8.두 Complex 객체에 대한 뺄셈(프렌즈함수) --\n";
	z = Sub(x,y);
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "-- 9.Complex 객체를 1 감소하는 멤버함수(선행처리) --\n";
	z = x.subOnePrefix();
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 10.Complex 객체를 1 감소하는 멤버함수(후행처리) --\n";
	z = subOnePostfix(x);
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 11.두 Complex 객체에 대한 뺄셈(이항연산자 오버로딩) --\n";
	z = x - y;
	x.ShowComplex();
	y.ShowComplex();
	z.ShowComplex();

	cout << "++ 연산자 오버로딩(선행처리)\n";
	x.SetComplex(1, 2);
	z = ++x;
	x.ShowComplex();
	z.ShowComplex();

	cout << "++ 연산자 오버로딩(후행처리)\n";
	x.SetComplex(1, 2);
	z = x++;
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 연산자 오버로딩(선행처리)\n";
	x.SetComplex(1, 2);
	z = --x;
	x.ShowComplex();
	z.ShowComplex();

	cout << "-- 연산자 오버로딩(후행처리)\n";
	x.SetComplex(1, 2);
	z = x--;
	x.ShowComplex();
	z.ShowComplex();

}

//8. 두 복소수 객체를 빼는 함수
Complex Sub(const Complex &a, const Complex &b)
{
	Complex retObj;

	retObj.real = a.real - b.real;
	retObj.image = a.image - b.image;

	return retObj;
}

//10. 객체를 1만큼 감소(후행처리)
Complex subOnePostfix(Complex &a)
{
	Complex retObj;

	retObj.real = a.real--;
	retObj.image = a.image--;

	return retObj;

}

//11. 이항연산자 - 오버로딩
Complex operator- (const Complex &other, const Complex &other2)
{
	Complex retObj;

	retObj.real = other.real- other2.real;
	retObj.image = other.image - other2.image;

	return retObj;
}

//++ 연산자 선행처리
Complex & operator ++ (Complex &other)
{
	other.real++;
	other.image++;
	return other;
}

//-- 연산자 선행처리
Complex & operator -- (Complex &other)
{
	other.real--;
	other.image--;
	return other;
}
