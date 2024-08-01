#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    system("chcp 1251");

    if (argc < 4) {
        cout << "Недостаточное количество параметров" << endl;
        return 1;
    }

    if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0) {
        cout << "Неверный формат второго параметра" << endl;
        return 1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    if (strncmp(argv[1], "-a", 2) == 0) {
        cout << "Сумма: " << num1 + num2 << endl;
    }
    else {
        cout << "Произведение: " << num1 * num2 << endl;
    }

    return 0;
}