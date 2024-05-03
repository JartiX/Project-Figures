// Progect-Figures.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <vector>
#include "Figures/Circle/circle.h"
#include "Figures/Ellipse/ellipse.h"
#include "Figures/Rectangle/rectangle.h"
#include "Figures/Triangle/triangle.h"
#include "Figures/Polygon/polygon.h"
#include "Figures/figures.h"
#include <string>
using namespace std;

int main()
{
	vector<shared_ptr<Geometry_Figure>> figs;
	Point p1(1, 1);
	Point p3(10, 4);
	Point p4(1, 4);
	Point p2(10, 1);

	figs.push_back(make_shared<Circle<int>>(10, 5, 2));
	figs.push_back(make_shared<Ellipse<int>>(10, 20, 30, 20));
	figs.push_back(make_shared<Rectangle<int>>(p1, p2, p3, p4));
	figs.push_back(make_shared<Triangle<int>>(p1, p2, p3));
	vector<int> vect1 = { 1, 1, 10, 1, 10, 10, 1, 10 };
	figs.push_back(make_shared<Polygon<int>>(vect1));

	try {
		figs.push_back(make_shared<Polygon<int>>("Polygons/polygon.txt"));
	}
	catch (...) {
		cerr << "Error";
	}

	for (size_t i = 0; i < figs.size(); i++) {
		figs[i]->name();
		cout << endl << figs[i]->calc_area() << " " << figs[i]->calc_perimeter() << endl << endl;
	}
	return 0;
}
