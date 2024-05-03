#include "figures.h"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double _x, double _y) {
	x = _x;
	y = _y;
}

double calcDistance(const Point& pa, const Point& pb) {
	return sqrt((pb.x - pa.x) * (pb.x - pa.x) + (pb.y - pa.y) * (pb.y - pa.y));
}