#include "MyString.h"
//�����Լ�
void main()
{
	MyString aStr = "Apple";
	MyString bStr = "Banana";

	cout << aStr << endl;
	cout << bStr << endl;

}
//12�� << ������ �����ε�
ostream & operator << (ostream &os, MyString &a)
{
	os << a.data;
	return os;
}