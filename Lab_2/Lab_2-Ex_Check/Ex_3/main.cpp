#include "pch.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	system("chcp 1251");

	int number;
    vector<int> coins = { 10, 5, 2, 1 };

	cout << "Введите число: ";
	cin >> number;

    cout << "Набор монет с наименьшим возможным количеством монет " << number << " :\n";

    for (int i = 0; i < coins.size(); i++) {
        int count = number / coins[i];
        number -= count * coins[i];
        if (count > 0) {
            cout << count << " монет " << coins[i] << " рублей\n";
        }
    }

    return 0;
}
