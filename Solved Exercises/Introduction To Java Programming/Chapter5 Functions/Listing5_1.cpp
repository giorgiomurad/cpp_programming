// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.1 : Write a program that prompts the user to enter two integers, and returns
//               the highest value.
//               The program should invoke a method called 'max'
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that takes two integers, and returns the maximum value
int max(int a, int b) {
    
    if(a > b)
        return a;
    else if (b > a)
        return b;
    else
        return a;
}

int main() {
    int n1, n2;     // Two integer values given by the user
    
    
    // Asking the user to enter two integer values
    cout << "Enter two integer values:" << endl;
    cin >> n1 >> n2;
    
    // Calling the function to display the result
    cout << "The maximum value is " << max(n1, n2) << endl;
    return 0;
}

