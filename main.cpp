#include "file.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("title Persons");

	Person worker1("Город1","Страна1",1987);
	Person worker2("Город2","Страна2",1978);
	Person worker3("Город3","Страна3",1968);

	cout << worker1;
	cout << worker2;
	cout << worker3;

	cout << "\nПрименяем оператор присванивания: " << endl;
	worker2 = worker1;
	cout << "worker1: " << worker1;
	cout << "worker2: " << worker2;

	cout << "\nПрименяем оператор сравнения: " << endl;
	if (worker1 == worker2) {
		cout << "worker1 == worker2\n";
	} else {
		cout << "worker1 != worker2\n";
	}

	cout << "\nПрименяем оператор !cравнения: " << endl;
	if (worker1 != worker3) {
		cout << "worker1 != worker3\n";
	} else {
		cout << "worker1 == worker3\n";
	}

	cout << "\nПрименяем оператор > сравнения: " << endl;
	if (worker1 > worker3) {
		cout << "worker1 > worker3\n";
	} else {
		cout << "worker1 < worker3\n";
	}

	cout << "\nПрименяем оператор < сравнения: " << endl;
	if (worker1 < worker3) {
		cout << "worker1 < worker3\n";
	} else {
		cout << "worker1 > worker3\n";
	}

	cout << "\nПрименяем оператор >= сравнения: " << endl;
	if (worker1 >= worker3) {
		cout << "worker1 >= worker3\n";
	} else {
		cout << "worker1 <= worker3\n";
	}

	cout << "\nПрименяем оператор <= сравнения: " << endl;
	if (worker1 <= worker3) {
		cout << "worker1 <= worker3\n";
	} else {
		cout << "worker1 >= worker3\n";
	}

	cout << "\nПрименяем оператор ввода >> для worker1: " << endl;
	cin >> worker1;

	cout << "\nПрименяем оператор вывода << для worker1: " << endl;
	cout << worker1;

	return 0;
}
