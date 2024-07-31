#include "pch.h"

#include <iostream>
#include <cmath>;

using namespace std;

int main()
{
	system("chcp 1251");

	double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

	cout << "Введите координаты первой вершины:\n";
	cin >> x1;
	cin >> y1;

	cout << "Введите координаты второй вершины:\n";
	cin >> x2;
	cin >> y2;

	cout << "Введите координаты третьей вершины:\n";
	cin >> x3;
	cin >> y3;

	cout << "Введите координаты четвертой вершины:\n";
	cin >> x4;
	cin >> y4;

	cout << "Введите координаты пятой вершины:\n";
	cin >> x5;
	cin >> y5;
	
	double S = (fabs(x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5)) / 2;
	
	cout.precision(3);

	cout << "Площадь пятиугольника равна: " << S << endl;

	return 0;
}