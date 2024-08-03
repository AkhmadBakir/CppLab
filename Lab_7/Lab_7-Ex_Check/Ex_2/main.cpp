#include "pch.h"

#include <iostream>
#include <cmath>

using namespace std;

struct myStruct {
    double x1;
    double x2;
};

static myStruct myFunction(double a, double b, double c) {
    myStruct res;
    double d = b * b - 4 * a * c;
    if (d < 0) {
        res.x1 = res.x2 = 0;
    }
    else if (d == 0) {
        res.x1 = res.x2 = -b / (2 * a);
    }
    else {
        res.x1 = (-b + sqrt(d)) / (2 * a);
        res.x2 = (-b - sqrt(d)) / (2 * a);
    }
    return res;
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

    myStruct res = myFunction(a, b, c);

    cout << "Корни квадратного уравнения:" << endl;
    cout << "x1 = " << res.x1 << endl;
    cout << "x2 = " << res.x2 << endl;

    return 0;
}