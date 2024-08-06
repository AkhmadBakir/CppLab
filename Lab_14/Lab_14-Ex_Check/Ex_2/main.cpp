#include "pch.h"

#include <iostream>
#include <vector>

template <class T>
void Print(const T& container, const std::string& separator) {
    bool flag = true;
    for (const auto& element : container) {
        if (!flag) {
            std::cout << separator;
        }
        std::cout << element;
        flag = false;
    }
}


int main() {

    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); // на экране: 1, 2, 3

    return 0;
}