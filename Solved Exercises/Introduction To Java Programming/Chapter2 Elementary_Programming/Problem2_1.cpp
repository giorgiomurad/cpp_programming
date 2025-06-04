// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 2 : Elementary Programming
//
// Problem 2.1 : Write a program that that prompts the user to enter a value in Celsius, converts the
//               value to Fahrenheit, and displays the result.
//               The formula for converting Celsius to Fahrenheit is as follows:
//
//               F = 9 / 5 * C + 32
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double celsius;        // Temperature in celsius given by the user
    double fahrenheit;     // Temperature in fahrenheit computed by the system
    
    
    // Prompting the user to enter the temperature in celcius
    cout << "Enter the temperature in celcius:" << endl;
    cin >> celsius;
    
    // Converting celsius to fahrenheit
    fahrenheit = (9.0/5) * celsius + 32;
    
    // Displaying the result
    cout << celsius << " Celcius is " << fahrenheit << " Fahrenheit." << endl;
}
