#pragma once

using namespace std;

class TriangleException : public exception {
public:
    const char* what() const noexcept override {
        return "Создать треугольник невозможно!";
    }
};

class Triangle {

    double a, b, c;

    public:
    Triangle(double a, double b, double c) {
        if (a + b <= c || b + c <= a || a + c <= b) {
            throw TriangleException();
        }
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double area() const {
        double p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};
