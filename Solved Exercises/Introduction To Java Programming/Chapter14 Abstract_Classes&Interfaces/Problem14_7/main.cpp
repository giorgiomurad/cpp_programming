// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Abstract Classes & Interfaces
//
// Problem 14.7 : Write a class named Octagon that extends GeometricObject and implements
//                the Comparable and Cloneable interfaces. Assume that all eight sides of the
//                octagon are equal, and the area can be computed using the following formula:
//
//                Area = 2 * (1 + radical(2)) * side * side.
//
//                Write a test program that creates an Octagon with side value 5, and displays its area
//                and parameter. Create another object using the 'clone' method from Cloneable, and compare
//                the two objects using the 'compareTo' method.
//
//
// Author : Giorgio Murad

#include <iostream>

#include "GeometricObject.h"
#include "Octagon.h"

using namespace std;

int main() {
    Octagon *oct = new Octagon(5);
    cout << "Octagon 1:" << endl << *oct << endl;

    cout << endl << endl;

    Octagon oct2 = oct->clone();
    cout << "Octagon 2:" << endl << oct2 << endl;


    cout << endl;
    if(oct->compareTo(oct2) == 0)
        cout << "The two octagon objects are identical." << endl;
    else
        cout << "The two octagon objects are not identical." << endl;

    return 0;
}