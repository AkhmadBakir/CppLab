#include "pch.h"

#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

static tuple<double, double> myFunction(double a, double b, double c) {
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return make_tuple(0, 0);
    }
    else if (d == 0) {
        double x = -b / (2 * a);
        return make_tuple(x, x);
    }
    else {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        return make_tuple(x1, x2);
    }
}

int main() {
    system("chcp 1251");

    double a, b, c;
    cout << "Введите коэффициент a: " << endl;
    cin >> a;
    cout << "Введите коэффициент b: " << endl;
    cin >> b;
    cout << "Введите свободный член c: " << endl;
    cin >> c;

    double x1, x2;

    tie(x1, x2) = myFunction(a, b, c);

    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    return 0;
}