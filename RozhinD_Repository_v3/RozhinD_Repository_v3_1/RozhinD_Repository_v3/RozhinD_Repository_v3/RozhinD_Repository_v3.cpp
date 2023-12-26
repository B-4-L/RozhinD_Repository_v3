#include <iostream>

using namespace std;

int Vvestichislo() {
	int nomer;
	cout << "Введите натуральное число Х: ";
	cin >> nomer;
	return nomer;
}

int Maxchislo(int nomer) {

}
int Minchislo(int nomer) {

}

int main() {
	int chislo;
	int nomer;

	cout << "Meню выборa:" << endl;
	cout << "1. Ввести натуральное число X" << endl;
	cout << "2. Найти наибольшую цифру в записи числа X" << endl;
	cout << "3. Найти наименьшую цифру в записи числа X" << endl;
	cout << "Выберите пункт меню: ";
	cin >> chislo;

	switch (chislo) {
	case 1:
		nomer = Vvestichislo();
		break;
	case 2:
		cout << "Наибольшая цифра в записи числа Х" << Maxchislo(nomer) << std::endl;
		break;
	case 3:
		cout << "Наименьшая цифра в записи числа Х:" << Minchislo(nomer) << std::endl;
		break;
	default:
		return 0;
		cout << "Heвeрный выбор" << endl;
	}
}