#include "pch.h"

#include <iostream>

namespace MyTime {
    struct Time {
        int hours;
        int minutes;
        int seconds;

        Time operator+(const Time& other) const {
            Time res;
            res.hours = hours + other.hours;
            res.minutes = minutes + other.minutes;
            res.seconds = seconds + other.seconds;

            if (res.seconds >= 60) {
                res.minutes += res.seconds / 60;
                res.seconds %= 60;
            }

            if (res.minutes >= 60) {
                res.hours += res.minutes / 60;
                res.minutes %= 60;
            }

            return res;
        }

        Time operator-(const Time& other) const {
            Time res;
            res.hours = hours - other.hours;
            res.minutes = minutes - other.minutes;
            res.seconds = seconds - other.seconds;

            if (res.seconds < 0) {
                res.minutes--;
                res.seconds += 60;
            }

            if (res.minutes < 0) {
                res.hours--;
                res.minutes += 60;
            }

            return res;
        }
    };
    int myFunction(const Time& time) {
        return time.hours * 3600 + time.minutes * 60 + time.seconds;
    }
}

using namespace std;
using namespace MyTime;

int main() {
    system("chcp 1251");

    Time time;

    cout << "Введите часы: ";
    cin >> time.hours;

    cout << "Введите минуты: ";
    cin >> time.minutes;

    cout << "Введите секунды: ";
    cin >> time.seconds;
    int seconds = myFunction(time);
    cout << "Секунд в введенном времени: " << seconds << endl;

    Time t1{ 10, 20, 30 };
    Time t2{ 05, 30, 40 };
    Time amount = t1 + t2;
    Time difference = t1 - t2;

    return 0;
}