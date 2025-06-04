// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 2 : Elementary Programming
//
// Problem 2.2 : Write a program that reads in the radius and length of a cylinder and computes
//               the volume using the following formulas:
//
//               area   = radius * radius * PI
//               volume = area * length
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    const double PI = 3.14;         // Value of Pi
    double length;                  // Cylinder length value given by the user
    double radius;                  // Cylinder radius value given by the user
    double area;                    // Area of the cylinder to be computed by the system
    double volume;                  // Volume of the cylinder to be computed by the system
    
    
    // Prompting the user to enter the length and the radius of the cylinder
    cout << "Enter the length followed by the radius of the cylinder:" << endl;
    cin >> length >> radius;
    
    // Computing the area and the volume
    area = radius * radius * PI;
    volume = area * length;
    
    // Displaying Results
    cout << "Length:\t" << length << endl
         << "Radius:\t" << radius << endl
         << "Area:  \t" << area << endl
         << "Volume:\t" << volume << endl;
    
    return 0;
}