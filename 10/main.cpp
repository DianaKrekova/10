#include "Ex10.h"

int main() {
	setlocale(LC_ALL, "rus");
	cout << "Creating an object of the abstract Human class: \n";
	Human H("hi", "im", "human", 10);
	H.print();
	cout << "Creating an object of the Student inheritor class: \n";
	Student S("hi", "im", "Student", 15, 1);
	S.print();
	cout << "Creating an object of the Boss inheritor class: \n";
	Boss B("hi", "im", "boss", 20, 200);
	B.print();
}