#include "file.h"

Person::Person(string _name, string _surname, int _year) {  //����������� � �����������
    //����� ����� ������� 3 �������(3 ����������)
	name = _name;
	surname = _surname;
	year = _year;
}

Person & Person::operator=(const Person &o) { //�������� ������������
	this->name = o.name, this->surname = o.surname, this->year = o.year;
	return *this;
}

bool Person::operator==(const Person &r) const { //�������� �������������
	return ((this->name == r.name) && (this->surname == r.surname) && (this->year == r.year));
}

bool Person::operator<(const Person &r) const { // �������� ���������
	return ((this->name < r.name) && (this->surname < r.surname) && (this->year < r.year));
}

bool Person::operator>(const Person &r) const { // �������� ���������
	return ((this->name > r.name) && (this->surname > r.surname) && (this->year > r.year));
}

bool Person::operator<=(const Person &r) const { // �������� ���������
	return ((this->name <= r.name) && (this->surname <= r.surname) && (this->year <= r.year));
}

bool Person::operator>=(const Person &r) const { // �������� ���������
	return ((this->name >= r.name) && (this->surname >= r.surname) && (this->year >= r.year));
}

bool Person::operator!=(const Person &r) const { //�������� �����������������
	return ((this->name != r.name) && (this->surname != r.surname) && (this->year != r.year));
}
