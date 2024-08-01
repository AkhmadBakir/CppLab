#include "pch.h"

#include <iostream>
#include <string>

using namespace std;

void myFunction(int n, int* mas) 
{
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            min = (mas[j] < mas[min]) ? j : min;
            if (i != min)
            {
                buf = mas[i];
                mas[i] = mas[min];
                mas[min] = buf;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << '\t';
    }
    //////////////////////
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + mas[i];
    }
    double average = sum / n;
    cout << "Среднее значение элементов массива: " << average << endl;
    //////////////////////
    double sumMinus = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            sumMinus = sumMinus + mas[i];
        }
    }
    cout << "Сумма отрицательных элементов массива: " << sumMinus << endl;
    //////////////////////
    double sumPlus = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            sumPlus = sumPlus + mas[i];
        }
    }
    cout << "Сумма положительных элементов массива: " << sumPlus << endl;
    //////////////////////
    double sumUneven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            sumUneven = sumUneven + mas[i];
        }
    }
    cout << "Сумма элементов массива c нечетным индексом: " << sumUneven << endl;
    //////////////////////
    double sumEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + mas[i];
        }
    }
    cout << "Сумма элементов массива c четным индексом: " << sumEven << endl;
}

int main()
{
    system("chcp 1251");
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "] = ";
        cin >> mas[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    cout << s << endl;

    myFunction(n, mas);
    
}
