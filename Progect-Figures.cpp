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
	Point p1(1, 1);
	Point p3(10, 4);
	Point p4(1, 4);
	Point p2(10, 1);

	Circle<int> circle(10,5, 2);
	circle.name();
	cout << endl << circle.calc_area() << " " << circle.calc_perimeter() << endl;

	Ellipse<int> ellipse(10, 20, 30, 20);
	ellipse.name();
	cout << endl << ellipse.calc_area() << " " << ellipse.calc_perimeter() << endl;

	Rectangle<int> rectangle(p1, p2, p3, p4);
	rectangle.name();
	cout << endl << rectangle.calc_area() << " " << rectangle.calc_perimeter() << endl;

	Triangle<int> triangle(p1, p2, p3);
	triangle.name();
	cout << endl << triangle.calc_area() << " " << triangle.calc_perimeter() << endl;

	vector<int> vect1 = { 1, 1, 10, 1, 10, 10, 1, 10 };
	Polygon<int> polygon(vect1);
	polygon.name();
	cout << endl << polygon.calc_area() << " " << polygon.calc_perimeter() << endl;

	try {
		Polygon<int> pol_from_file("../../../Polygons/polygon.txt");
		cout << endl << pol_from_file.calc_area() << " " << pol_from_file.calc_perimeter() << endl;

	}
	catch (...) {
		cerr << "Error";
	}
	return 0;
}
