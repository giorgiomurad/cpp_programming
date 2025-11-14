// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Exception Handling
//
// Problem 13.5 : Create a class IllegalTriangleException, and modify the constructor of the class
//                Triangle, created in Exercise 11.1, to throw an exception in case the addition of
//                the triangle's two sides is greater than the third.
//
//
// Author : Giorgio Murad

#include "Triangle.h"

#include <iostream>

#include "IllegalTriangleException.h"

using namespace std;

int main() {
    Triangle* triangle;

    try {
        triangle = new Triangle(4, 3, 1, "Red", true);

        cout << *triangle << endl;
    } catch (IllegalTriangleException &e) {
        cerr << e.what() << endl;
    }
    return 0;
}