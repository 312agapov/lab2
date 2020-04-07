#include "file.h"

Person::Person(string _name, string _surname, int _year) {  //конструктор с параметрами
    //нужен чтобы создать 3 обьекта(3 работников)
	name = _name;
	surname = _surname;
	year = _year;
}

Person & Person::operator=(const Person &o) { //оператор присваивания
	this->name = o.name, this->surname = o.surname, this->year = o.year;
	return *this;
}

bool Person::operator==(const Person &r) const { //оператор приравнивания
	return ((this->name == r.name) && (this->surname == r.surname) && (this->year == r.year));
}

bool Person::operator<(const Person &r) const { // оператор сравнения
	return ((this->name < r.name) && (this->surname < r.surname) && (this->year < r.year));
}

bool Person::operator>(const Person &r) const { // оператор сравнения
	return ((this->name > r.name) && (this->surname > r.surname) && (this->year > r.year));
}

bool Person::operator<=(const Person &r) const { // оператор сравнения
	return ((this->name <= r.name) && (this->surname <= r.surname) && (this->year <= r.year));
}

bool Person::operator>=(const Person &r) const { // оператор сравнения
	return ((this->name >= r.name) && (this->surname >= r.surname) && (this->year >= r.year));
}

bool Person::operator!=(const Person &r) const { //оператор антиприравнивания
	return ((this->name != r.name) && (this->surname != r.surname) && (this->year != r.year));
}
