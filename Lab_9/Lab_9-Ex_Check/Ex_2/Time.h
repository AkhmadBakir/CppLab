﻿#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    Time(int h, int m, int s) {
        if (h < 0 || h >= 24) {
            throw out_of_range("Проверьте правильность ввода данных!");
        }
        else if (m < 0 || m >= 60) {
            throw out_of_range("Проверьте правильность ввода данных!");
        }
        else if (s < 0 || s >= 60) {
            throw out_of_range("Проверьте правильность ввода данных!");
        }
        else {
            hours = h;
            minutes = m;
            seconds = s;
        }

        while (seconds >= 60) {
            seconds -= 60;
            minutes++;
        }
        while (minutes >= 60) {
            minutes -= 60;
            hours++;
        }
    }

    void print() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    Time operator+(const Time& other) const {
        return Time(hours + other.hours, minutes + other.minutes, seconds + other.seconds);
    }
};