#include "Rectangle.h"
#include <iostream>
#include<fstream>
using namespace std;
Rectangle::Rectangle(Point p1, Point p2)
{
    this->p1 = p1;
    this->p2 = p2;
    cout << "Rectangle Points are : " << endl;
    cout << "Point p1 (x,y): " << p1.x << " " << p1.y << endl;
    cout << "Point p2 (x,y): " << p2.x << " " << p2.y << endl;
}
void Rectangle::draw()
{
    //cout<<"Draw Rectangle "<<endl;
}
void Rectangle::CreatRectangle(Point p1, Point p2)
{
    double x1, y1, x2, y2;
    x1 = p1.x;
    y1 = p1.y;
    x2 = p2.x;
    y2 = p2.y;

    //std::ofstream outFile("rectangle.dat");
    std::ofstream outFile("shapes.dat", std::ios::trunc);


    outFile << x1 << " " << y1 << std::endl; // Bottom-left
    outFile << x1 << " " << y2 << std::endl; // Top-left
    outFile << x2 << " " << y2 << std::endl; // Top-right
    outFile << x2 << " " << y1 << std::endl; // Bottom-right
    outFile << x1 << " " << y1 << std::endl; // Closing the rectangle

    outFile.close();
    std::cout << "Rectangle data written to shapes.dat" << std::endl;

}

Rectangle::~Rectangle()
{
    // cout<<"Rectangle Destructor call "<<endl;
}


