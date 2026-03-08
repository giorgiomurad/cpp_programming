// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Abstract Classes & Interfaces
//
// Problem 14.8 : Write a method that sums the areas of all geometric objects in an array.
//                The method signature is:
//
//                public static void sumArea(GeometricObject[] a)
//
//                Write a test program that creates an array of four objects
//                (two rectangles and two circles), and computes their
//                total area using the method.
//
//
// Author : Giorgio Murad


#include "Circle.h"
#include "GeometricObject.h"
#include "Rectangle.h"
using namespace std;

double sum(GeometricObject **geos, int size);

int main() {
    int size = 4;
    GeometricObject **geos = new GeometricObject*[size];

    geos[0] = new Circle(3);
    geos[1] = new Circle(4);
    geos[2] = new Rectangle(3, 5);
    geos[3] = new Rectangle(2, 3);

    cout << "The sum of the areas of the geometric objects is " << sum(geos, size) << endl;
    return 0;
}

// Function that returns the sum of all the areas of the geometric objects
double sum(GeometricObject **geos, int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        GeometricObject *geo = geos[i];

        if (Circle *circle = dynamic_cast<Circle *>(geo))
            sum += circle->getArea();
        else if (Rectangle *rect = dynamic_cast<Rectangle *>(geo))
            sum += rect->getArea();
    }

    return sum;
}