#include "pch.h"

#include <iostream>
#include "time.h"

using namespace std;

int main() {
    system("chcp 1251");
    try {
        const Time time1(10, 10, 10);
        const Time time2(10, 10, 10);
        Time time3;

        Time plus = time1 + 1.1;
        plus.print();

        Time minus = 2.2 + time1;
        minus.print();

        cout << "time1 < time2: " << (time1 < time2) << endl;
        cout << "time1 > time2: " << (time1 > time2) << endl;
        cout << "time1 == time2: " << (time1 == time2) << endl;

    }
    catch (const out_of_range& error) {
        cerr << error.what() << endl;
    }

    return 0;
}