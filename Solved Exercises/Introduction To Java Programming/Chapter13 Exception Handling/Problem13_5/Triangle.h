//
// Created by Giorgio Murad on 13/11/2025.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GeometricObject.h"



class Triangle : public GeometricObject {
private:
    double side1, side2, side3;     // Three sides of the triangle
    double perimeter;               // Perimeter of the triangle
    double area;                    // Area of the triangle

public:
    Triangle();
    Triangle(double side1, double side2, double side3);
    Triangle(double side1, double side2, double side3, string color, bool filled);
    void setSides(double side1, double side2, double side3);
    void setSide1(double side1);
    void setSide2(double side2);
    void setSide3(double side3);
    bool isValid(double s1, double s2, double s3);
    double* getSides();
    double getSide1();
    double getSide2();
    double getSide3();
    double getArea();;
    double getPerimeter();
    friend ostream& operator<<(ostream& os, const Triangle& t);
};



#endif //TRIANGLE_H
