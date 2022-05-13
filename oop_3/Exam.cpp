
#include <iostream>
#include "Exam.h"
using namespace std;

Exam::Exam(int number, char* name)
{
	mark = number;
	Examname = name;
}
int Exam::getmark()
{
	return mark;
}
const char* Exam::getname()
{
	return Examname;
}
void Exam::input()
{
	char bufer[256];
	cout << "Название экзамена: ";
	cin >> bufer;
	Examname = new char[strlen(bufer) + 1];
	strcpy_s(Examname, strlen(bufer) + 1,bufer);
	cout << "Оценка: ";
	cin >> mark;
}