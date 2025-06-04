// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.25 : Write a method that takes a value in milliseconds, and returns a string value
//                in a following format: hh/mm/ss
//                Example: convertMillis(5500) returns 00:00:05
//                         convertMillis(100000) returns 00:01:40
//
//
// Author : Giorgio Murad
#include <iostream>
#include <string>

using namespace std;

string convertMillis(long millis) {
    string timeFormat;
    string sseconds, sminutes, shours;
    int seconds, minutes, hours;
    
    
    // Getting the total number of seconds
    seconds = (int) millis / 1000;
    
    // Getting the number of minutes, and updating seconds according to the minutes
    minutes = seconds / 60;
    seconds -= minutes * 60;
    
    // Getting the number of hours, and updating minutes according to the hours
    hours = minutes / 60;
    minutes -= hours * 60;
    
    // Setting the string values corresponding to hours, minutes, and seconds
    // And formatting the string values in time format
    shours   = ((hours >= 10) ? "" : "0")   + to_string(hours);
    sminutes = ((minutes >= 10) ? "" : "0") + to_string(minutes);
    sseconds = ((seconds >= 10) ? "" : "0") + to_string(seconds);
    
    // Finalizing the time format before returning it
    timeFormat.append(shours).append(":").append(sminutes).append(":").append(sseconds);
    return timeFormat;
}

int main() {
    long ms;        // Milliseconds
    
    
    // Prompting the user to enter the value in milliseconds
    cout << "Enter a value in milliseconds to convert it to time format:" << endl;
    cin >> ms;
    
    cout << endl;
    
    // Displaying the time format of the given milliseconds
    cout << "Time Format:" << endl;
    cout << convertMillis(ms) << endl;
    return 0;
}
