#include "PointClass.h"

double PointClass::dist(PointClass point) {
	return sqrt(1.0 * (x - point.x) * (x - point.x) + (y - point.y) * (y - point.y));
}

std::pair<double, double> PointClass::abs() {
	return std::make_pair(x, y);
}