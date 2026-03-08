//
// Created by Giorgio Murad on 22/11/2025.
//

#include "Rectangle.h"

// No-arg constructor that creates a default rectangle object
Rectangle::Rectangle() : GeometricObject() {

    setLength(1);
    setWidth(1);
}

// Constructor that creates a rectangle with specified length and width
Rectangle::Rectangle(double length, double width) : GeometricObject() {

    setLength(length);
    setWidth(width);
}

// Constructor that creates a rectangle with specified length, width, color, and isFilled
Rectangle::Rectangle(double length, double width, string color, bool isFilled) :
    GeometricObject(color, isFilled){

    setLength(length);
    setWidth(width);
}


// Function that sets the length of the rectangle
void Rectangle::setLength(double length) {
    this->length = length;

    getArea();
}

// Function that sets the width of the rectangle
void Rectangle::setWidth(double width) {
    this->width = width;

    getArea();
}

// Function that returns the length of the rectangle
double Rectangle::getLength() {

    return length;
}

// Function that returns the width of the rectangle
double Rectangle::getWidth() {

    return width;
}

// Function that computes and returns the area of the rectangle
double Rectangle::getArea() {
    area = length * width;

    return area;
}

// Overridden output operator that prints the contents of the rectangle
ostream& operator<<(ostream& os, const Rectangle& rect) {
    string isFilled = rect.filled ? "Yes" : "No";


    os << "Rectangle :" << endl
        << "Date Created :\t" << rect.dateCreated << endl
        << "Color :\t\t" << rect.color << endl
        << "Is Filled :\t" << isFilled << endl
        << "Length :\t" << rect.length << endl
        << "Width :\t\t" << rect.width << endl
        << "Area :\t\t" << rect.area << endl;
    return os;
}