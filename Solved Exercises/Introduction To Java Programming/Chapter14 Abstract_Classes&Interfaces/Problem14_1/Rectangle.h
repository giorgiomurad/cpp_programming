//
// Created by Giorgio Murad on 22/11/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GeometricObject.h"


class Rectangle : public GeometricObject {
private:
    double length, width;       // Length and Width of the rectangle
    double area;                // Area of the rectangle

public:
    Rectangle();
    Rectangle(double length, double width);
    Rectangle(double length, double width, string color, bool isFilled);
    void setLength(double length);
    void setWidth(double width);
    double getLength();
    double getWidth();
    double getArea();
    friend ostream& operator<<(ostream& os, const Rectangle& rect);
};



#endif //RECTANGLE_H
