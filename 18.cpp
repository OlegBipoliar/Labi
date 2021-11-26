#include <iostream>
using namespace std;
string fIrst = "X";
int vibranniMassiv = 1;
string colorx = "0";
string coloro = "0";
const string Standart = "0";
const string LightGray = "89";
const string Gray = "90";
const string Red = "91";
const string Green = "92";
const string Yellow = "93";
const string DarkBlue = "94";
const string Violet = "95";
const string Blue = "96";
const string White = "97";
int coorx, coory;
void pauz() {
	system("pause");
	cin.get();
}
void oshipka() {
	cin.clear();
	cin.ignore();
	cout << "ДЕБЕНЬ, ЧЕ ДЕЛАЕШЬ";
}
string nolik(string symbol) {
	if (symbol == "X") {

		return "O";
	}
	else {
		return "X";
	}

}

string a1 = "-", a2 = "-", a3 = "-", a4 = "-", a5 = "-", a6 = "-", a7 = "-", a8 = "-", a9 = "-",a10 = "-", a11 = "-", a12 = "-", a13 = "-", a14 = "-", a15 = "-", a16 = "-";

string turn = fIrst;

int WiN = 0;
void chekWin3() {
	if (a1 == a2 && a2 == a3 && a1!= "-" || a1 == a4 && a4 == a7 && a1!="-" || a1 == a5 && a5 == a9 && a1!="-" || a2 == a4 && a4 == a6 && a2!="-" || a4 == a5 && a5 == a6 && a4!= "-" || a7 == a8 && a8 == a9 && a7!="-" || a7 == a5 && a5 == a3 && a7!="-")
		WiN = 1;
}

void chekWin4() {
	if (a1 == a2 && a2 == a3 && a1 != "-" || a1 == a6 && a6 == a11 && a1 != "-" || a1 == a5 && a5 == a9 && a1 != "-" || a5 == a6 && a6 == a7 && a5 != "-" || a9 == a10 && a10 == a11 && a9 != "-" || a13 == a14 && a14 == a15 && a13 != "-"
		|| a7 == a5 && a5 == a3 && a7 != "-" || a2 == a3 && a3 == a4 && a2 != "-" || a6 == a7 && a7 == a8 && a6 != "-" || a10 == a11 && a11 == a12 && a10 != "-" || a14 == a15 && a15 == a16 && a14 != "-" ||
		a1 == a5 && a5 == a9 && a1 != "-" || a2 == a6 && a6 == a10 && a2 != "-" || a3 == a7 && a7 == a11 && a3 != "-" || a4 == a8 && a8 == a12 && a4 != "-" || a5 == a9 && a9 == a13 && a5 != "-" ||
		a6 == a10 && a10 == a14 && a6 != "-" || a7 == a11 && a11 == a15 && a7 != "-" || a8 == a12 && a12 == a16 && a8 != "-"
		|| a1 == a6 && a6 == a11 && a1 != "-" || a2 == a7 && a7 == a12 && a2 != "-" || a5 == a10 && a10 == a15 && a5 != "-" || a7 == a5 && a5 == a3 && a7 != "-" || a3 == a6 && a6 == a9 && a3 != "-" || a4 == a7 && a7 == a10 && a4 != "-" ||
		a7 == a10 && a10 == a13 && a7 != "-" || a8 == a11 && a11 == a14 && a8 != "-" || a6 == a11 && a11 == a16 && a6!="-")
		WiN = 1;

}


void tri()
{

	bool IsRanning = true;

	
	while (IsRanning)
	{
		string arr3[3][3]{ { a1,a2,a3},{a4,a5,a6},{a7,a8,a9}};
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << arr3[i][j];

			}
			cout << endl;
		}

		cout << "сообщите координаты вашего хода" << endl;

		cin >> coorx;
		cin >> coory;
		coorx--; coory--;
		while (coorx < 0 || coorx > 2 || coory < 0 || coory > 2 || arr3[coorx][coory] == "X" || arr3[coorx][coory] == "O")
		{
			oshipka();
			cout << endl;
			cin >> coorx;
			cin >> coory;
			coorx--; coory--;
		}
		if (coorx == 0 && coory == 0)
		{
			a1 = turn;
		}
		if (coorx == 0 && coory == 1)
		{
			a2 = turn;
		}
		if (coorx == 0 && coory == 2)
		{
			a3 = turn;
		}
		if (coorx == 1 && coory == 0) {
			a4 = turn;
		}
		if (coorx == 1 && coory == 1) {
			a5 = turn;
		}
		if (coorx == 1 && coory == 2) {
			a6 = turn;
		}
		if (coorx == 2 && coory == 0) {
			a7 = turn;
		}
		if (coorx == 2 && coory == 1) {
			a8 = turn;
		}
		if (coorx == 2 && coory == 2) {   // что такое рациональный и нормальный код - не знаю
			a9 = turn;

		}

		chekWin3();
		
		
		if (WiN == 1) {
			cout << "Победа";
			pauz();
			IsRanning = false;
		}


			turn = nolik(turn);	
	}

}
void chetiri() {

	bool IsRanning = true;
	while (IsRanning == true) {
		string arr4[4][4]{ {a1,a2,a3,a4} ,{a5,a6,a7,a8} ,{a9,a10,a11,a12}, {a13,a14,a15,a16} };

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				cout << arr4[i][j];

			}
			cout << endl;
		}

		cout << "сообщите координаты вашего хода" << endl;

		cin >> coorx;
		cin >> coory;
		coorx--; coory--;
		while (coorx < 0 || coorx > 3 || coory < 0 || coory > 3 || arr4[coorx][coory] == "X" || arr4[coorx][coory] == "O")
		{
			oshipka();
			cout << endl;
			cin >> coorx;
			cin >> coory;
			coorx--; coory--;
		}
		if (coorx == 0 && coory == 0)
		{
			a1 = turn;
		}
		if (coorx == 0 && coory == 1)
		{
			a2 = turn;
		}
		if (coorx == 0 && coory == 2)
		{
			a3 = turn;
		}
		if (coorx == 0 && coory == 3) {
			a4 = turn;
		}
		if (coorx == 1 && coory == 0) {
			a5 = turn;
		}
		if (coorx == 1 && coory == 1) {
			a6 = turn;
		}
		if (coorx == 1 && coory == 2) {
			a7 = turn;
		}
		if (coorx == 1 && coory == 3) {
			a8 = turn;
		}
		if (coorx == 2 && coory == 0) {   // что такое рациональный и нормальный код - не знаю
			a9 = turn;
		}
		if (coorx == 2 && coory == 1) {
			a10 = turn;
		}
		if (coorx == 2 && coory == 2) {
			a11 = turn;
		}
		if (coorx == 2 && coory == 3) {
			a12 = turn;
		}
		if (coorx == 3 && coory == 0) {
			a13 = turn;
		}
		if (coorx == 3 && coory == 1) {
			a14 = turn;
		}
		if (coorx == 3 && coory == 2) {
			a15 = turn;
		}
		if (coorx == 3 && coory == 3) {
			a16 = turn;
		}
		chekWin4();
		cin.clear();

		if (WiN == 1) {
			cout << "Победа";
			pauz();
			IsRanning = false;
		}



		turn = nolik(turn);


	}

}
void piat() {
	string arr5[5][5]{ {" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "},{" "," "," "," "," "} };
}




void rules() {
	cout << "Правила лалала правила\n\n";
	pauz();
}
// у меня поле только 3*3
void size() {
	cout << "РАЗМЕР ПОЛЯ" << endl;
	cout << "[1] - 3*3" << endl;
	cout << "[2] - 4*4" << endl;
	cout << "[3] - 5*5" << endl;
	int ssize;
	cin >> ssize;
	if (ssize > 0 && ssize < 4) {
		vibranniMassiv = ssize;
	}
	else
	{
		vibranniMassiv = 1;
		cout << " ТЫ ТУПОЙ, ИГРА БУДЕТ 3*3 ";
		cin.clear();
		cin.ignore();
	}


}

void colorX() {
	cout << "Какой хотите цвет?" << endl;
	cout << "[1] - Стандарт" << endl;
	cout << "[2] - Светло - серый" << endl;
	cout << "[3] - Серый" << endl;
	cout << "[4] - Красный" << endl;
	cout << "[5] - Зелёный" << endl;
	cout << "[6] - Жёлтый " << endl;
	cout << "[7] - Тёмно синий" << endl;
	cout << "[8] - Фиолетовый" << endl;
	cout << "[9] - Голубой" << endl;
	cout << "[10] - Белый" << endl;
	int cvet;
	cin >> cvet;

	switch (cvet)
	{
	case 1:
		colorx = Standart;
		break;
	case 2:
		colorx = LightGray;
		break;
	case 3:
		colorx = Gray;
		break;
	case 4:
		colorx = Red;
		break;
	case 5:
		colorx = Green;
		break;
	case 6:
		colorx = Yellow;
		break;
	case 7:
		colorx = DarkBlue;
		break;
	case 8:
		colorx = Violet;
		break;
	case 9:
		colorx = Blue;
		break;
	case 10:
		colorx = White;
		break;
	default:
		break;
	}
}
void colorO() {
	cout << "Какой хотите цвет?" << endl;
	cout << "[1] - Стандарт" << endl;
	cout << "[2] - Светло - серый" << endl;
	cout << "[3] - Серый" << endl;
	cout << "[4] - Красный" << endl;
	cout << "[5] - Зелёный" << endl;
	cout << "[6] - Жёлтый " << endl;
	cout << "[7] - Тёмно синий" << endl;
	cout << "[8] - Фиолетовый" << endl;
	cout << "[9] - Голубой" << endl;
	cout << "[10] - Белый" << endl;
	int cvet;
	cin >> cvet;

	switch (cvet)
	{
	case 1:
		coloro = Standart;
		break;
	case 2:
		coloro = LightGray;
		break;
	case 3:
		coloro = Gray;
		break;
	case 4:
		coloro = Red;
		break;
	case 5:
		coloro = Green;
		break;
	case 6:
		coloro = Yellow;
		break;
	case 7:
		coloro = DarkBlue;
		break;
	case 8:
		coloro = Violet;
		break;
	case 9:
		coloro = Blue;
		break;
	case 10:
		coloro = White;
		break;
	default:
		break;
	}
}




void options() {
	bool isRanning = true;
	while (isRanning) {
		cout << "НАСТРОЙКИ";
		cout << "[1] - Размер поля" << endl;
		cout << "[2] - Цвет крестика" << endl;
		cout << "[3] - Цвет нолика" << endl;
		cout << "[4] - Кто первый ходит" << endl;
		cout << "[5] - Выход" << endl;
		int opt;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			size();

			break;
		}
		case 2:
		{
			colorX();
			break;
		}
		case 3:
		{
			colorO();
			break;
		}
		case 4:
		{
			cout << "Кто будет первый?";
			cout << "[1] - X " << endl;
			cout << "[2] - 0 " << endl;
			int f;
			cin >> f;
			switch (f)
			{
			case 1:
				fIrst = "X";
				break;
			case 2:
				fIrst = "0";
				break;
			default:
				oshipka();
				break;
			}
			break;
		}
		case 5:
		{
			isRanning = false;
			pauz();
			break;
		}
		default:
			oshipka();
			break;
		}

	}
	system("cls");
}

int main() {
	setlocale(0, "");
	int menu;
	bool isRunning = true;
	while (isRunning) {
		cout << "---МЕНЮ---" << endl;
		cout << "[1] - ИГРА" << endl;
		cout << "[2] - НАСТРОЙКИ" << endl;
		cout << "[3] - ПРАВИЛА" << endl;
		cout << "[4] - ВЫХОД" << endl;

		cin >> menu;
		switch (menu)
		{
		case 1:
		{
			chetiri();
			pauz();
			break;
		}
		case 2:
		{
			options();
			break;

		}
		case 3:
		{

			rules();
			break;
		}
		case 4:
		{
			cout << "Программа остановлена!";
			isRunning = false;
		}
		default:
			oshipka();
			break;
		}










		system("cls");
	}
	return 0;
}
