//
// Created by Giorgio Murad on 13/11/2025.
//

#include "Triangle.h"
#include "IllegalTriangleException.h"

#include <cmath>

// No-arg constructor that creates a default triangle object
Triangle::Triangle() : GeometricObject(){

    setSides(0, 0, 0);
}

// Constructor that creates a triangle object with the specified side values
Triangle::Triangle(double side1, double side2, double side3) :
    GeometricObject(){

    setSides(side1, side2, side3);
}

// Constructor of the triangle object that creates a triangle with three given side values, color,
// and filled (true or false)
Triangle::Triangle(double side1, double side2, double side3, string color, bool filled) :
    GeometricObject(color, filled) {

    setSides(side1, side2, side3);
}

// Function to set the values of the sides
void Triangle::setSides(double side1, double side2, double side3){

    setSide1(side1);
    setSide2(side2);
    setSide3(side3);
}

// Function to set side 1
void Triangle::setSide1(double side1) {
    if (isValid(side1, side2, side3))
        this->side1 = side1;

    // If the value of side 1 is updated, so are the perimeter and area values
    getPerimeter();
    getArea();
}

// Function to set side 2
void Triangle::setSide2(double side2) {
    if (isValid(side1, side2, side3))
        this->side2 = side2;

    // If the value of side 2 is updated, so are the perimeter and area values
    getPerimeter();
    getArea();
}

// Function to set side 3
void Triangle::setSide3(double side3) {
    if (isValid(side1, side2, side3))
        this->side3 = side3;

    // If the value of side 3 is updated, so are the perimeter and area values
    getPerimeter();
    getArea();
}

// Function that checks the triangles sides
// If the sum of the first and second side is more than the third side, then
// an IllegalTriangleException is thrown
bool Triangle::isValid(double s1, double s2, double s3) {
    if (s1 + s2 > s3)
        throw IllegalTriangleException(
                    "Error:\nThe addition of sides 1 and 2 cannot be more than the value of side 3!"
                );

    return true;
}

// Function that returns an array containing the values of sides 1, 2, and 3
double* Triangle::getSides() {
    double* sides = new double[3];

    sides[0] = side1;
    sides[1] = side2;
    sides[2] = side3;
}

// Function that returns the value of side 1
double Triangle::getSide1() {

    return side1;
}

// Function that returns the value of side 2
double Triangle::getSide2() {

    return side2;
}

// Function that returns the value of side 3
double Triangle::getSide3() {

    return side3;
}

// Function that returns the parameter of the triangle
double Triangle::getPerimeter() {

    perimeter = side1 + side2 + side3;
    return perimeter;
}

// Function that computes the area of the triangle, and returns its value
double Triangle::getArea() {
    double semi;

    semi = (side1 + side2 + side3) / 2;
    area = sqrt(semi * (semi - side1) * (semi - side2) * (semi - side3));

    return area;
}

// Overridden output operator that displays the triangles side values, area, and parameter.
// And since the triangle object inherits from GeometricObject, the color, isFilled, and date created
// are also displayed in the output.
ostream& operator<<(ostream& os, const Triangle& t) {
    string isFilled = t.filled ? "Yes" : "No";

    os << "Date Created :\t" << t.dateCreated << endl
       << "Color :\t" << t.color << endl
       << "Is Filled :\t" << isFilled << endl
       << endl
       << "Sides :" << endl
       << "\t- Side 1 :\t" << t.side1 << endl
       << "\t- Side 2 :\t" << t.side2 << endl
       << "\t- Side 3 :\t" << t.side3 << endl
       << "Parameter :\t" << t.perimeter << endl
       << "Area :\t" << t.area << endl;
}