// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 2 : Elementary Programming
//
// Problem 2.4 : Write a program that prompts the user to input the weight in
//               pounds, converts the value to kilograms, and displays the result.
//               One pound is 0.454 kilograms;
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double pounds;      // Value in pounds given by the user
    double kilograms;   // Value in meters computed by the system
    
    
    // Prompting the user user to enter the langth in feet
    cout << "Enter the weight in pounds:" << endl;
    cin >> pounds;
    
    // Computing the weight in kilograms
    kilograms = pounds * 0.454;
    
    // Displaying the result
    cout << pounds << " pounds is " << kilograms << " kilograms." << endl;
    
    return 0;
}
