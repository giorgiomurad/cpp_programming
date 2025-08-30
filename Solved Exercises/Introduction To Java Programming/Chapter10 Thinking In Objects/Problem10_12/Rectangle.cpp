//
// Created by Giorgio Murad on 24/08/2025.
//

#include "MyRectangle2D.h"

#include <cmath>

// ----- Constructors -----
//
// No arg constructor that creates an empty rectangle with default values
MyRectangle2D::MyRectangle2D():x(0), y(0), width(1), height(1) {}

// Constructor that creates a rectangle with specified x, y, width, and height
MyRectangle2D::MyRectangle2D(double x, double y, double width, double height):
            x(x), y(y), width(width), height(height) {}

// ----- Functions -----
//
// Function that returns the value of x
double MyRectangle2D::getX() { return x; }

// Function that returns the value of y
double MyRectangle2D::getY() { return y; }

// Function that returns the width
double MyRectangle2D::getWidth() { return width; }

// Function that returns the height
double MyRectangle2D::getHeight() { return height; }

// Function that returns the area of the rectangle
double MyRectangle2D::getArea() { return width * height; }

// Functions that returns the perimeter of the rectangle
double MyRectangle2D::getPerimeter() { return width * 2 + height * 2; }

// Function that returns true if the rectangle contains a specific point
bool MyRectangle2D::contains(double x, double y) {
    double diffX = abs(this->x - x);
    double diffY = abs(this->y - y);

    return diffX < width/2 && diffY < height/2;
}

// Function that returns true if the rectangle contains the specified rectangle
bool MyRectangle2D::contains(MyRectangle2D &rect) {
    double diffX = abs(this->x - rect.x);
    double diffY = abs(this->y - rect.y);
    double width2 = rect.getWidth();
    double height2 = rect.getHeight();

    return (diffX + width2/2 <= width/2 && diffY + height2/2 <= height/2);
}

// Function that returns true if the specified rectangle overlaps the rectangle
bool MyRectangle2D::overlaps(MyRectangle2D &rect) {
    double diffX = abs(this->x - rect.x);
    double diffY = abs(this->y - rect.y);
    double width2 = rect.getWidth();
    double height2 = rect.getHeight();

    return diffX + width2/2 <= width/2 ^ diffY + height2/2 <= height/2;
}
