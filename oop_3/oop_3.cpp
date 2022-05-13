#include <iostream>
#include "Abitur.h"
#include "Exam.h"
#include "Prikaz.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char name1[20] = "Алина";
	char adress1[9] = "Парковая";
	char Examname1[10] = "Алгебрa";
	int mark1 = 5;
	Abitur d(adress1[8], name1), & i = d;
	Exam c(mark1, Examname1), & t = c;
    int edcost1 = 50000;
	char date1[10] = "10.08.20";
	char group1[10] = "пи-3";
	Prikaz a(&c, &d, date1, edcost1, group1), & o = a;

	cout << "Выберите функцию: \n 1) Ввести с клавиатуры \n 2) Заполнить атоматически" << endl;
	int key;
	cin >> key;

	switch (key)
	{
	case(1):
		a.input();
		a.output();
		break;

	case(2):
		a.set(&c, &d, date1, edcost1, group1);
		a.output();
		break;
	default:
		cout << "Неверное значение";
		break;
	}
	return 1;
}