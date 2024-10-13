#ifndef RECTANGLE_H
#define RECTANGLE_H


#include"Shape.h"
#include "Point.h"
class Rectangle {
public:
	Point p1;
	Point p2;;
	Rectangle(Point p1, Point p2);
	void CreatRectangle(Point p1, Point p2);
	void draw();
	
	~Rectangle();
	
};

#endif 

