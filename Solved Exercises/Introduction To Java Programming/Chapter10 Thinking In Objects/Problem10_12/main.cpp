// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Thinking in Objects
//
// Problem 10.12 : Create a class MyRectangle2D that contains:
//                  - Data fields for x and y that represent the coordinates of the center of the rectangle
//                  - Data fields for the width and height of the rectangle
//                  - Get methods for x, y, width, and height
//                  - No-arg constructor that creates a rectangle of center (0, 0), width 1, and height 1
//                  - Constructor that creates a rectangle with specified x, y, width, and height
//                  - getArea() that returns the area of the rectangle
//                  - getParameter() that returns the parameter of the rectangle
//                  - contains(double x, double y) that returns true if the specified point is in this rectangle
//                  - contains(MyRectangle2D rectangle) that returns true if the specified rectangle is in this
//                    rectangle.
//                  - overlaps(MyRectangle2D rectangle) that returns true if the specified rectangle overlaps this
//                    rectangle.
//
//                  Write a test program creates a MyRectangle2D object r1(new MyRectangle2D(2, 2, 5.5, 4.9).
//                  Display it's area, parameter, and the result of:
//                  - r1.contains(3, 3)
//                  - r1.contains(new MyRectangle2D(4, 5, 10.5, 3.2))
//                  - r1.overlaps(new MyRectangle2D(3, 5, 2.3, 5.4))
//
//
// Author : Giorgio Murad

#include <iostream>

#include "MyRectangle2D.h"

using namespace std;
int main() {
    MyRectangle2D *rect;


    // Initializing rectangle object
    rect = new MyRectangle2D(2, 2, 5.5, 4.9);

    // 1. Displaying whether the rectangle contains the point (3, 3)
    if (rect->contains(3, 3))
        cout << "The rectangle contains point (3, 3)." << endl;
    else
        cout << "The rectangle does not contain point (3, 3)." << endl;

    // 2. Displaying whether the rectangle contains Rectangle 2
    if (rect->contains(*new MyRectangle2D(4, 5, 10.5, 3.2)))
        cout << "The rectangle contains Rectangle 2." << endl;
    else
        cout << "The rectangle does not contain Rectangle 2." << endl;

    // 3. Displaying whether the rectangle overlaps rectangle 3
    if (rect->overlaps(*new MyRectangle2D(3, 5, 2.3, 5.4)))
        cout << "The rectangle overlaps Rectangle 3." << endl;
    else
        cout << "The rectangle does not overlap Rectangle 3." << endl;

    return 0;
}