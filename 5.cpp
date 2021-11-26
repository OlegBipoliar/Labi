#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] - ПЕРЕВОДЧИК" << endl ;
	cout << "[1] - Русские слова" << endl;
	cout << "[2] - Английские слова" << endl << endl;
	cout << "[3] - Выйти / Exit" << endl;
	cout << "Что хотите?" << endl;
	int number;
	cin >> number;
	if (number == 1) {
		cout << "[1] - котичка \n [2] - верблюд \n [3] - хорошо \n [4] - папочка \n [5] - обезьянка  \n [6] - острый \n [7] - курица \n [8] - малина \n [9] - картошка \n [10] - соль \n [11] - огурчик \n [12] - винокуренный завод \n [13] - Коммунизм \n [14] - демон \n [15] - крыжовник \n "  ;
		cout << "Какое слово вам перевести?" << endl;
		int slovo;
		cin >> slovo;
		switch (slovo)
		{
		case 1:
			cout << " cat ";
			break;
		case 2:
			cout << " camel ";
			break;
		case 3:
			cout << " good ";
			break;
		case 4:
			cout << " daddy ";
			break;
		case 5:
			cout << "monkey ";
			break;
		case 6:
			cout << " spacy ";
			break;
		case 7:
			cout << "chiken ";
			break;
		case 8:
			cout << "raspberry ";
			break;
		case 9:
			cout << " potato ";
			break;
		case 10:
			cout << "salt";
			break;
		case 11:
			cout << " cucumber";
			break;
		case 12:
			cout << "distillery";
			break;
		case 13: 
			cout << "communism";
			break;
		case 14:
			cout << "demon ";
			break;
		case 15:
			cout << "gooseberry";
			break;

		default:
			cout << "цифры выучи, дебень";
			break;
		}
	}
	else if (number == 2) {
		cout << "[1] - cat \n[2] - camel \n[3] - good \n[4] - daddy \n[5] - monkey \n[6] - spacy \n [7] - chiken \n [8] - raspberry \n [9] - potato \n [10] - salt \n [11] - cucumber \n [12] - distillery \n [13] - communism \n [14] - demon \n [15] - gooseberry \n";
		cout << "Какое слово вам перевести?" << endl;
		int slovo2;
		cin >> slovo2;
		switch (slovo2)
		{
		case 1:
			cout << " кошка ";
			break;
		case 2:
			cout << " верблюд ";
			break;
		case 3:
			cout << " хороший ";
			break;
		case 4:
			cout << " папочка ";
			break;
		case 5:
			cout << " обезьяна ";
			break;
		case 6:
			cout << " острый ";
			break;
		case 7:
			cout << " курица ";
			break;
		case 8:
			cout << " малина ";
			break;
		case 9:
			cout << " картошка ";
			break;
		case 10:
			cout << "соль";
			break;
		case 11:
			cout << " огурец ";
			break;
		case 12:
			cout << "винокуренный завод";
			break;
		case 13:
			cout << "коммунизм";
			break;
		case 14:
			cout << "демон ";
			break;
		case 15:
			cout << "крыжовник";
			break;

		default:
			cout << "цифры выучи, дебень";
			break;
		}
	}
	else if (number == 3) {

	return 0;
	}
	else {
		cout << "ты какие значения вводишь, дебень?";
	}






	return 0;
}