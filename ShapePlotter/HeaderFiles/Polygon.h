#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"
#include <vector>
#include <iostream>
#include <fstream>

class Polygon {
private:
    std::vector<Point> vertices;  // List of points representing the vertices

public:
    Polygon();  // Constructor

    void addVertex(Point p);      // Add a vertex to the polygon
    void createPolygon();         // Create polygon by saving vertices to a file
};


#endif 