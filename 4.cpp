#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	int number;
	cout << "[+] Месяца года\n[1]Январь\n[2]Февраль\n[3]Март\n[4]Апрель\n[5]Май\n[6]Июнь\n";
	cout << "[7]Июль\n[8]Август\n[9]Сентябрь\n[10]Октябрь\n[11]Ноябрь\n[12]Декабрь\n";
	cout << "Введите значение:";
	cin >> number;

	switch (number) {
	case 1:
		cout << "Январь";
		break;
	case 2:
		cout << "Февраль";
		break;
	case 3:
		cout << "Март";
		break;
	case 4 :
		cout << "Апрель";
		break;
	case 5:
		cout << "Май";
		break;
	case 6:
		cout << "Июнь";
		break;
	case 7:
		cout << "Июль";
		break;
	case 8:
		cout << "Август";
		break;
	case 9:
		cout << "Сентябрь";
		break;
	case 10:
		cout << "Октябрь";
		break;
	case 11:
		cout << "Ноябрь";
		break;
	case 12:
		cout << "Декабрь";
		break;
	default:
		cout << "нужно хначение от 1 до 12";
	}

	return 0;
}