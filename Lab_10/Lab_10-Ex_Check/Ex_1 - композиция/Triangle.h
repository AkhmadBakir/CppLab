#pragma once
#include "Dot.h"

using namespace std;

class Triangle
{
    Dot point1, point2, point3;

public:
    
    Triangle(Dot topA, Dot topB, Dot topC) {
        point1 = topA;
        point2 = topB;
        point3 = topC;
    }
    
    
    double triangleSides()
    {
        double side1 = point1.distanceTo(point2);
        double side2 = point2.distanceTo(point3);
        double side3 = point3.distanceTo(point1);
        return side1, side2, side3;

    }

    double trianglePerimeter()
    {
        double side1 = point1.distanceTo(point2);
        double side2 = point2.distanceTo(point3);
        double side3 = point3.distanceTo(point1);
        return side1 + side2 + side3;
    }

    double triangleArea()
    {
        double side1 = point1.distanceTo(point2);
        double side2 = point2.distanceTo(point3);
        double side3 = point3.distanceTo(point1);
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};