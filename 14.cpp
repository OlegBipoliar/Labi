#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");

    const int arr = 10;

    int intt[arr]{ 1,2,3,4,5,6,7,8,9,10 };

    long longg[arr]{ 11,22,33,44,55,66,77,88,99,100 };

    short shortt[arr]{ 1,2,3,4,5,6,7,8,9,10 };

    float floatt[arr]{ 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.01 };

    double doubll[arr]{ 1.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,9.99,10.001 };

    bool booll[arr]{ true, false, true, false, true, false, true, false, true, false };

    char charr[arr]{ 'p', 'o', 'm', 'o', 'g', 'i', 't', 'e', 'p', 'o' };

    string stringg[arr]{ "z", "a", "l", "y", "i", "s", "t", "a", "a", "a" };

    for (int i = 0; i < arr; i++) {
        cout << " - " << intt[i] << " - значение типа int" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << longg[i] << " - значение типа long" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << shortt[i] << " - значение типа short" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << floatt[i] << " - значение типа float" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << doubll[i] << " - значение типа double" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << booll[i] << " - значение типа bool" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << charr[i] << " - значение типа char" << endl;
    }

    for (int i = 0; i < arr; i++) {
        cout << " - " << stringg[i] << " - значение типа string" << endl;
    }
}