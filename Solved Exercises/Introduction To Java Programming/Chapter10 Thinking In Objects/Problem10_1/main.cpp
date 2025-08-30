// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.) (Edited)
// Thinking in Objects
//
// Problem 10.1 : Design a class named Time. The class includes:
//                  - Data fields: hour, minute, and second
//                  - No-arg constructor that creates a time object for the current time
//                  - A constructor that creates a time object with the specified elapse time
//                    since midnight of Jan 1, 1970, in milliseconds.
//                  - A constructor that constructs a time object with the specified hour, minute,
//                    and second.
//                  - A method named setTime(long elapseTime) that sets a new time for the object.
//                  - A toString() method that returns a string that includes the object's hour,
//                    minute, and second values.
//
//                  A test program should create three different Time objects, and display their
//                  results.
//
//
// Author : Giorgio Murad
#include <iostream>

#include "Time.h"

using namespace std;

int main() {
    Time *t1 = new Time();                              // Default time object
    Time *t2 = new Time(45678);                         // Time object given its elapse time
    Time *t3 = new Time(12, 45, 30);    // Time object given its hour, minute, and second


    // Displaying the contents of the three time objects
    //
    // Time 1
    cout << "Time 1:" << endl;
    cout << *t1 << endl;

    // Time 2
    cout << "Time 2:" << endl;
    cout << *t2 << endl;

    // Time 3
    cout << "Time 3:" << endl;
    cout << *t3 << endl;
    
    return 0;
}