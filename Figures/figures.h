#pragma once
#include <iostream>

#ifndef FIGURES_H
#define FIGURES_H 
const double PI = 3.1415926535;

using namespace std;

class Point {
public:
    double x, y;
    Point();
    Point(double _x, double _y);
};

class Geometry_Figure {
public:
    virtual double calc_area() = 0;
    virtual double calc_perimeter() = 0;
    virtual void name() = 0;
};

double calcDistance(const Point& pa, const Point& pb);

#endif