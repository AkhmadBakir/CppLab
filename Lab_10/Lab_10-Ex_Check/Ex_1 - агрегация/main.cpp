#include "pch.h"

#include <iostream>
#include "Triangle.h"
#include "Triangle.cpp"

using namespace std;

int main()
{
	system("chcp 1251");
	double x, y;
	cout << "Введите координату x вершины a: " << endl;
	cin >> x;
	cout << "Введите координату y вершины a: " << endl;
	cin >> y;
	Dot* topA = new Dot(x, y);
	cout << "Введите координату x вершины b: " << endl;
	cin >> x;
	cout << "Введите координату y вершины b: " << endl;
	cin >> y;
	Dot* topB = new Dot(x, y);
	cout << "Введите координату x вершины c: " << endl;
	cin >> x;
	cout << "Введите координату y вершины c: " << endl;
	cin >> y;
	Dot* topC = new Dot(x, y);

	Triangle myTriangle(topA, topB, topC);

	cout << "Cтороны треугольника: " << myTriangle.triangleSides() << endl;
	cout << "Периметр треугольника: " << myTriangle.trianglePerimeter() << endl;
	cout << "Площадь треугольника: " << myTriangle.triangleArea() << endl;

	delete topA;
	delete topB;
	delete topC;
}
