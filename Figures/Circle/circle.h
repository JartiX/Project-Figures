#pragma once
#include "../figures.h"

#ifndef CIRCLE_H
#define  CIRCLE_H

template <class T>
class Circle : public Geometry_Figure {
    T radius;
    Point center;
public:
    Circle() {
        radius = 0;
        center.x = 0, center.y = 0;
    };
    Circle(Point cen, T rad) {
        radius = rad;
        center = cen;
    }
    Circle(T cen_x, T cen_y, T rad) {
        center.x = cen_x, center.y = cen_y;
        radius = rad;
    };
    double calc_area() {
        return radius * radius * PI;
    };
    double calc_perimeter() {
        return 2 * PI * radius;
    };
    void name() {
        cout << "Circle";
    };
};

#endif