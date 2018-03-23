// abstract base class and class inheritence

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point
{
public:
	Point();
	Point(const Point& p);
	Point& operator=(const Point& p);

	virtual ~Point();

	virtual double distanceToOrigin() const = 0;
	virtual void show() const = 0;

private:
	static unsigned long count;
};

class Point2D : public Point
{
public:
	Point2D();
	Point2D(double x_, double y_);
	Point2D(const Point2D& p);
	Point& operator=(const Point2D& p);

	virtual ~Point2D();
	
	virtual double distanceToOrigin() const;
	virtual void show() const;
	friend std::ostream& operator<<(std::ostream& os, const Point2D& p);

private:
	double x;
	double y;
};

class Point3D : public Point
{
public:
	Point3D();
	Point3D(double x_, double y_, double z_);
	Point3D(const Point3D& p);
	Point& operator=(const Point3D& p);

	virtual ~Point3D();
	
	virtual double distanceToOrigin() const;
	virtual void show() const;
	friend std::ostream& operator<<(std::ostream& os, const Point3D& p);

private:
	double x;
	double y;
	double z;
};

#endif