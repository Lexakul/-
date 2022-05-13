#pragma once
#include "Exam.h"
#include "Abitur.h"
class Prikaz {
	Exam* c;
	Abitur* d;
	char date[10];
	int edcost;
	char* group;
public:
	void input();
	void output();
	Prikaz(Exam* c0, Abitur* d0, char date1[10], int mark1, char* group1);
	void set(Exam* c0, Abitur* d0, char date1[10], int mark1, char* group1);
};
