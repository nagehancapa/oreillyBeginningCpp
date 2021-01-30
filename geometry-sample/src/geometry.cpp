#include "geometry.h"
#include <cmath>

double area_of_square(double len, double width) {
	if (len != width) return -1;
	return len * width;
}

double area_of_triangle(double base, double height) {
	return 0.5 * base * height;
}

double area_of_circle(double radius) {
	return 3.14159 * std::pow(radius, 2);
}