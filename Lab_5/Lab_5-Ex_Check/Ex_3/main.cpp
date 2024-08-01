#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

int searchByTransposition(int arr[], int size, int key) {
    if (size == 0 || arr[0] != key) {
        return -1;
    }

    if (arr[0] == key) {
        return 0;
    }

    int i;
    for (i = 1; i < size; i++) {
        if (arr[i] == key) {
            swap(arr[i], arr[i - 1]);
            return i;
        }
    }

    return -1;
}

int main() {
    system("chcp 1251");

    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = searchByTransposition(arr, size, 3);
    if (index == -1) {
        cout << "Элемент не найден" << endl;
    }
    else {
        cout << "Элемент найден на позиции: " << index << endl;

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}