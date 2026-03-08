// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Abstract Classes & Interfaces
//
// Problem 14.1 : Modify the GeometricObject class to implement the Comparable interface,
//                and define a static max method in the GeometricObject class for finding the
//                larger of the two different GeometricObject objects, the Circle and Rectangle objects.
//                Write a test program that uses the max method that finds the larger of two
//                circles, and the larger of two rectangles.
//
//                  ( In logical programming, an interface is similar to a class that only contains abstract    )
//                  ( functions.                                                                                )
//                  ( C++ has no particular way of implementing an interface, but would allow creating a class  )
//                  ( only containing abstract function, and letting other class objects to inherit from that   )
//                  ( abstract, and treat like an interface.                                                    )
//                  ( The Comparable interface only contains the method compareTo that is purely virtual, and   )
//                  ( returns an integer value representing the content difference between the calling object   )
//                  ( and the specified object.
//
//
// Author : Giorgio Murad


#include <iostream>

#include "Circle.h"
#include "GeometricObject.h"
#include "Rectangle.h"

using namespace std;

int main() {
    // Initializing an a pointer to an array of five pointers
    // every pointer element referencing a different geometric objects
    GeometricObject** geos = new GeometricObject*[5];

    // Initializing every geometric object in the array
    geos[0] = new Rectangle(2, 1, "Blue", true);
    geos[1] = new Rectangle(4, 2, "Red", true);
    geos[2] = new Circle(1, "Green", true);
    geos[3] = new Circle(8, "Yellow", true);
    geos[4] = new Circle(7, "Cyan", true);


    // Declaring a new pointer to point to the largest geometric object of the array
    GeometricObject* maximum;
    for(int i = 0; i < 4; i++) {
        maximum = &GeometricObject::max(*geos[i], *geos[i+1]);
    }

    // Ensuring whether the largest geometric object represents a rectangle or a circle
    // before displaying its contents
    if (auto *rectangle = dynamic_cast<Rectangle *>(maximum))
        cout << *rectangle << endl;
    else if (auto circle = dynamic_cast<Circle *>(maximum))
        cout << *circle << endl;

    delete geos;
    return 0;
}