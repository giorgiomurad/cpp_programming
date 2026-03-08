//
// Created by Giorgio Murad on 21/11/2025.
//

#ifndef CIRCLE_H
#define CIRCLE_H

#include "GeometricObject.h"

class Circle : public GeometricObject {
private:
    double radius;  // Radius of the circle
    double area;    // Area of the circle

public:
    Circle();
    Circle(double radius);
    Circle(double radius, string color, bool isFilled);
    void setRadius(double radius);
    double getRadius();
    double getArea();
    friend ostream& operator<<(ostream& os, const Circle& c);
};



#endif //CIRCLE_H
