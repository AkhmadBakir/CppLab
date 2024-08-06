#include "pch.h"

#include <iostream>
using namespace std;


template <class T>
T myFuction(T array[], int length) {
    T sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    int average = sum / length;
    return average;
}

int main() {
    system("chcp 1251");

    int arrayInt[] = { 10, 5, 6, 23, 54, 9, 11, 3, 6, 4 };
    long arrayLong[] = { 10L, 5L, 6L, 23L, 54L };
    double arrayDouble[] = { 10.1, 5.1, 6.1, 23.1, 54.1, 9.1, 11.1 };
    char arrayChar[] = { '1', 'A', '3', 'B', '34', 'W', '21', '7'};


    cout << myFuction(arrayInt, 10) << endl;
    cout << myFuction(arrayLong, 5) << endl;
    cout << myFuction(arrayDouble, 7) << endl;
    cout << myFuction(arrayChar, 8) << endl;

    return 0;
}