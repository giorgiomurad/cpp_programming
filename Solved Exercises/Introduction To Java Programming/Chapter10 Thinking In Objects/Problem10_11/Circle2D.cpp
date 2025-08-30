//
// Created by Giorgio Murad on 20/08/2025.
//

#include "Circle2D.h"
#include <cmath>

// No-Arg Constructor that creates a default circle with default values
Circle2D::Circle2D():x(0), y(0), radius(1) {}

// Constructor that creates a circle with the specified values
Circle2D::Circle2D(int x, int y, double radius):x(x), y(y), radius(radius) {}

// Function that returns the value of x
int Circle2D::getX() {
    return x;
}

// Function that returns the value of y
int Circle2D::getY() {
    return y;
}

// Function that returns the radius of the circle
double Circle2D::getRadius() {
    return radius;
}

// Function that returns the area of the circle
double Circle2D::getArea() {
    return M_PI * pow(radius, 2);
}

// Function that returns the parameter of the circle
double Circle2D::getParameter() {
    return M_PI * 2 * radius;
}

// Function that returns true if the circle contains the specified point
bool Circle2D::contains(double x, double y) {
    double dist = distance(x, y);

    return dist <= radius;
}

// Function that returns true if the circle contains the specified circle
bool Circle2D::contains(Circle2D circle) {
    double dist = distance(circle.getX(), circle.getY());
    double radius2 = circle.getRadius();

    return dist + radius2 <= radius;
}

// Function that returns true if the circle overlaps the specified circle
bool Circle2D::overlaps(Circle2D circle) {
    double dist = distance(circle.getX(), circle.getY());
    double radius2 = circle.getRadius();

    return (!contains(circle) && radius + radius2 > dist);
}


// Function that returns the distance between the center point of the circle, and the specified point
double Circle2D::distance(int x, int y) {
    double diffX = abs(this->x - x);
    double diffY = abs(this->y - y);

    return sqrt(pow(diffX, 2) + pow(diffY, 2));
}