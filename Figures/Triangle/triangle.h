#pragma once
#include "../figures.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

template <class T>
class Triangle : public Geometry_Figure {
    T side_a, side_b, side_c;
public:
    Triangle() {
        side_a = 0;
        side_b = 0;
        side_c = 0;
    };
    Triangle(Point p1, Point p2, Point p3) {
        side_a = calcDistance(p1, p2);
        side_b = calcDistance(p2, p3);
        side_c = calcDistance(p3, p1);
    }
    Triangle(T p1_1, T p1_2, T p2_1, T p2_2, T p3_1, T p3_2) {
        side_a = calcDistance(Point(p1_1, p1_2), Point(p2_1, p2_2));
        side_b = calcDistance(Point(p3_1, p3_2), Point(p2_1, p2_2));
        side_c = calcDistance(Point(p3_1, p3_2), Point(p1_1, p1_2));
    };
    Triangle(T side_1, T side_2, T side_3) {
        side_a = side_1;
        side_b = side_2;
        side_c = side_3;
    }

    double calcAreaBySides() {
        double p2 = (side_a + side_b + side_c) / 2.0;

        if (p2 <= 0.0 || p2 <= side_a || p2 <= side_b || p2 <= side_c)
            return 0.0;

        return sqrt(p2 * (p2 - side_a) * (p2 - side_b) * (p2 - side_c));
    }
    double calc_area() {
        return calcAreaBySides();
    };
    double calc_perimeter() {
        return side_a + side_b + side_c;
    };
    void name() {
        cout << "Triangle";
    };
};


#endif