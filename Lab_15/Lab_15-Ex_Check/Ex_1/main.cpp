#include "pch.h"

#include <iostream>
#include <map>
#include <string>
#include <windows.h>

using namespace std;

struct StudentGrade {
    string name;
    int mark;
};

int main() {
    system("chcp 1251");

    std::map<std::string, char> marks
    {
        {"Иван", 0}, {"Петр", 0}, {"Сидр", 0}
    };

    for (const auto& pair : marks) {

        cout << "Введите оценку для " << pair.first << endl;
        char mark;
        cin >> mark;
        marks[pair.first] = mark;
    }

    for (const auto& pair : marks) {
        cout << pair.first << ": " << pair.second << "\n";
    }

    return 0;
}