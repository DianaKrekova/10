#ifndef EX10_H
#define EX10_H
#include <iostream>
using namespace std;

class Human
{
public:
	Human();
	Human(string s, string n, string m, int a);
	virtual void print();
	~Human();
private:
	string surname;
	string name;
	string midname;
	int age;
};

class Student:public Human
{
public:
	Student();
	Student(string s, string n, string m, int a, bool ol);
	void print() override;
	~Student();
private:
	bool on_lesson;
};

class Boss:public Human
{
public:
	Boss();
	Boss(string s, string n, string m, int a, int now);
	void print() override;
	~Boss();
private:
	int number_of_workers;
};
#endif