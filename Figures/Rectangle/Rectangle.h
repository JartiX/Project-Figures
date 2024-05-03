#pragma once
#include "../figures.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

template <class T>
class Rectangle : public Geometry_Figure {
    T side_a, side_b;
public:
    Rectangle() {
        side_a = 0;
        side_b = 0;
    };
    Rectangle(Point p1, Point p2, Point p3, Point p4) {
        side_a = calcDistance(p1, p2);
        side_b = calcDistance(p3, p4);
    }
    Rectangle(T p1_1, T p1_2, T p2_1, T p2_2, T p3_1, T p3_2, T p4_1, T p4_2) {
        side_a = calcDistance(Point(p1_1, p1_2), Point(p2_1, p2_2));
        side_b = calcDistance(Point(p3_1, p3_2), Point(p4_1, p4_2));
    };
    Rectangle(T side_1, T side_2) {
        side_a = side_1;
        side_b = side_2;
    }
    double calc_area() {
        return side_a * side_b;
    };
    double calc_perimeter() {
        return 2 * (side_a + side_b);
    };
    void name() {
        cout << "Rectangle";
    };
};

#endif