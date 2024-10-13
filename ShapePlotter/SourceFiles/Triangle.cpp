#include "Triangle.h"
#include <iostream>
#include <fstream>
using namespace std;

Triangle::Triangle() {
    cout << "Triangle object created." << endl;
}

void Triangle::createTriangle(Point vertex1, Point vertex2, Point vertex3) {
    std::ofstream outFile("shapes.dat", std::ios::trunc);

    outFile << vertex1.x << " " << vertex1.y << std::endl; // First vertex
    outFile << vertex2.x << " " << vertex2.y << std::endl; // Second vertex
    outFile << vertex3.x << " " << vertex3.y << std::endl; // Third vertex
    outFile << vertex1.x << " " << vertex1.y << std::endl; // Closing the triangle

    outFile.close();
    std::cout << "Triangle data successfully written to shapes.dat file." << std::endl;
}

Triangle::~Triangle() {
    cout << "Triangle object destroyed." << endl;
}
