#include <iostream>

using namespace std;
int main()
{
	setlocale(0, "");
	int menu;

	while (true) {
		cout << "[+] - Геометрические фигуры;" << endl;
		cout << "[+] - Выберите фигуру : " << endl;
		cout << "[1] - Линия" << endl << "[2] - Квадрат" << endl<<  "[3] - Прямоугольник "<< endl<<"[4] - Треугольник"<< endl<<"[5] - Решетка"<< endl<<"[6] - Крест"<< endl<<"[7] - Плюс"<< endl<<"[8] - Выход"<< endl<<"[-] - Выберите действие : ";
		cin >> menu;

		if (menu < 1 || menu > 8) {
			cin.clear();
			cin.ignore();
			cout << "ошибка" << endl;
		}
		else {
			break;
		}
	}

	char tex;

	system("cls");

	switch (menu)
	{
	case 1: {

		int size;
		int nap;

		cout << "[+]Фигура ЛИНИЯ";

		while (true) {
			cout << "Укажите направление линии" << endl;
			cout << "[1] - Горизонтальная" << endl << "[2] - Вертикальная " << endl;
			cin >> nap;

			if (nap != 1 && nap != 2) {
				cin.clear();
				cin.ignore();
				cout << endl << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		while (true) {
			cout << endl << "Укажите размер линии ( размер не может быть меньше 0 и не больше 250)";
			cout << "Размер линии : ";
			cin >> size;

			if (size < 1 || size > 250) {
				cin.clear();
				cin.ignore();
				cout << endl << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру линии";
		cout << endl << "Текстура линии : ";
		cin >> tex;

		system("cls");

		switch (nap)
		{
		case 1: {
			for (int i = 0; i < size; i++)
			{
				cout << tex << " ";
			}
			break;
		}

		case 2: {
			for (int i = 0; i < size; i++)
			{
				cout << tex << endl;
			}
			break;
		}
		}
		break;
	}

	case 2: {
		int size;

		cout << "[+] - Фигура КВАДРАТ";

		while (true) {
			cout << "Укажите размер квадрата (значение не может быть меньше 1 и больше 250" << endl;
			cout << "Размер квадрата : ";
			cin >> size;

			if (size < 1 || size > 250) {
				cin.clear();
				cin.ignore();
				cout << endl << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру квадрата.";
		cout << endl << "Текстура квадрата : ";
		cin >> tex;

		int full;

		while (true) {
			cout << endl << "Полный ли квадрат?";
			cout << "[1] - Да" << endl<< "[2] - Нет" << endl;
			cin >> full;

			if (full < 1 || full > 2) {
				cin.clear();
				cin.ignore();
				cout << endl << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		system("cls");

		switch (full) {
		case 1: {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cout << tex << " ";
				}
				cout << endl;
			}
			break;
		}

		case 2: {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
						cout << tex << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		}
		break;
	}

	case 3: {
		cout << "[+] - Фигура ПРЯМОУГОЛЬНИК" << endl;

		int xSize;
		int ySize;

		while (true) {
			cout << "Укажите размеры прямоугольник через пробел (значение не может быть меньше 1 и больше 250" <<  endl << "Размер прямоугольника : ";
			cin >> xSize;
			cin >> ySize;

			if (xSize < 1 || ySize < 1 || xSize > 250 || ySize > 250) {
				cin.clear();
				cin.ignore();
				cout << endl << "ошибка" << endl;;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру прямоугольника" << endl << "Текстура прямоугольника : ";
		cin >> tex;

		int full;

		while (true) {
			cout << "Заполнять прямоугольник? [1] - Да "<< endl <<  "[2] - Нет " << endl;
			cin >> full;
			if (full < 1 || full > 2) {
				cin.clear();
				cin.ignore();
				cout << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		system("cls");

		switch (full) {
		case 1: {
			for (int i = 0; i < ySize; i++) {
				for (int j = 0; j < xSize; j++) {
					cout << tex << " ";
				}
				cout << endl;
			}
			break;
		}

		case 2: {
			for (int i = 0; i < ySize; i++) {
				for (int j = 0; j < xSize; j++) {
					if (i == 0 || i == ySize - 1 || j == 0 || j == xSize - 1) {
						cout << tex << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		}
		break;
	}

	case 4: {
		int heig;

		cout << "[+] - Фигура ТРЕУГОЛЬНИК";

		while (true) {
			cout << "Укажите высоту треугольника. (высота не может быть меньше 1 и больше 250" << endl << "Высота треугольника : ";
			cin >> heig;
			if (heig < 1 || heig > 250) {
				cin.clear();
				cin.ignore();
				cout << endl <<  "ошибка" << endl;
			}
			else {
				break;
			}
		}

		int size = 2 * (heig - 1) + 1;

		cout << "Укажите текстуру треугольника" << endl << "Текстура треугольника : ";
		cin >> tex;

		int full;

		while (true) {
			cout << "Заполнять треугольник? " << endl << "[1] - Да" << endl << "[2] - Нет";
			cin >> full;
			if (full < 1 || full > 2) {
				cin.clear();
				cin.ignore();
				cout << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		system("cls");

		switch (full) {
		case 1: {
			for (int i = 1; i <= heig; i++) {
				for (int j = 0; j < size; j++) {
					if (j <= size / 2 - i || j >= size / 2 + i) {
						cout << "  ";
					}
					else {
						cout << tex << " ";
					}
				}
				cout << endl;
			}
			break;
		}

		case 2: {
			for (int i = 0; i < heig; i++) {
				for (int j = 0; j < size; j++) {
					if (j == size / 2 - i || j == size / 2 + i || i == heig - 1) {
						cout << tex << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		}
		}
		break;
	}
	case 5: {
		int size;

		cout << "[+] - Фигура РЕШЁТКА";

		while (true) {
			cout << "Укажите нечетный размер решетки.( размер не может быть меньше 1 и больше 250) " << endl <<  "Размер решетки : ";
			cin >> size;

			if (size < 1 || size % 2 == 0 || size > 250) {
				cin.clear();
				cin.ignore();
				cout << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру решетки." << endl << "Текстура : ";
		cin >> tex;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i % 2 == 1 || j % 2 == 1) {
					cout << tex << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}

		break;

	}
	case 6: {
		int size;

		cout << "[+] - Фигура КРЕСТ" << endl;

		while (true) {
			cout << "Укажите размер креста (размер не может быть меньше 1 и больше 250)" << endl << "Размер : ";
			cin >> size;

			if (size < 1 || size > 250) {
				cin.clear();
				cin.ignore();
				cout << "ошибка" << endl;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру креста" << endl << "Текстура креста : ";
		cin >> tex;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == j || size - 1 - j == i) {
					cout << tex << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	}
	case 7: {
		int size;

		cout << "[+] - Фигура ПЛЮС";

		while (true) {
			cout << "Укажите нечетный размер плюса.(размер не может быть меньше 1 и больше 250) " << endl << "Размер плюса : ";
			cin >> size;

			if (size < 1 || size % 2 == 0 || size > 250) {
				cin.clear();
				cin.ignore();
				cout << endl<< "ошибка" << endl;
			}
			else {
				break;
			}
		}

		cout << endl << "Укажите текстуру плюса : " << endl;
		cin >> tex;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (size / 2 == i || size / 2 == j) {
					cout << tex << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
		break;
	}
	case 8: {
		cout << endl <<  "Всего хорошего";
		break;
	}
	}
}