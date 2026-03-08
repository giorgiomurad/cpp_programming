//
// Created by Giorgio Murad on 28/11/2025.
//

#ifndef OCTAGON_H
#define OCTAGON_H
#include "Comparable.h"
#include "GeometricObject.h"
#include "Cloneable.h"

class Octagon : public GeometricObject,
                public Comparable<Octagon>,
                public Cloneable<Octagon> {
private:
    double side;                    // Side of the octagon
    double perimeter, area;         // Perimeter and area of the octagon

public:
    Octagon();
    Octagon(double side);
    Octagon(string color, bool isFilled, double side);
    void setSide(double side);
    double getSide();
    double getArea();
    double getPerimeter();
    friend ostream& operator<<(ostream& os, const Octagon& oct);
    int compareTo(Octagon& oct) override;
    Octagon& clone() override;
};



#endif //OCTAGON_H
