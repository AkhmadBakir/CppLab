#include "pch.h"

#include <iostream>
#include <cmath>

using namespace std;

void myFunction(int x) {
    if (x > 0) {
        myFunction(x / 2);
        cout << x % 2;
    }
}

int main() {
    system("chcp 1251");

    int x;
    cout << "Введите число больше 0: ";
    cin >> x;
    cout << "Число в двоичном виде: ";
    myFunction(x);
 
    return 0;
}