// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 3 : Selections
//
// Problem 3.8 : Write a program that prompts the user to enter three integers.
//               The program must then sort the integers, and displays them in order.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;
int main() {
    int num1, num2, num3;       // Three integer values given by the user
    int great, medium, least;   // Great, medium, and least integer values
    
    
    great = 0;
    medium = 0;
    least = 0;
    
    // Prompting the user to enter three integer values
    cout << "Enter three integer values:" << endl;
    cin >> num1;
    great = num1;
    
    cin >> num2;
    if (num2 > great) {
        medium = great;
        great = num2;
    } else {
        medium = num2;
    }
    
    cin >> num3;
    if (num3 > great) {
        least = medium;
        medium = great;
        great = num3;
    } else {
        if (num3 > medium) {
            least = medium;
            medium = num3;
        } else {
            least = num3;
        }
    }
    
    // Displaying the sorted integers
    cout << "The sorted integers are: " << great << " " << medium << " " << least << endl;
    return 0;
}
