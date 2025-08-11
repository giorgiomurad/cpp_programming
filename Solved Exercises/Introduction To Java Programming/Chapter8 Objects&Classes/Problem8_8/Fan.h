//
// Created by Giorgio Murad on 06/08/2025.
//

#ifndef FAN_H
#define FAN_H
#include <iostream>

using namespace std;
class Fan {
private:
    static const int SLOW   = 1;    // Slow Speed
    static const int MEDIUM = 2;    // Medium Speed
    static const int FAST   = 3;    // Fast Speed

    int speed;      // Fan Speed
    bool on;        // On or Off
    double radius;  // Radius of the fan
    string color;    // Color of the fan

public:
    Fan();
    Fan(double radius, string color);

    void setSpeed(int speed);
    void switchOnOff();
    void setRadius(int radius);
    void setColor(string color);
    friend ostream& operator<<(ostream& out, const Fan& fan);
};



#endif //FAN_H
