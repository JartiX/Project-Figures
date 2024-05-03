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
    Ellipse();
    Ellipse(Point cen, T rad1, T rad2);
    Ellipse(T cen_x, T cen_y, T rad1, T rad2);
    double calc_area();
    double calc_perimeter();
    void name();
};

template <class T>
Ellipse<T>::Ellipse() {
    radius_first = 0, radius_second = 0;
    center.x = 0, center.y = 0;
};

template <class T>
Ellipse<T>::Ellipse(Point cen, T rad1, T rad2) {
    radius_first = rad1, radius_second = rad2;
    center = cen;
}

template <class T>
Ellipse<T>::Ellipse(T cen_x, T cen_y, T rad1, T rad2) {
    center.x = cen_x, center.y = cen_y;
    radius_first = rad1, radius_second = rad2;
};

template <class T>
double Ellipse<T>::calc_area() {
    return radius_first * radius_second * PI;
};

template <class T>
double Ellipse<T>::calc_perimeter() {
    return 2 * PI * sqrt((radius_first * radius_first + radius_second * radius_second) / 2);
};

template <class T>
void Ellipse<T>::name() {
    cout << "Ellipse";
};

#endif