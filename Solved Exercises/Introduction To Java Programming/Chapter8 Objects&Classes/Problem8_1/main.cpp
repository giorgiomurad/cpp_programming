// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Objects & Classes
//
// Problem 8.1 : Design a class that represents a rectangle object.
//               The rectangle object should include:
//               - Width and height with default values 1
//               - No-arg constructor that creates a default rectangle
//               - A constructor that creates a rectangle with specified width and height
//               - A function that returns the area of the rectangle
//               - A function that returns the parameter of the rectangle
//
//               Write a program that creates two rectangle objects. One rectangle with
//               width 4 and height 40, and the other rectangle with width 3.5 and height
//               35.9.
//               Of each rectangle object, the program should display the width, height,
//               area, and parameter in order.
//
//
// Author : Giorgio Murad
#include <iostream>

#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle r1(4, 40);
    Rectangle r2(3.5, 35.9);

    cout << "Rectangle 1:" << endl
    << "Width: " << r1.getWidth() << endl
    << "Height: " << r1.getHeight() << endl
    << "Parameter: " << r1.getParameter() << endl
    << "Area: " << r1.getArea() << endl;

    cout << endl;

    cout << "Rectangle 2:" << endl
    << "Width: " << r2.getWidth() << endl
    << "Height: " << r2.getHeight() << endl
    << "Parameter: " << r2.getParameter() << endl
    << "Area: " << r2.getArea() << endl;
    
    return 0;
}