// class template
/* from C++ Primer Plus(6th Edition)-Stephen Prata, page 847
Placing the template member functions in a separate implementation file won’t work.

Because the templates aren’t functions, they can’t be compiled separately.
Templates have to be used in conjunction with requests for particular instantiations of templates.
The simplest way to make this work is to place all the template information in a header file and 
to include the header file in the file that will use the templates.
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

template<class T = double>
class Point
{
public:
	Point();
	Point(T x_, T y_);
	Point(const Point& p);
	Point& operator=(const Point& p);

	~Point();

	T distanceToOrigin() const;
	void show() const;
	friend std::ostream& operator<<(std::ostream& os, const Point<T> & p) {
		os << "(" << p.x << ", " << p.y << ")";
		return os;
	}

private:
	static unsigned long count;
	T x;
	T y;
};

template<class T>
unsigned long Point<T>::count = 0;

template<class T>
Point<T>::Point() { count++; }

template<class T>
Point<T>::Point(T x_, T y_) : x(x_), y(y_) { count++; }

template<class T>
Point<T>::Point(const Point<T>& p): x(p.x), y(p.y) { count++; }

template<class T>
Point<T>& Point<T>::operator=(const Point<T>& p)
{
	if (&p != this) {
		x = p.x;
		y = p.y;
	}
	
	return *this;
}

template<class T>
Point<T>::~Point() { std::cout << "Objects left: " << --count << "\n"; }

template<class T>
T Point<T>::distanceToOrigin() const
{
	return static_cast<T>(sqrt(x * x + y * y));
}

template<class T>
void Point<T>::show() const
{
	std::cout << "(" << x << ", " << y << ")";
}

#endif