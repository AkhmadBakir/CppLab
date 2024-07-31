#include "pch.h"

#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");

	int n;

	cout << "Введите число n: " << endl;
	cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "n не простое число, так как делится на " << i << endl;
            return 0;
        }
    }
    cout << "n простое число" << endl;
    return 0;
}