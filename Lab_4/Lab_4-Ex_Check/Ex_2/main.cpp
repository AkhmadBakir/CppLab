#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

bool Input(int& a, int& b) {
    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    if (a < 0 || b < 0) {
        return false;
    }

    return true;
}


int main()
{
    system("chcp 1251");


    int a, b;
    if (Input(a, b) == false) {
        cerr << "error";
        return 1;
    }

    int s = a + b;
    cout << "a + b = " << s << endl;

    return 0;


}
