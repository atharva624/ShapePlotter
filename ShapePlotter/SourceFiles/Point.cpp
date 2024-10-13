#include "Point.h"
#include <iostream>
#include <fstream>
using namespace std;

Point::Point(double xCoordinate, double yCoordinate) {
    this->x = xCoordinate;
    this->y = yCoordinate;
}

void Point::CreatePoint() {
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << x << " " << y << endl;
    std::cout << "Point (" << x << ", " << y << ") data written to shapes.dat" << std::endl;
}

void Point::draw() {
    // Optional: Add any drawing logic if required
}

Point::~Point() {
    // Optional: Uncomment if you need a destructor message
    // cout << "Point object destroyed." << endl;
}
