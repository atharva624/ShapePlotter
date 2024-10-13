#include <iostream>
#include <fstream>
#include <cmath>
#include "Circle.h"
#include "Point.h"
using namespace std;
#define M_PI   3.14159265358979323846264338327950288


Circle::Circle(Point centerPoint, double radiusValue) {
    this->center = centerPoint;
    this->radius = radiusValue;
}

void Circle::CreatCircle() {
    cout << "Circle center coordinates: (" << center.x << ", " << center.y << ")" << endl;

    double xCenter = center.x; // x-coordinate of the center
    double yCenter = center.y; // y-coordinate of the center
    double radius = this->radius; // radius of the circle
    int totalPoints = 100;

    std::ofstream outFile("shapes.dat", std::ios::trunc);

    for (int i = 0; i <= totalPoints; ++i) {
        double x = 0.0;
        double y = 0.0;
        double angle = (2 * M_PI * i) / totalPoints; // Parameter for the circle (angle in radians)
        x = xCenter + radius * cos(angle); // x-coordinate of point on the circle
        y = yCenter + radius * sin(angle); // y-coordinate of point on the circle
        outFile << x << " " << y << std::endl; // Write points to the file
    }

    outFile.close();
    std::cout << "Circle data successfully written to shapes.dat file." << std::endl;
}

void Circle::draw() {
    cout << "Drawing the Circle..." << endl;
}

Circle::~Circle() {
    // Optional: Uncomment the following line if you need a destructor message
    // cout << "Circle object destroyed." << endl;
}
