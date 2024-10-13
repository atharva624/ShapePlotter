
#include "Line.h"
#include<fstream>
#include <iostream>
using namespace std;
Line::Line()
{
    cout << "Line Constructor" << endl;
}
Line::~Line()
{
    cout << "Line Destructor " << endl;
}
void Line::createLine(const Point& p1, const Point& p2) {

    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << p1.x << " " << p1.y << std::endl; // Start point
    outFile << p2.x << " " << p2.y << std::endl; // End point

    outFile.close();
    std::cout << "Line data written to shapes.dat" << endl;

}

