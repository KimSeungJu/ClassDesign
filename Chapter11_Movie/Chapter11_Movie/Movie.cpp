#include "Movie.h"

//Movie 클래스 생성자
Movie::Movie(int a, string b, string c, string d, string e, string f)
{
	code=a;
	sub=b;
	director=c;
	member=d;
	type=e;
	day=f;
}
//정보 출력 함수
void Movie::print()
{
	cout << "\t>> 영화 정보 <<\n";
	cout << "영화코드:\t" << code <<endl;
	cout << "영화제목:\t" << sub <<endl;
	cout << "감독:    \t" << director <<endl;
	cout << "출연진:  \t" << member <<endl;
	cout << "장르:    \t" << type <<endl;
	cout << "개봉일자:\t" << day <<endl;

}