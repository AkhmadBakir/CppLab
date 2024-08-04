#include "pch.h"

#include <iostream>
#include "time.h"

using namespace std;

int main() {
    system("chcp 1251");
    const Time time1(10, 20, 30);
    const Time time2(20, 30, 40);
    Time time3;

    time1.print();
    time2.print();

    Time sum = time1 + time2;
    sum.print();

    return 0;
}