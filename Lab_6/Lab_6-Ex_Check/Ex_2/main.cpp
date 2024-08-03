#include "pch.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("chcp 1251");;

    const int N = 10;
    int a[N] = { 1, 33, 6, 77, 43, 5, 2, 23, 4, 7 };

    

 
    ofstream myFile("text.txt");
    if (myFile.is_open())
    {

        myFile << "Исходный массив:\n";
        for (int i = 0; i < N; i++)
        {
            myFile << a[i] << " ";
        }
        myFile << "\n\n";

        int min = 0;
        int buf = 0;

        for (int i = 0; i < N; i++)
        {
            min = i;

            for (int j = i + 1; j < N; j++)
                min = (a[j] < a[min]) ? j : min;

            if (i != min)
            {
                buf = a[i];
                a[i] = a[min];
                a[min] = buf;
            }
        }

        myFile << "Отсортированный массив:\n";
        for (int i = 0; i < N; i++)
        {
            myFile << a[i] << " ";
        }
        myFile << "\n";

        myFile.close();
        cout << "Данные записаны в файл 'text.txt'." << endl;
    }
    else
    {
        cout << "Не удалось открыть файл для записи." << endl;
    }

    return 0;
}