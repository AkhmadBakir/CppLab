#include "pch.h"

#include <iostream>

using namespace std;


int result(int n) {
    int res = 5 * n + result(n - 1);
    return res;
}

int main() {
    system("chcp 1251");

    int n;
    cout << "Введите целое число n больше 0: ";
    cin >> n;

    int summa = result(n);
    cout << "Сумма ряда для n = " << n << " равна: " << summa << endl;
    
    return 0;
}