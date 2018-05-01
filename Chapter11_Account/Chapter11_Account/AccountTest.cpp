#include "Account.h"

//메인함수
void main()
{
	Account acc1("360-20-332921", "김선미", 45000);
	acc1.prnAccount();
	Account acc2("549-45-213942", "이지연", 65000);
	acc2.prnAccount();
	Account acc3("280-13-451345", "임현아", 5000);
	acc3.prnAccount();

	acc1.deposit(100000);
	acc1.withdraw(30000);
	acc2.deposit(400000);
	acc1.getBalance();
	acc2.getBalance();
}