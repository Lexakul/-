#include <iostream>
#include "Prikaz.h"
using namespace std;

void Prikaz::set(Exam* c0, Abitur* d0, char date1[10], int edcost1, char* group1)
{
	c = c0;
	d = d0;
	strcpy_s(date, date1);
	group = group1;
	edcost = edcost1;
}
Prikaz::Prikaz(Exam* c0, Abitur* d0, char date1[10], int mark1, char* group)
{
	set(c0, d0, date1, mark1, group);
}
void Prikaz::input()
{
	c->input();
	d->input();
	char bufer[256];
	cout << "Название приказа: ";
	cin >> bufer;
	group = new char[strlen(bufer) + 1];
	strcpy_s(group, strlen(bufer) + 1, bufer);
	cout << "Дата приема: ";
	cin >> date;
	cout << "Стоимость обучения: ";
	cin >> edcost;
}
void Prikaz::output()
{
	cout << "Группа: " << group << "\n";
	cout << "Дата приема: " << date << "\n";
	cout << "Стоимость обучения: " << edcost << "\n";
	cout << "Название экзамена: " << c->getname() << "\n";
	cout << "Оценка: " << c->getmark() << "\n";
	cout << "Имя абитуриента: " << d->getname() << "\n";
	cout << "Адрес: " << d->getadress() << "\n";
}
