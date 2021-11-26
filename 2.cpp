#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите номер времени года\n\n[1] - Лето\n[2] - Осень\n[3] - Зима\n[4] - Весна\n";
    int seasonNum;
    cin >> seasonNum;
    if (seasonNum == 1) {
        cout << "Сейчас лето";
    }
    else if (seasonNum == 2) {
        cout << "Сейчас осень";
    }
    else if (seasonNum == 3) {
        cout << "Сейчас зима";
    }
    else if (seasonNum == 4) {
        cout << "Сейчас весна";
    }
    else {
        cout << "я рада, что ты знаешь больше 4-х, но вышла ошибочка";
    }
    return 0;
}