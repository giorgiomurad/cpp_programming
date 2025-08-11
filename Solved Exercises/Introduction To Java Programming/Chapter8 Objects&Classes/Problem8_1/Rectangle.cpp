//
// Created by Giorgio Murad on 05/08/2025.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}

double Rectangle::getParameter() {
    return width*2 + height*2;
}

double Rectangle::getArea() {
    return width*height;
}