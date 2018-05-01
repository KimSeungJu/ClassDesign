#include "MyString.h"
//메인함수
void main()
{
	MyString aStr = "Apple";
	MyString bStr = "Banana";

	cout << aStr << endl;
	cout << bStr << endl;

}
//12번 << 연산자 오버로딩
ostream & operator << (ostream &os, MyString &a)
{
	os << a.data;
	return os;
}