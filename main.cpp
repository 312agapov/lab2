#include "file.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("title Persons");

	Person worker1("�����1","������1",1987);
	Person worker2("�����2","������2",1978);
	Person worker3("�����3","������3",1968);

	cout << worker1;
	cout << worker2;
	cout << worker3;

	cout << "\n��������� �������� �������������: " << endl;
	worker2 = worker1;
	cout << "worker1: " << worker1;
	cout << "worker2: " << worker2;

	cout << "\n��������� �������� ���������: " << endl;
	if (worker1 == worker2) {
		cout << "worker1 == worker2\n";
	} else {
		cout << "worker1 != worker2\n";
	}

	cout << "\n��������� �������� !c��������: " << endl;
	if (worker1 != worker3) {
		cout << "worker1 != worker3\n";
	} else {
		cout << "worker1 == worker3\n";
	}

	cout << "\n��������� �������� > ���������: " << endl;
	if (worker1 > worker3) {
		cout << "worker1 > worker3\n";
	} else {
		cout << "worker1 < worker3\n";
	}

	cout << "\n��������� �������� < ���������: " << endl;
	if (worker1 < worker3) {
		cout << "worker1 < worker3\n";
	} else {
		cout << "worker1 > worker3\n";
	}

	cout << "\n��������� �������� >= ���������: " << endl;
	if (worker1 >= worker3) {
		cout << "worker1 >= worker3\n";
	} else {
		cout << "worker1 <= worker3\n";
	}

	cout << "\n��������� �������� <= ���������: " << endl;
	if (worker1 <= worker3) {
		cout << "worker1 <= worker3\n";
	} else {
		cout << "worker1 >= worker3\n";
	}

	cout << "\n��������� �������� ����� >> ��� worker1: " << endl;
	cin >> worker1;

	cout << "\n��������� �������� ������ << ��� worker1: " << endl;
	cout << worker1;

	return 0;
}
