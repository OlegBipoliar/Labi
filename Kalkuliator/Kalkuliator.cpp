#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-] �����������" << endl << endl;
	cout << "[+] ��������" << endl;
	cout << "[-] ���������" << endl;
	cout << "[*] ���������" << endl;
	cout << "[/] �������" << endl;
	cout << "[%] ������� �� �������" << endl;

	cout << "����� �������� ������ ����������? \n������� ���� ��������." << endl;
	char oper;
	cin >> oper;

	float num1;
	float num2;
	float rez;

	if (oper == '+') {
		cout << "������� ��� ����� ����� ������ ��� enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 + num2;
		cout << "���������: " << rez << endl;
	}
	else if (oper == '-') {
		cout << "������� ��� ����� ����� ������ ��� enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 - num2;
		cout << "���������: " << rez << endl;
	}
	else if (oper == '*') {
		cout << "������� ��� ����� ����� ������ ��� enter: ";
		cin >> num1;
		cin >> num2;
		rez = num1 * num2;
		cout << "���������: " << rez << endl;
	}
	else if (oper == '/') {
		if (num2 == 0) {
			cout << "�� ���� �� �����,����";
			int _;
			cin >> _;
			exit(0);

		}
		else {
			cout << "������� ��� ����� ����� ������ ��� enter: ";
			cin >> num1;
			cin >> num2;
			rez = num1 / num2;
			cout << "���������: " << rez << endl;
		}
	}
	else if (oper == '%') {
		cout << "������� ��� ����� ����� ������ ��� enter: ";
		cin >> num1;
		cin >> num2;
		rez = (int)num1 % (int)num2;
		cout << "���������: " << rez << endl;
		int _;
		cin >> _;
		exit(0);
	}
	else {
		cout << "�� ��� ���, �? �� ���������";
	}



	return 0;
}