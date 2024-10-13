#include "Square.h"
#include "Point.h"
#include <iostream>
#include <fstream>
using namespace std;

Square::Square() {
    cout << "Square object created." << endl;
}

Square::~Square() {
    cout << "Square object destroyed." << endl;
}

void Square::createSquare(const Point& centerPoint, double sideLength) {
    double halfLength = sideLength / 2.0;
    double bottomLeftX = centerPoint.x - halfLength;
    double bottomLeftY = centerPoint.y - halfLength;
    double topRightX = centerPoint.x + halfLength;
    double topRightY = centerPoint.y + halfLength;

    std::ofstream outFile("shapes.dat", std::ios::trunc);

    outFile << bottomLeftX << " " << bottomLeftY << std::endl; // Bottom-left corner
    outFile << bottomLeftX << " " << topRightY << std::endl;   // Top-left corner
    outFile << topRightX << " " << topRightY << std::endl;     // Top-right corner
    outFile << topRightX << " " << bottomLeftY << std::endl;   // Bottom-right corner
    outFile << bottomLeftX << " " << bottomLeftY << std::endl; // Close square

    outFile.close();
    std::cout << "Square data successfully written to shapes.dat file." << std::endl;
}
