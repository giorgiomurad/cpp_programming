//
// Created by Giorgio Murad on 06/08/2025.
//

#include "Fan.h"

// No-arg constructor that creates an empty default fan
Fan::Fan() {
    on = false;
    setSpeed(SLOW);
    setRadius(5);
    setColor("Blue");
}

// Constructor that creates a fan given its color and radius
Fan::Fan(double radius, string color) {
    on = false;
    setSpeed(SLOW);
    setRadius(radius);
    setColor(color);
}


void Fan::switchOnOff() {

    on = !on;
}

void Fan::setSpeed(int speed) {

    switch (speed) {
        case SLOW:
            this->speed = SLOW;
            break;
        case MEDIUM:
            this->speed = MEDIUM;
            break;
        case FAST:
            this->speed = FAST;
            break;
        default:
            cout << "Invalid Speed Number." << endl;
    }
}

void Fan::setRadius(int radius) {

    this->radius = radius;
}

void Fan::setColor(string color) {

    this->color = color;
}

ostream& operator<<(ostream &out, const Fan &fan) {
    string fspeed;

    if (fan.speed == 1) { fspeed = "Slow"; }
    else if (fan.speed == 2) { fspeed = "Medium"; }
    else if (fan.speed == 3) { fspeed = "Fast"; }

    if (fan.on) {
        out << "Speed: " << fspeed <<
            endl << "Radius: " << fan.radius <<
                endl << "Color: " << fan.color << endl;
    } else {
        out << "Radius: " << fan.radius <<
            endl << "Color: " << fan.color << endl;
    }
    return out;
}
