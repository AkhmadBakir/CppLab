#include "pch.h"

#include <cmath>
#include <iostream>
using namespace std;

double standardFunction(double a) {
    return pow(a, 1.0 / 3.0);
}

double iterativeFormula(double a) {
    double xi = 1.0;
    double xj;

    do {
        xj = xi;
        xi = 1.0 / 3.0 * (a / (xj * xj) + 2 * xj);
    } while (abs(xi - xj) > 1e-6);

    return xi;
}

int main() {

    system("chcp 1251");

    double a;

    cout << "Введите число: ";
    cin >> a;

    cout << "Стандартная функция pow: " << standardFunction(a) << endl;
    cout << "Итерационная формула: " << iterativeFormula(a) << endl;

    return 0;
}