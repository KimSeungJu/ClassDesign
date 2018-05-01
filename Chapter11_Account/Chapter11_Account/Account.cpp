#include "Account.h"
//생성자
Account::Account(string a, string b, int c)
{
	accountNum = a;
	name=b;
	balance=c;
	
}
void Account::deposit(int d)//입금
{
	cout << accountNum << "계좌에 " << d << "원 입금\n";
	balance += d;
}
void Account::withdraw(int w)//출금
{
	if (balance >= w)
	{
		cout << accountNum << "계좌에서 " << w << "원 출금\n";
		balance -= w;
	}
}
void Account::getBalance()const//현재 잔고 출력
{
	cout << accountNum << "계좌의 현재 잔고는 " << balance << "입니다.\n";
}
void Account::prnAccount()const//계좌정보 출력
{
	cout << "계좌정보 : 계좌번호 :" << accountNum << " 계좌 소유주 이름 : " << name << " 잔고 : " << balance << endl;

}