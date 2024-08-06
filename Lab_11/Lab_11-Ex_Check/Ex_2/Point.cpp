#include "pch.h"
#include "Point.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
class Point {
public:
    Point(double x, double y) : x(x), y(y) {}

    double getDistance() const {
        return sqrt(x * x + y * y);
    }

    friend ostream& operator<<(ostream& os, const Point& point);
    friend bool operator<(const Point& p1, const Point& p2);

private:
    double x, y;
};

ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

bool operator<(const Point& p1, const Point& p2) {
    return p1.getDistance() < p2.getDistance();
}
