#include "Ex10.h"

Human::Human()
{
	surname = "";
	name = "";
	midname = "";
	age = 0;
}

Human::Human(string s, string n, string m, int a)
{
	surname = s;
	name = n;
	midname = m;
	age = a;
}

Human::~Human()
{
}

Student::Student():Human()
{
	on_lesson = 0;
}

Student::Student(string s, string n, string m, int a, bool ol) : Human{ s, n, m, a }
{
	on_lesson = ol;
}

void Student::print()
{
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Midname: " << midname << endl;
	cout << "Age: " << age << endl;
	cout << '\n';
	cout << "At the lesson? \n";
	if (on_lesson) {
		cout << "Yes\n";
	}
	else cout << "No\n";
	cout << '\n';
}

Student::~Student()
{
}

Boss::Boss():Human()
{
	number_of_workers = 0;
}

Boss::Boss(string s, string n, string m, int a, int now) : Human{ s, n, m, a }, number_of_workers(now)
{
	number_of_workers = now;
}

void Boss::print()
{
	cout << "Surname: " << surname << endl;
	cout << "Name: " << name << endl;
	cout << "Midname: " << midname << endl;
	cout << "Age: " << age << endl;
	cout << '\n';
	cout << "Number of employees: " << number_of_workers << endl;
	cout << '\n';
}

Boss::~Boss()
{
}
