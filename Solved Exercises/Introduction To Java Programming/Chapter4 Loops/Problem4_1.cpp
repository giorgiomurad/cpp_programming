// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 4 : Loops
//
// Problem 4.1 : Write a program that prompts the user to enter an unspecified number of integers.
//               After reading the integers, the program should display the number of positive
//               numbers entered, the number of negative integers entered, and the average.
//               The program should stop after reading the integer zero.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    int readInt;            // Integer value read
    int nbOfIntegers;       // Number of integers
    int positives;          // Number of positive integers
    int negatives;          // Number of negative integers
    int totalSum;           // Sum of all integer values
    double avg;             // Average
    
    
    // Prompting the user to enter an unspecified number of integers (ending with zero)
    cout << "Enter an unspecified number of integers:" << endl;
    cin >> readInt;
    
    // Initializing variables to their default values
    nbOfIntegers = 0;
    positives = 0;
    negatives = 0;
    totalSum = 0;
    avg = 0;
    
    // While Loop
    while (readInt != 0) {
        totalSum += readInt;
        nbOfIntegers++;
        
        if (readInt > 0) {
            
            positives++;
        } else if (readInt < 0) {
            
            negatives++;
        }
        
        cin >> readInt;
    }
    
    // Computing the average if incase integers were entered. Otherwise, the average remains zero
    if (nbOfIntegers > 0)
        avg = totalSum / nbOfIntegers;
    
    // Displaying Results
    cout << "Number of integers entered:\t\t" << nbOfIntegers <<
    endl << "Number of positive integers:\t" << positives <<
    endl << "Number of negative integers:\t" << negatives <<
    endl << "Total Sum:\t" << totalSum <<
    endl << "Average:\t" << avg << endl;
    
    return 0;
}
