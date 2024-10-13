
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"


class Circle {
public:
	Point center;
	double  radius;
	Circle(Point center, double radius);
	void CreatCircle();
	void draw();

	~Circle();
};

#endif // CIRCLE_H
