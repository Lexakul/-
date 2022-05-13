#include "Abitur.h"
#include <iostream>

using namespace std;
char Abitur::getadress()
{
	return adress[14];
}
const char* Abitur::getname()
{
	return name;
}
Abitur::Abitur(char _adress, char* _name)
{
	adress[14] = _adress;
	strcpy_s(name, _name);
}
void Abitur::input()
{
	cout << "Имя абитуриента: ";
	cin >> name;
	cout << "Адрес: ";
	cin >> adress;
}