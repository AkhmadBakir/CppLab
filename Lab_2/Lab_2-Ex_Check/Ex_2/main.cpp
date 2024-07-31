#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	system("chcp 1251");

	
    string snils;
    cout << "Введите СНИЛС: ";
    cin >> snils;

    if (snils.length() != 11) {
        cout << "Длина СНИЛС должна состоять из 11 цифр!\n";
        return 0;
    }

    for (int i = 0; i < snils.length(); i++) {
        if (!isdigit(snils[i])) {
            cout << "СНИЛС должен содержать только цифры\n";
            return 0;
        }
    }

    for (int i = 0; i < snils.length() - 2; i++) {
        if (snils[i] == snils[i + 1] && snils[i + 1] == snils[i + 2]) {
            cout << "Проверьте правильность набора СНИЛС\n";
            return 0;
        }
    }

    int summa = 0;
    for (int i = 0; i < 9; i++) {
        summa += (snils[i] - '0') * (9 - i);
    }

    int check_number;
    if (summa < 100) {
        check_number = summa;
    }
    else if (summa == 100 || summa == 101) {
        check_number = 0;
    }
    else {
        int remainder = summa % 101;
        if (remainder < 100) {
            check_number = remainder;
        }
        else {
            check_number = 0;
        }
    }

    int input_check_number = stoi(snils.substr(9, 2));

    if (check_number == input_check_number) {
        cout << "Номер СНИЛС проверен\n";
    }
    else {
        cout << "Номер СНИЛС не проверен\n";
    }

    return 0;

}
