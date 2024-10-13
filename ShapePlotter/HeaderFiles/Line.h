#ifndef LINE_H
#define LINE_H
#include "Point.h"
class Line {
public:
    Line();
    ~Line();
    void  createLine(const Point& p1, const Point& p2);
};

#endif 
