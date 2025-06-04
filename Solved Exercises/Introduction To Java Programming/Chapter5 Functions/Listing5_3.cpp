// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.3 : Write a program that prompts the user to enter a double value representing
//               a student's score, and displays whether the student got an A, B, C, D, or F.
//               The program should call a char method that returns the student's grade, and
//               display it from the main.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;
char score(double sc) {
    char ch;    // Character
    
    // Assigning ch according to the value of sc
    if (sc >= 90) {
        ch = 'A';
    } else if (sc >= 80) {
        ch = 'B';
    } else if (sc >= 70) {
        ch = 'C';
    } else if (sc >= 60) {
        ch = 'D';
    } else {
        ch = 'F';
    }
    
    // Returning the value of ch
    return ch;
}

int main() {
    double grade;       // Grade value given by the student
    
    
    // Asking the user to enter the grade value
    cout << "Enter the student's score:" << endl;
    cin >> grade;
    
    // Calling the function and displaying the result
    cout << "The score is " << score(grade) << endl;
    
    return 0;
}

