#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

bool checkSnils(string snils) {
    if (snils.length() != 11) {
        cout << "Длина СНИЛС должна состоять из 11 цифр!\n";
        return false;
    }

    for (int i = 0; i < snils.length(); i++) {
        if (!isdigit(snils[i])) {
            cout << "СНИЛС должен содержать только цифры\n";
            return false;
        }
    }

    for (int i = 0; i < snils.length() - 2; i++) {
        if (snils[i] == snils[i + 1] && snils[i + 1] == snils[i + 2]) {
            cout << "Проверьте правильность набора СНИЛС\n";
            return false;
        }
    }

}

int main()
{
    system("chcp 1251");


    string snils;
    cout << "Введите СНИЛС: ";
    cin >> snils;

    if (checkSnils(snils)) {
        cout << "Номер СНИЛС проверен\n";
    }
    else {
        cout << "Номер СНИЛС не проверен\n";
    }

    return 0;

}
