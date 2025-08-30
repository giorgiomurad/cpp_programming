//
// Created by Giorgio Murad on 12/08/2025.
//

#ifndef MYPOINT_H
#define MYPOINT_H



class MyPoint {
private:
    int x, y;

public:
    MyPoint();
    MyPoint(int x, int y);
    int getX();
    int getY();
    double getDistance(MyPoint &p);
    double getDistance(int x, int y);
};



#endif //MYPOINT_H
