//
// Created by Giorgio Murad on 26/11/2025.
//

#include "Square.h"

// No-arg constructor that initializes a default square object with every side equal to one
Square::Square() : GeometricObject() {

    setSide(1);
}

// Constructor that initializes a square object with specified side value.
// ( A square usually has four equal sides, so the constructor takes a single value. )
Square::Square(double side) :
    GeometricObject() {

    setSide(side);
}

// Constructor that initializes a square with the given color, isFilled, and side
Square::Square(string color, bool isFilled, double side) :
    GeometricObject(color, isFilled) {

    setSide(side);
}

// Function that sets the value of a side of a square
void Square::setSide(double side) {

    this->side = side;
    getPerimeter();
    getArea();
}

// Function that computes and returns the perimeter of the square
double Square::getPerimeter() {
    perimeter = 4 * side;

    return perimeter;
}

// Function that computes and returns the area of the square
double Square::getArea() {
    area = side * side;

    return area;
}

// Overridden function that prints how to color the square object
void Square::howToColor() {

    cout << "Color the square from all four of its sides." << endl;
}