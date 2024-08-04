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

        time1.print();
        time2.print();

        Time sum = time1 + time2;
        sum.print();
    }
    catch (const out_of_range& error) {
        cerr << error.what() << endl;
    }

    return 0;
}