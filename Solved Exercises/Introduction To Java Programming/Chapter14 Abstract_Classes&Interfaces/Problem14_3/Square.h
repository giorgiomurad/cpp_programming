//
// Created by Giorgio Murad on 26/11/2025.
//

#ifndef SQUARE_H
#define SQUARE_H
#include "Colorable.h"
#include "GeometricObject.h"


class Square : public GeometricObject, public Colorable {
private:
    double side;                // Side value of the square. (A square has four equal sides)
    double perimeter, area;     // Perimeter and Area values of the square
public:
    Square();
    Square(double side);
    Square(string color, bool isFilled, double side);
    void setSide(double side);
    double getSide();
    double getPerimeter();
    double getArea();
    void howToColor() override;
};



#endif //SQUARE_H
