// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.) (Edited)
// Objects & Classes
//
// Problem 8.8 : Design a class that represents a fan.
//               The class includes:
//                  - Three constants: SLOW(1), MEDIUM(2), and HIGH(3) to denote fan speed
//                  - Data field that specifies the fans speed.                 (SLOW by default)
//                  - Data field that specifies whether the fan is on or off.   (Off by default)
//                  - Data field that specifies the radius of the fan           (5 by default)
//                  - Data field that specifies the color of the fan.           (Blue by default)
//                  - Accessor and mutator methods for all data fields.
//                  - A no-arg constructor that creates a default fan.
//                  - A constructor that creates a fan with specified radius and color.
//                  - An output stream '<<' operator method that returns a string containing all information of the fan.
//                    If the fan is on, the returned string would describe the fan's current speed, radius,
//                    and color. Otherwise, the returned string would only describe the fan's radius and color.
//
//               Write a program that creates two fan objects. The first fan should have radius 10, color yellow,
//               and assigned maximum speed. The second fan should be assigned medium speed, have radius 5, color
//               blue, and turned off.
//               The program should display information of the two fan's by invoking their toString() methods.
//
//
// Author : Giorgio Murad
#include <iostream>

#include "Fan.h";

using namespace std;

int main() {
    Fan f1(10, "Yellow");
    Fan f2;

    f1.switchOnOff();
    f1.setSpeed(3);
    f2.setSpeed(2);

    cout << "Fan 1:" << endl;
    cout << f1 << endl;

    cout << endl;

    cout << "Fan 2:" << endl;
    cout << f2 << endl;
    return 0;
}