// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Abstract Classes & Interfaces
//
// Problem 14.3 : Design an interface name Colorable with a void method named howToColor().
//                Design a class named Square that extends GeometricObject and implements Colorable.
//                Implement the howToColor method to display the message "Color all four sides of the square."
//                Write a test program that creates an array of five GeometricObjects. For each object in the
//                array, invoke its howToColor method if it is colorable.
//
//                ( In C++, there are no built-in interfaces.                                               )
//                ( By logic, an interface is a pure abstract class with purely virtual functions.          )
//
//
// Author : Giorgio Murad

#include <iostream>

#include "GeometricObject.h"
#include "Square.h"

using namespace std;

int main() {
    Square* geo = new Square();

    geo->howToColor();
    return 0;
}