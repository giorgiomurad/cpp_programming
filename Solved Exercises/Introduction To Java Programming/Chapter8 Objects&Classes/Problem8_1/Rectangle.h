//
// Created by Giorgio Murad on 05/08/2025.
//

#ifndef RECTANGLE_H
#define RECTANGLE_H



class Rectangle {

public:
    double width{};
    double height{};
    Rectangle();
    Rectangle(double width, double height);
    double getArea();
    double getParameter();
};



#endif //RECTANGLE_H
