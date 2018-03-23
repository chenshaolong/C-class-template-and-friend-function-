// abstract base class and class inheritence

#include <iostream>
#include <cmath>
#include "Point.h"

unsigned long Point::count = 0;

// atstract base class Point
Point::Point() { count++; }

Point::Point(const Point& p) { count++; }

Point::~Point() { std::cout << "Objects left: " << --count << "\n"; }


// derived class Point2D
Point2D::Point2D() {}

Point2D::Point2D(double x_, double y_) :x(x_), y(y_) {}

Point2D::Point2D(const Point2D& p) : x(p.x), y(p.y) {}

Point2D::~Point2D() {}

Point& Point2D::operator=(const Point2D& p)
{
	if (&p != this) {
		x = p.x;
		y = p.y;
	}
	
	return *this;
}

double Point2D::distanceToOrigin() const
{
	return sqrt(x * x + y * y);
}

void Point2D::show() const
{
	std::cout << "(" << x << ", " << y << ")\n";
}

std::ostream& operator<<(std::ostream& os, const Point2D& p) {
	os << "(" << p.x << ", " << p.y << ")\n";
	return os;
}

// derived class Point2D
Point3D::Point3D() {}

Point3D::Point3D(double x_, double y_, double z_) :x(x_), y(y_), z(z_) {}

Point3D::Point3D(const Point3D& p) :x(p.x), y(p.y), z(p.z) {}

Point3D::~Point3D() {}

Point& Point3D::operator=(const Point3D& p)
{
	if (&p != this) {
		x = p.x;
		y = p.y;
		z = p.z;
	}
	
	return *this;
}

double Point3D::distanceToOrigin() const
{
	return sqrt(x * x + y * y + z * z);
}

void Point3D::show() const
{
	std::cout << "(" << x << ", " << y << ", " << z << ")\n";
}

std::ostream& operator<<(std::ostream& os, const Point3D& p) {
	os << "(" << p.x << ", " << p.y << ", " << p.z << ")\n";
	return os;
}