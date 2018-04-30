#include "Circle.h"
#include "Rect.h"

void main()
{
	Rect rect(30, 50);
	cout << "가로 세로 길이가 30, 50인 사각형의 면적 : "
		<< rect.CalcArea() << endl;
	
	Circle circle(5.0);
	cout << "반지름이 5인 원의 면적 : "
		<< circle.CalcArea() << endl;

}
