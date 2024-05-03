#pragma once
#include "../figures.h"

#ifndef CIRCLE_H
#define  CIRCLE_H

template <class T>
class Circle : public Geometry_Figure {
    T radius;
    Point center;
public:
    Circle();
    Circle(Point cen, T rad);
    Circle(T cen_x, T cen_y, T rad);
    double calc_area();
    double calc_perimeter();
    void name();
};

template <class T>
Circle<T>::Circle() {
    radius = 0;
    center.x = 0, center.y = 0;
};

template <class T>
Circle<T>::Circle(Point cen, T rad) {
    radius = rad;
    center = cen;
}

template <class T>
Circle<T>::Circle(T cen_x, T cen_y, T rad) {
    center.x = cen_x, center.y = cen_y;
    radius = rad;
};

template <class T>
double Circle<T>::calc_area() {
    return radius * radius * PI;
};

template <class T>
double Circle<T>::calc_perimeter() {
    return 2 * PI * radius;
};

template <class T>
void Circle<T>::name() {
    cout << "Circle";
};

#endif