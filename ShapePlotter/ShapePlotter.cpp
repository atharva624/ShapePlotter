#include "Circle.h"
#include "Point.h"
#include <iostream>
#include <fstream>
#include "Rectangle.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"
#include "Polygon.h"

using namespace std;

int main() {
    int selection;
    do {
        cout << "Shape Creator Menu:\n";
        cout << "1. Define a Point\n";
        cout << "2. Draw a Line\n";
        cout << "3. Create a Triangle\n";
        cout << "4. Generate a Square\n";
        cout << "5. Form a Rectangle\n";
        cout << "6. Make a Circle\n";
        cout << "7. Construct a Polygon\n";
        cout << "8. Exit the Program\n";
        cout << "Please enter your choice: ";
        cin >> selection;

        switch (selection) {
        case 1: {
            int coordX, coordY;
            cout << "Enter coordinates for the Point (x, y): ";
            cin >> coordX >> coordY;
            Point point(coordX, coordY);
            point.CreatePoint();
            break;
        }

        case 2: {
            double startX, startY, endX, endY;
            cout << "Enter the coordinates of the start point (x1 y1) and end point (x2 y2): ";
            cin >> startX >> startY >> endX >> endY;
            Point startPoint(startX, startY), endPoint(endX, endY);
            Line line;
            line.createLine(startPoint, endPoint);
            break;
        }

        case 3: {
            double triX1, triY1, triX2, triY2, triX3, triY3;
            cout << "Enter coordinates of the three triangle vertices (x1 y1, x2 y2, x3 y3): ";
            cin >> triX1 >> triY1 >> triX2 >> triY2 >> triX3 >> triY3;
            Point vertex1(triX1, triY1), vertex2(triX2, triY2), vertex3(triX3, triY3);
            Triangle triangle;
            triangle.createTriangle(vertex1, vertex2, vertex3);
            break;
        }

        case 4: {
            double centerX, centerY, squareSide;
            cout << "Enter the center point (x y) and the side length of the square: ";
            cin >> centerX >> centerY >> squareSide;
            Point centerPoint(centerX, centerY);
            Square square;
            square.createSquare(centerPoint, squareSide);
            break;
        }

        case 5: {
            int bottomLeftX, bottomLeftY, topRightX, topRightY;
            cout << "Enter coordinates of the bottom-left corner (x1 y1) and top-right corner (x2 y2): ";
            cin >> bottomLeftX >> bottomLeftY >> topRightX >> topRightY;
            Point bottomLeft(bottomLeftX, bottomLeftY), topRight(topRightX, topRightY);
            Rectangle rectangle(bottomLeft, topRight);
            rectangle.CreatRectangle(bottomLeft, topRight);
            break;
        }

        case 6: {
            int centerX, centerY, radius;
            cout << "Enter the center point (x y) and radius of the circle: ";
            cin >> centerX >> centerY >> radius;
            Point center(centerX, centerY);
            Circle circle(center, radius);
            circle.CreatCircle();
            break;
        }

        case 7: {
            int numVertices;
            cout << "Enter the number of vertices for the polygon: ";
            cin >> numVertices;

            Polygon polygon;
            for (int i = 0; i < numVertices; ++i) {
                double vertexX, vertexY;
                cout << "Enter coordinates for vertex " << i + 1 << " (x y): ";
                cin >> vertexX >> vertexY;
                Point vertex(vertexX, vertexY);
                polygon.addVertex(vertex);
            }

            polygon.createPolygon();
            break;
        }

        case 8: {
            cout << "Thank you for using the Shape Plotter. Exiting now...\n";
            return 0;
        }

        default:
            cout << "Invalid input. Please select a valid option.\n";
        }
    } while (true);

    return 0;
}
