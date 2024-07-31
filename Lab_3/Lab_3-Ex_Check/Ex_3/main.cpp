#include "pch.h"

#include <iostream>
#include <cmath>

using namespace std;

double choosingTriangle(double x) {

    if (x == 1) {
        double a;
        cout << "Введите длину стороны равностороннего треугольника: " << endl;
        cin >> a;
        return (sqrt(3) / 4) * a * a;
        }
    else if (x == 2) {
        double a;
        cout << "Введите длину первой стороны разностороннего треугольника: " << endl;
        cin >> a;
        double b;
        cout << "Введите длину второй стороны разностороннего треугольника: " << endl;
        cin >> b;
        double c;
        cout << "Введите длину третьей стороны разностороннего треугольника: " << endl;
        cin >> c;
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
        }
    else {
        cout << "1 - равностороннего или 2 - разностороннего. Попробуйте еще раз." << endl;
    }
}

int main()
{
    system("chcp 1251");

    double x;
    cout << "Площадь какого треугольника требуется расчитать? 1 - равностороннего или 2 - разностороннего" << endl;
    cin >> x;

    double s = choosingTriangle(x);
    cout << "Площадь треугольника: " << s << "." << endl;

    return 0;

}
