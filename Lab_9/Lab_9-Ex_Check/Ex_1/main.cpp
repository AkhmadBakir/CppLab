#include "pch.h"

#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{
    system("chcp 1251");

    try {
        double a;
        cout << "Введите длину первой стороны треугольника: " << endl;
        cin >> a;
        double b;
        cout << "Введите длину второй стороны треугольника: " << endl;
        cin >> b;
        double c;
        cout << "Введите длину третьей стороны треугольника: " << endl;
        cin >> c;

        Triangle triangle(a, b, c);
        double area = triangle.area();
        cout << "Площадь треугольника равна: " << area << endl;

    }
    catch (const TriangleException& error) {
        cerr << error.what() << endl;
    }
    return 0;
}