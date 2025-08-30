//
// Created by Giorgio Murad on 12/08/2025.
//

#include "MyPoint.h"

#include <cmath>

MyPoint::MyPoint() {

    x = y = 0;
}

MyPoint::MyPoint(int x, int y) {

    this->x = x;
    this->y = y;
}

int MyPoint::getX() {

    return x;
}

int MyPoint::getY() {

    return y;
}

double MyPoint::getDistance(MyPoint &p) {
    double distance;
    int obX = p.getX();
    int obY = p.getY();
    int diffX, diffY;


    diffX = (obX > x) ? obX - x : x - obX;
    diffY = (obY > y) ? obY - y : y - obY;
    distance = sqrt(diffX * diffX + diffY * diffY);

    return distance;
}

double MyPoint::getDistance(int x, int y) {
    double distance;
    int diffX, diffY;


    diffX = (this->x > x) ? this->x - x : x - this->x;
    diffY = (this->y > y) ? this->y - y : y - this->y;
    distance = sqrt(diffX * diffX + diffY * diffY);

    return distance;
}