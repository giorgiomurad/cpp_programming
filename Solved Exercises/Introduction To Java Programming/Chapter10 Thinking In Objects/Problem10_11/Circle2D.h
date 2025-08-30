//
// Created by Giorgio Murad on 20/08/2025.
//

#ifndef CIRCLE2D_H
#define CIRCLE2D_H



class Circle2D {
private:
    // Variables
    int x, y;       // X and Y coordinates of the circle's center
    double radius;  // Radius of the circle

    // Functions
    double distance(int x, int y);
public:
    // Constructors
    Circle2D();
    Circle2D(int x, int y, double radius);

    // Functions
    int getX();
    int getY();
    double getRadius();
    double getArea();
    double getParameter();
    bool contains(double x, double y);
    bool contains(Circle2D circle);
    bool overlaps(Circle2D circle);
};



#endif //CIRCLE2D_H
