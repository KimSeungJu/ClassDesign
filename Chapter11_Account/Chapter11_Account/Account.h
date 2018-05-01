#pragma once
#include <iostream>
#include <string>
using namespace std;

//Account Class
class Account
{
private: //멤버변수
	string accountNum;
	string name;
	int balance;

public: //멤버함수
	//생성자
	Account(string a = NULL, string b = NULL, int c = 0);
	void deposit(int);//입금함수
	void withdraw(int);//출금함수
	void getBalance() const;//현재 잔고 출력함수
	void prnAccount() const;//계좌정보 출력함수

};