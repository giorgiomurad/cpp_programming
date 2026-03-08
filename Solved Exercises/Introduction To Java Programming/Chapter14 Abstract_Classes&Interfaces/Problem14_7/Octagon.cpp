//
// Created by Giorgio Murad on 28/11/2025.
//

#include "Octagon.h"

#include <set>

// No-arg constructor that initializes a default octagon object
Octagon::Octagon() : GeometricObject() {

    setSide(1);
}

// Constructor that initializes an octagon object with the specified side value
Octagon::Octagon(double side) : GeometricObject() {

    setColor("");
    setFilled(false);
    setSide(side);
}

// Constructor that initializes an octagon with the specified color, isFilled, and side
Octagon::Octagon(string color, bool isFilled, double side) :
    GeometricObject(color, isFilled){

    setSide(side);
}


// Function that sets the side value of the octagon
void Octagon::setSide(double side) {

    this->side = side;
    getPerimeter();
    getArea();
}

// Function that returns the side value of the octagon
double Octagon::getSide() {

    return side;
}

// Function that computes the area of the octagon, and returns it
double Octagon::getArea() {
    area = 2 * pow(side, 2) * (1 + sqrt(2));

    return area;
}

// Function that computes the perimeter of the octagon, and returns it
double Octagon::getPerimeter() {
    perimeter = 8 * side;

    return perimeter;
}

// Overridden output operator that displays information about the octagon
ostream& operator<<(ostream& os, const Octagon& o) {
    string isFilled = o.filled ? "Yes" : "No";

    os << "Date Created :\t" << o.dateCreated << endl
    << "Color :\t" << o.color << endl
    << "Is Filled :\t" << isFilled << endl
    << endl
    << "Side :\t" << o.side << endl
    << "Parameter :\t" << o.perimeter << endl
    << "Area :\t" << o.area << endl;

    return os;
}

// Overridden function that compare this octagon with another octagon object
int Octagon::compareTo(Octagon &oct) {
    int diff = (int) (area - oct.area);

    return diff;
}

// Overridden function that clones the octagon object, and returns the clone
Octagon& Octagon::clone() {

    return *(new Octagon(this->side));
}