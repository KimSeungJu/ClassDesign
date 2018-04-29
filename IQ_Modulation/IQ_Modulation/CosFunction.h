#pragma once
//IQ Mod를 상속받아 cos 함수를 생성하는 함수
#include "IQmod.h"
#include <math.h>

//I(t)cos2pift = sqrt(I^2+Q^2) * cos(2pift - tan^-1(Q/I))
class CosFunction : public IQmod {

private :
	double amp; // sqrt(I^2+Q^2)
	double phase; // tan^-1(Q/I)
	double frequency = 1; //주파수 값은 편의를 위해 1로 둠
	const double pi = 3.14; //파이값

public:
	//생성자
	CosFunction(int i = 0, int q = 0);

	//cos 함수를 그려주는 함수
	void Draw();

};