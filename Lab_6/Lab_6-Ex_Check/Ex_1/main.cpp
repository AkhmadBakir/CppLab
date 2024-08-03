#include "pch.h"

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main() {

    system("chcp 1251");
    fstream myfile;
    do
    {
        myfile.open("Тест.txt", fstream::app);
        if (myfile)
        {
            string text;
            while (true) {
                getline(cin, text);
                if (text.empty()) {
                    break;
                }
                myfile << text << endl;
            }
            system("pause");
        }
        else
        {
            cout << "ошибка записи файла " << '\n';
            system("pause");
        }
    } while (!myfile);
    myfile.close();
    cout << "выход из цикла записи файла " << '\n';
    system("pause");

    return 0;
   
}