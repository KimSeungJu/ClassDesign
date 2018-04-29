#include "CosFunction.h"

//생성자
CosFunction::CosFunction(int i, int q)
{
	amp = sqrt((double)(i*i)+ (double)(q*q));
	phase = atan2((double)q , (double)i);
}

//cos 함수를 그려주는 함수
void CosFunction::Draw()
{
	double temp; // cos 값을 받을 변수
	
	for (int i = 0; i <= 360; i += 15)
	{
		temp = amp*cos(frequency*i*(pi/180.0)-phase); //cos에 라디안값 넣어줌
		printf("cos(%3d) =  %+.2lf", i, temp);
		for (int j = -amp * 10; j < temp * 10; j++)//cos 값 만큼 띄워줌 *10은 가시성을 위함
			printf(" ");
		printf("*\n");//줄바꿈
	}
}