#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	while (true) {


		cout << "ЛАБИРИНТ" << endl;
		cout << "Выберете размер лабиринта:" << endl << "[1] - 15*15 " << endl << "[2] - 20*20" << endl << "[3] - 30*30" << endl << "[4] - Выход" << endl;
		int menu;

		cin >> menu;
		if (menu < 1 || menu > 4) {
			cin.clear();
			cin.ignore();
			cout << "введите нормальне значение";
		}
		else {
		switch (menu)
		{
		case 1: {
			system("cls");
			int sizex = 15;
			int sizey = 15;

			int arr[15][15]{
				{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,0,0,1,0,0,0,0,0,0,0,0,0,0,1},
				{1,0,1,1,0,1,1,0,1,1,1,1,1,0,1},
				{1,0,1,1,0,1,1,0,1,1,0,0,1,0,1},
				{1,0,1,1,0,1,1,0,1,1,0,1,1,0,1},
				{1,0,0,0,0,1,1,0,1,1,0,0,0,0,1},
				{1,0,1,1,1,1,1,0,1,1,0,1,1,1,1},
				{1,0,1,1,1,1,1,0,1,1,0,1,0,0,1},
				{1,0,0,0,0,1,1,0,1,1,0,1,0,1,1},
				{1,0,1,1,1,1,1,0,1,1,0,1,0,1,1},
				{1,0,1,1,1,1,1,0,1,1,0,0,0,1,1},
				{1,1,0,0,0,0,0,0,1,1,1,1,1,1,1},
				{1,1,0,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,1,0,0,0,0,0,0,0,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,0,1},
			};
			for (int i = 0; i < sizex; i++) {
				for (int q = 0; q < sizey; q++) {
					if (arr[i][q] == 1) {
						cout << "# ";
					}
					else {

						cout << "  ";
					}

				} cout << endl;
			}
			cout << endl;
		}
			  break;
		case 2: {
			system("cls");
			const int sizex = 20;
			const int sizey = 20;

			int arr[sizex][sizey]{
				{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,0,0,0,1,1,1,0,0,0,0,1,1,1,1,1,0,1,1,1},
				{1,1,1,0,1,1,1,0,1,1,0,1,1,1,1,1,0,0,0,1},
				{1,0,0,0,1,0,0,0,1,1,0,0,0,0,0,1,1,1,0,1},
				{1,0,1,1,1,0,1,1,1,1,0,1,1,1,0,1,1,1,0,1},
				{1,0,1,1,1,0,1,1,0,0,0,1,1,1,0,1,0,0,0,1},
				{1,0,1,0,0,0,1,1,0,1,1,1,1,1,0,1,1,0,1,1},
				{1,0,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1},
				{1,0,1,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,1,1},
				{1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0,1,1},
				{1,0,0,0,1,1,0,0,0,1,1,1,0,1,1,1,1,0,1,1},
				{1,1,1,0,1,1,0,1,1,1,1,1,0,1,1,1,1,0,1,1},
				{1,0,0,0,1,1,0,1,1,0,0,0,0,0,0,0,1,0,1,1},
				{1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,0,1,0,1,1},
				{1,0,0,0,0,0,0,1,1,0,1,0,0,1,1,0,1,0,1,1},
				{1,1,1,1,1,1,1,1,1,0,1,1,0,0,1,0,0,0,1,1},
				{1,0,1,0,0,0,0,0,0,0,1,1,1,0,1,1,0,1,1,1},
				{1,0,1,0,1,1,0,1,1,1,1,1,1,0,0,0,0,1,1,1},
				{1,0,0,0,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1},
				{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1},
			};
			for (int i = 0; i < sizex; i++) {
				for (int q = 0; q < sizey; q++) {
					if (arr[i][q] == 1) {
						cout << "# ";
					}
					else {

						cout << "  ";
					}

				} cout << endl;
			}
			cout << endl;
		}
			  break;
		case 3: {
			system("cls");
			const int sizex = 30;
			const int sizey = 30;

			int arr[sizex][sizey]{
				{1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
				{1,0,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,0},
				{1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,1,1,1,1,0,1,1,0,1},
				{1,0,1,0,1,1,1,0,1,1,0,0,0,0,1,0,1,1,0,0,1,1,1,1,1,0,1,1,0,1},
				{1,0,1,0,0,1,0,0,1,1,1,1,1,0,1,0,1,1,1,0,1,0,0,0,1,0,1,1,0,1},
				{1,0,1,1,0,1,0,1,0,0,0,0,0,0,1,0,1,1,1,0,1,0,1,0,1,0,0,0,0,1},
				{1,0,1,1,0,1,0,1,0,1,1,1,1,1,1,0,1,1,0,0,1,0,1,0,1,1,1,1,1,1},
				{1,0,1,1,0,1,0,1,0,0,0,1,1,0,0,0,1,1,0,1,1,0,1,0,1,1,1,1,1,1},
				{1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,1,1,1,0,1,1,0,1,0,1,1,1,1,1,1},
				{1,0,1,1,0,1,0,0,0,0,0,1,0,0,1,1,1,1,0,0,0,0,1,0,1,1,1,1,1,1},
				{1,0,1,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1},
				{1,0,1,0,1,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,1},
				{1,0,1,0,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,1,0,1,1,0,0,0,1},
				{1,0,1,0,1,1,1,1,1,0,1,1,0,0,0,1,0,1,1,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,1,0,0,0,1,1,1,0,1,1,0,1,0,1,0,0,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,1,1,1,0,1,1,1,0,0,0,0,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,1,1,1,0,1,1,1,1,1,1,1,1,0,1,1,1,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,1,1,1,0,0,0,1,1,1,1,0,0,0,0,1,1,0,1,0,1,1,0,0,0,0,1,0,1},
				{1,0,0,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,0,1,0,1},
				{1,0,0,0,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,1,0,1,0,1},
				{1,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1},
				{1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,1,1,1,0,1,0,1},
				{1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,0,1,0,1,0,1,1,1,0,1,0,1},
				{1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,1,0,1,0,1},
				{1,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,1,0,1},
				{1,1,0,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1},
				{1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1},
				{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			};
			for (int i = 0; i < sizex; i++) {
				for (int q = 0; q < sizey; q++) {
					if (arr[i][q] == 1) {
						cout << "# ";
					}
					else {

						cout << "  ";
					}

				} cout << endl;
			} 
			cout << endl;
		}
			  break;
		case 4: {
			return 0;
		}
			  break;
		default:
			cout << "цыфры выучи";
			break;
		}

	}
		}

	int _; cin >> _;
	return 0;
}