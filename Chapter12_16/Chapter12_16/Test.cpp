#include "Circle.h"
#include "Rect.h"

void main()
{
	Rect rect(30, 50);
	cout << "���� ���� ���̰� 30, 50�� �簢���� ���� : "
		<< rect.CalcArea() << endl;
	
	Circle circle(5.0);
	cout << "�������� 5�� ���� ���� : "
		<< circle.CalcArea() << endl;

}
