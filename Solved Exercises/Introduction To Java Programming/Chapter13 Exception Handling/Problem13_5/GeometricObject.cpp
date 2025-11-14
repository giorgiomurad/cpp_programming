//
// Created by Giorgio Murad on 25/10/2025.
//

#include "GeometricObject.h"

// Constructor that creates a default geometric object
GeometricObject::GeometricObject() {
    now = system_clock::now();
    timestamp = system_clock::to_time_t(now);
    dateTime = *localtime(&timestamp);

    setColor("");
    setFilled(false);
    setDateCreated(dateTime.tm_mday, dateTime.tm_mon, dateTime.tm_year);
}

// Constructor that creates a geometric object with the given color and filled status
GeometricObject::GeometricObject(string color, bool isFilled) {
    now = system_clock::now();
    timestamp = system_clock::to_time_t(now);
    dateTime = *localtime(&timestamp);

    setColor(color);
    setFilled(isFilled);
    setDateCreated(dateTime.tm_mday, dateTime.tm_mon+1, dateTime.tm_year+1900);
}


// Function that sets the color of the object
void GeometricObject::setColor(string color) {

    this->color = color;
}

// Function that sets the fill of the object
void GeometricObject::setFilled(bool filled) {

    this->filled = filled;
}

// Function that sets the created date of the object
void GeometricObject::setDateCreated(int day, int month, int year) {
    string sday, smonth, syear;

    sday = day >= 10 ? to_string(day) : "0" + to_string(day);
    smonth = month >= 10 ? to_string(month) : "0" + to_string(month);
    syear = to_string(year);

    this->dateCreated = sday + "/" + smonth + "/" + syear;
}


// Function that returns the color of the object
string GeometricObject::getColor() {

    return color;
}

// Function that returns true if the object is filled, and false otherwise
bool GeometricObject::isFilled() {

    return filled;
}

// Function that returns the date the object was created
string GeometricObject::getDateCreated() {

    return dateCreated;
}

// Overridden output operator that displays the geometric object's contents
ostream& operator<<(ostream& os, const GeometricObject& obj) {
    string isFilled = obj.filled ? "Yes" : "No";

    os << "Date Created :\t" << obj.dateCreated << endl
       << "Color :\t" << obj.color << endl
       << "Is Filled:\t" << isFilled << endl;

    return os;
}