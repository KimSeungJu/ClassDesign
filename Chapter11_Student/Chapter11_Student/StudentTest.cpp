#include "Student.h"
//¸ŞÀÎ ÇÔ¼ö
void main()
{
	Student stu1(1,"È²¼øÇı",99,80,95);
	Student stu2(2,"ÀÌ¹Î¿ì", 60, 80, 90);
	Student stu3(3, "±è´öÀ±", 85, 70, 90);
	cout << "ÇĞ»ı¹øÈ£ ÀÌ¸§   ±¹¾î ¿µ¾î ¼öÇĞ ÃÑÁ¡ Æò±Õ\n";
	stu1.print();
	stu2.print();
	stu3.print();
}