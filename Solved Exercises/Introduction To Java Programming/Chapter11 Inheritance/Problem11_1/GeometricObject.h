//
// Created by Giorgio Murad on 25/10/2025.
//

#ifndef GEOMETRICOBJECT_H
#define GEOMETRICOBJECT_H

#include <string>
#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

class GeometricObject {
protected:
    time_point<system_clock> now;   // System Clock
    time_t timestamp;
    tm dateTime;
    string color;                   // Color of the geometric object
    bool filled;                    // Boolean that states if the geometric object is filled or not
    string dateCreated;             // Date the geometric object was created

public:
    GeometricObject();
    GeometricObject(string color, bool isFilled);
    void setColor(string color);
    void setFilled(bool filled);
    void setDateCreated(int day, int month, int year);
    string getColor();
    bool isFilled();
    string getDateCreated();
    friend ostream& operator<<(ostream& os, const GeometricObject& obj);

};



#endif //GEOMETRICOBJECT_H
