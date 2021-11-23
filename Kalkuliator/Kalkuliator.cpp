#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-] КАЛЬКУЛЯТОР" << endl << endl;
	cout << "[+] СЛОЖЕНИЕ" << endl;
	cout << "[-] ВЫЧИТАНИЕ" << endl;
	cout << "[*] УМНОЖЕНИЕ" << endl;
	cout << "[/] ДЕЛЕНИЕ" << endl;
	cout << "[%] ДЕЛЕНИЕ ОТ ОСТАТКА" << endl;

	cout << "Какую операцию хотите произвести? \nВведите знак операции." << endl;
	char oper;
	cin >> oper;

	float num1;
	float num2;
	float rez;

	if (oper == '+') {
		cout << "Введите два числа через пробел или enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 + num2;
		cout << "Результат: " << rez << endl;
	}
	else if (oper == '-') {
		cout << "Введите два числа через пробел или enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 - num2;
		cout << "Результат: " << rez << endl;
	}
	else if (oper == '*') {
		cout << "Введите два числа через пробел или enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 * num2;
		cout << "Результат: " << rez << endl;
	}
	else if (oper == '/') {
		if (num2 == 0) {
			cout << "На ноль не делим,сори";
			int _;
			cin >> _;
			exit(0);

		}
		else {
			cout << "Введите два числа через пробел или enter: ";
			cin >> num1;
			cin >> num2;
			rez = num1 / num2;
			cout << "Результат: " << rez << endl;
		}
	}
	else if (oper == '%') {
		cout << "Введите два числа через пробел или enter: ";
		cin >> num1;
		cin >> num2;
		rez = (int)num1 % (int)num2;
		cout << "Результат: " << rez << endl;
		int _;
		cin >> _;
		exit(0);
	}
	else {
		cout << "Ты что ввёл, а? не правильно";
	}



	return 0;
}