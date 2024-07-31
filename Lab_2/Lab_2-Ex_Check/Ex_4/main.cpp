#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("chcp 1251");

    int x, y, summa = 0;
    string level;

    for (int i = 0; i <= 3; i++) {
        
        cout << "Введите x " << i << " выстрела: " << endl;
        cin >> x;
        cout << "Введите y " << i << " выстрела: " << endl;
        cin >> y;

        if ((x * x + y * y) < 1) {
            summa += 10;
        }
        else if ((x * x + y * y) <= 2) {
            summa += 5;
        }
        else if ((x * x + y * y) < 3) {
            summa += 0;
        }
    }

    if (summa >= 20) {
        level = "Снайпер";
    }
    else if (summa >= 10) {
        level = "Cтрелок";
    }
    else {
        level = "Новичок";
    }

    cout << "Сумма очков: " << summa << ". Ваш уровень: " << level << "." << endl;

}
