//
// Created by Giorgio Murad on 24/08/2025.
//

#ifndef MYRECTANGLE2D_H
#define MYRECTANGLE2D_H



class MyRectangle2D {
private:
    double x, y;            // Coordinates of the center of the rectangle
    double width, height;   // Width and height of the rectangle

public:
    MyRectangle2D();
    MyRectangle2D(double x, double y, double width, double height);
    double getX();
    double getY();
    double getWidth();
    double getHeight();
    double getArea();
    double getPerimeter();
    bool contains(double x, double y);
    bool contains(MyRectangle2D &rect);
    bool overlaps(MyRectangle2D &rect);
};



#endif //MYRECTANGLE2D_H
