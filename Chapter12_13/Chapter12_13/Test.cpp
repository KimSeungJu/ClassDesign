#include "Person.h"
#include "Customer.h"

void main()
{
	Person one("홍길동", "서울시 광진구", "000-0000-0000");
	one.print();
	Customer two("삼다수", "서울시 송파구","123-456-7890","dasu",0);
	two.print();
}