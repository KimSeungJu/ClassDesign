#include "Movie.h"

//Movie Ŭ���� ������
Movie::Movie(int a, string b, string c, string d, string e, string f)
{
	code=a;
	sub=b;
	director=c;
	member=d;
	type=e;
	day=f;
}
//���� ��� �Լ�
void Movie::print()
{
	cout << "\t>> ��ȭ ���� <<\n";
	cout << "��ȭ�ڵ�:\t" << code <<endl;
	cout << "��ȭ����:\t" << sub <<endl;
	cout << "����:    \t" << director <<endl;
	cout << "�⿬��:  \t" << member <<endl;
	cout << "�帣:    \t" << type <<endl;
	cout << "��������:\t" << day <<endl;

}