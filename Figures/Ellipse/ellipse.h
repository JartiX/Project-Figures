#pragma once
#include "../figures.h"

#ifndef ELLIPSE_H
#define ELLIPSE_H

template <class T>
class Ellipse : public Geometry_Figure {
    T radius_first;
    T radius_second;
    Point center;
public:
    Ellipse() {
        radius_first = 0, radius_second = 0;
        center.x = 0, center.y = 0;
    };
    Ellipse(Point cen, T rad1, T rad2) {
        radius_first = rad1, radius_second = rad2;
        center = cen;
    }
    Ellipse(T cen_x, T cen_y, T rad1, T rad2) {
        center.x = cen_x, center.y = cen_y;
        radius_first = rad1, radius_second = rad2;
    };
    double calc_area() {
        return radius_first * radius_second * PI;
    };
    double calc_perimeter() {
        return 2 * PI * sqrt((radius_first * radius_first + radius_second * radius_second) / 2);
    };
    void name() {
        cout << "Ellipse";
    };
};

#endif