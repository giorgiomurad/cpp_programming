// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.3 : Write the following two methods :
//               1. A method that returns the reversal of an integer.
//               2. A method that verifies if an integer is a palindrome.
//
//               Write a program that prompts the user to enter an integer, and displays
//               whether the entered number is a palindrome or not.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that reverses an integer value before returning it
int reverse(int value) {
    int rev = 0;
    
    while (value != 0) {
        int temp = value % 10;
        rev = rev * 10 + temp;
        
        value /= 10;
    }
    
    return rev;
}

// Function that returns true if the given value is equal to its reversed value, or false otherwise
bool isPalindrome(int value) {
    int rev = reverse(value);   // Reversal of the given value
    
    return (rev == value);
}

int main() {
    int nb;     // Integer value to be given by the user
    
    // Asking the user to enter an integer value
    cout << "Enter an integer value:" << endl;
    cin >> nb;
    
    // Displaying if the given integer is a palindrome or not
    if (isPalindrome(nb)) {
        cout << "The given number is a palindrome." << endl;
    } else {
        cout << "The given number is not a palindrome." << endl;
    }
    
    return 0;
}
