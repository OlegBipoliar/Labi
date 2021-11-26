#include <iostream>
using namespace std;


void cclearing() {
    system("cls");
}
void changingtheconsolecolor() {
    system("color 50");
}
void changingthetextcolor() {
    system("color 09");
}
void innt() {
    cout << "Размер типа int - " << sizeof(int) << endl;
}
void charr() {
    cout << "Размер типа char - " << sizeof(char) << endl;
}

void doublee() {
    cout << "Размер типа double - " << sizeof(double) << endl;
}

void floatt() {
    cout << "Размер типа float - " << sizeof(float) << endl;
}

void booll() {
    cout << "Размер типа bool - " << sizeof(bool) << endl;
}

void print() {
    cout << "Привет! Я функция." << endl;
}

void squareoutput() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "# ";
        }
        cout << endl;
    }
}



int main()
{
    bool IsRanning;
    IsRanning = true;
    while (IsRanning == true) {

        cout << "[+] - Программа функции" << endl;
        cout << "[1] - Очищение консоли" << endl;
        cout << "[2] - Изменить цвет консоли" << endl;
        cout << "[3] - Изменить цвет текста" << endl;
        cout << "[4] - Вывод размера типа данных int" << endl;
        cout << "[5] - Вывод размера типа данных char" << endl;
        cout << "[6] - Вывод размера типа данных double" << endl;
        cout << "[7] - Вывод размера типа данных float" << endl;
        cout << "[8] - Вывод размера типа данных bool" << endl;
        cout << "[9] - Если вам одиноко, функция скажет вам привет :)" << endl;
        cout << "[10] - Вывод квадрата 5*5" << endl;
        cout << "[11] - Выход";
        cout << "что хотите?  ";
        int menu;
        cin >> menu;

        while (menu < 0 || menu > 11) {
            cin.clear();
            cin.ignore();
            cout << endl << "Введите верное значение: ";
            cin >> menu;
        }
        switch (menu)
        {
        case 1:
        {
            cclearing();
            break;
        }
        case 2:
        {
            changingtheconsolecolor();
            break;
        }
        case 3:
        {
            changingthetextcolor();
            break;
        }
        case 4:
        {
            innt();
            break;
        }
        case 5:
        {
            charr();
            break;
        }
        case 6:
        {
            doublee();
            break;
        }
        case 7:
        {
            floatt();
            break;
        }
        case 8:
        {
            booll();
            break;
        }
        case 9:
        {
            print();
            break;
        }
        case 10:
        {
            squareoutput();
            break;
        }
        case 11:
        {
            return 0;
        }
        default:
            break;
        }





    }

}



