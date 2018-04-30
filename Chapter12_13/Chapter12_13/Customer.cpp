#include "Customer.h"

Customer::Customer()
{
	//기본 생성자 널 값만, char은 대입이 안됨
	strcpy(name, "");
	strcpy(address, "");
	strcpy(phone, "");
	strcpy(id, "");
	point = 0;
}

Customer::Customer(char *name, char *address, char *phone ,char *id, int point)
{
	strcpy(this->name, name);
	strcpy(this->address, address);
	strcpy(this->phone, phone);
	strcpy(this->id, phone);
	this->point = point;
}

void Customer::print()
{
	cout << "이름	 : " << name << endl;
	cout << "주소	 : " << address << endl;
	cout << "휴대폰 번호 : " << phone << endl;
	cout << "아이디 : " << id << endl;
	cout << "포인트 점수 : " << point << endl;
}