#pragma once
class Exam {
	char* Examname;
	int mark;
public:
	void input();
	int getmark();
	const char* getname();
	Exam (int number, char* name);
};