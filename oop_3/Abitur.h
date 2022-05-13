#pragma once
class Abitur {
	char name[20];
	char adress[15];
public:
	Abitur(char _adress, char* _name);
	void input();
	const char* getname();
	char getadress();
};