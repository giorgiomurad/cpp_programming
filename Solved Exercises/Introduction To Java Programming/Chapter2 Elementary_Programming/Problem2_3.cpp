// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 2 : Elementary Programming
//
// Problem 2.3 : Write a program that prompts the user to input a length value in feet,
//               converts it to meters, and displays the result.
//               One foot is 0.305 meters.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double feet;    // Value in feet given by the user
    double meters;  // Value in meters computed by the system
    
    
    // Prompting the user user to enter the langth in feet
    cout << "Enter the length in feet:" << endl;
    cin >> feet;
    
    // Computing the length in meters
    meters = feet * 0.305;
    
    // Displaying the result
    cout << feet << " feet is " << meters << " meters." << endl;
    
    return 0;
}
