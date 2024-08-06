#include "pch.h"
#include "Time.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

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
    /*
    Time operator+(const Time& other) const {
        return Time(hours + other.hours, minutes + other.minutes, seconds + other.seconds);
    }*/

    Time operator+(const Time& other) const {
        Time result(*this);
        result.seconds += other.seconds;
        result.minutes += other.minutes;
        result.hours += other.hours;

        result.correct();

        return result;
    }

    Time operator-(const Time& other) const {
        Time result(*this);
        result.seconds -= other.seconds;
        result.minutes -= other.minutes;
        result.hours -= other.hours;

        result.correct();

        return result;
    }

    Time operator+(float secs) const {
        Time result(*this);
        result.seconds += static_cast<int>(secs);
        result.correct();
        return result;
    }

    friend Time operator+(float secs, const Time& time);

    bool operator<(const Time& other) const {
        if (hours < other.hours) return true;
        if (hours > other.hours) return false;
        if (minutes < other.minutes) return true;
        if (minutes > other.minutes) return false;
        return seconds < other.seconds;
    }

    bool operator>(const Time& other) const {
        return other < *this;
    }

    bool operator<=(const Time& other) const {
        return !(*this > other);
    }

    bool operator>=(const Time& other) const {
        return !(*this < other);
    }

    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    bool operator!=(const Time& other) const {
        return !(*this == other);
    }

private:
    void correct() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }

        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }

        if (hours >= 24) {
            hours %= 24;
        }
    }

    //Time operator+(float secs, const Time& time) {
    //    return Time(time) + secs;
    //}
   
};

Time operator+(float secs, const Time& time)
{
	return Time();
}
