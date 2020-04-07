#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Person {
private:
	string name, surname;
	int year;
public:
	Person(string, string, int);
    //перегрузка операторов
	Person & operator=(const Person &obj);
	bool operator==(const Person &r) const;
	bool operator<(const Person &r) const;
	bool operator>(const Person &r) const;
	bool operator<=(const Person &r) const;
	bool operator>=(const Person &r) const;
	bool operator!=(const Person &r) const;
    //friend перед функцией используется, чтобы дать право этой функции
    //взаимодействовать с закрытыми членами класса (private, protected)
	friend ostream & operator<<(ostream &s, Person const &obj) { //оператор вывода обьекта "<<"
		s << obj.name << "  " << obj.surname << "  " << obj.year << endl;
	}

	friend istream & operator>>(istream &s, Person &obj) {    //оператор ввода обьекта ">>"
		getline(cin, obj.name);
		getline(cin, obj.surname);
		cin >> obj.year;
	}
};

#endif
