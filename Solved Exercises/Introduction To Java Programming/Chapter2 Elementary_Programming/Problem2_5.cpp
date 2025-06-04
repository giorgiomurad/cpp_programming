// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 2 : Elementary Programming
//
// Problem 2.5 : Write a program that prompts the user to enter the subtotal and gratuity rate
//               then computes and displays the gratuity and the total.
//
//               Ex.: If the user enters 10 for subtotal and 15 for the gratuity rate, the program
//                    will then display $1.5 for the gratuity and $11.5 as the total.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double subtotal;    // Subtotal value given by the user
    double gratRate;    // Gratuity Rate given by the user
    double gratuity;    // Gratuity computed by the system
    double total;       // Total value computed by the system
    
    
    // Prompting the user to enter the subtotal and the gratuity rate
    cout << "Enter the subtotal followed by the gratuity rate:" << endl;
    cin >> subtotal >> gratRate;
    
    // Computing the gratuity and the total
    gratRate /= 100;
    gratuity = subtotal * gratRate;
    total = subtotal + gratuity;
    
    // Displaying Results
    cout << "Subtotal:     \t" << subtotal <<
    endl << "Gratuity Rate:\t" << gratRate <<
    endl << "Gratuity:     \t" << gratuity <<
    endl << "Total:        \t" << total << endl;
    
    
    return 0;
}
