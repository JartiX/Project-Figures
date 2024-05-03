#pragma once
#include "../figures.h"
#include <vector>
#include <string>
#include <fstream>
#ifndef POLYGON_H
#define POLYGON_H

template <class T>
class Polygon : public Geometry_Figure {
    vector<Point> vertices;
    T x, y;
public:
    Polygon() {};
    Polygon(vector<Point> _vertices) {
        vertices = _vertices;
    };
    Polygon(vector<T> _vertices) {
        if (_vertices.size() % 2 != 0) {
            throw "Incorrect size";
        }
        for (size_t i = 0; i < _vertices.size(); i+=2) {
            vertices.push_back(Point(_vertices[i], _vertices[i + 1]));
        }
    }
    Polygon(string path) {
        ifstream file(path);
        if (!file.is_open()) {
            throw "CANNOT OPEN FILE";
        }

        int n;
        file >> n;

        for (int i = 0; i < n; i++) {
            file >> x >> y;
            vertices.push_back(Point(x, y));
        }
    }

    double calc_area() {
        size_t n = vertices.size();
        double area = 0;

        for (size_t i = 0; i < n; ++i) {
            area += (vertices[i].x * vertices[(i + 1)%n].y) - (vertices[(i + 1)%n].x * vertices[i].y);
        }
        return abs(area) / 2;
    }
    double calc_perimeter() {
        double perimeter = 0;
        size_t n = vertices.size();
        for (size_t i = 0; i < n; ++i) {
            perimeter += calcDistance(vertices[i], vertices[(i + 1) % n]);
        }
        return perimeter;
    }
    void name() {
        cout << "Polygon";
    };
};


#endif