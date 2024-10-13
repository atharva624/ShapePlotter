#ifndef SQUARE_H
#define SQUARE_H
#include "Point.h"
class Square {
public:
	//double side;
	Square();
	void createSquare(const Point& center, double sideLength);
	~Square();
	
};

#endif 

