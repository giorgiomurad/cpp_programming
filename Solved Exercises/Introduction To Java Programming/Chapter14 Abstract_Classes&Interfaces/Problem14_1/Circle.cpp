//
// Created by Giorgio Murad on 21/11/2025.
//

#include "Circle.h"

// No-arg constructor that creates a default circle object
Circle::Circle() : GeometricObject() {

    this->setRadius(1);
}


// Constructor that creates a circle object with specified radius value
Circle::Circle(double radius) : GeometricObject() {

    this->setRadius(radius);
}

// Constructor that creates a circle object with specified radius, color, and isFilled
Circle::Circle(double radius, string color, bool isFilled) : GeometricObject(color, isFilled) {

    this->setRadius(radius);
}


// Function that sets the radius of the circle
void Circle::setRadius(double radius) {

    this->radius = radius;
    getArea();
}

// Function that returns the radius value of the circle
double Circle::getRadius() {

    return radius;
}

// Function that computes and returns the radius of the circle
double Circle::getArea() {
    area  = M_PI * radius * radius;

    return area;
}

ostream& operator<<(ostream& os, const Circle& c) {
    string isFilled = c.filled ? "Yes" : "No";


    os << "Circle :" << endl
        << "Date Created :\t" << c.dateCreated << endl
        << "Color :\t\t" << c.color << endl
        << "Is Filled :\t" << isFilled << endl
        << "Radius :\t" << c.radius << endl
        << "Area :\t\t" << c.area << endl;
    return os;
}