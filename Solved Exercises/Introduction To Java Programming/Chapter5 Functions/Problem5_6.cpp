// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Problem 5.6 : Write a program that prompts the user to enter an integer,
//               and displays the following pattern:
//
//                                                  1
//                                                2 1
//                                              3 2 1
//                                                ...
//                                        n n-1 3 2 1
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

// Function that displays the pattern given the number of rows
void pattern(int rows) {
    
    for(int i = 1; i <= rows; i++) {
        for (int j = rows; j >= 1; j--) {
            
            if (j <= i) {
                printf("%2d ", j);
            } else {
                printf("%2s ", " ");
            }
        }
        cout << endl;
    }
}

int main() {
    int nb;     // Integer value to be given by the user
    
    
    // Asking the user to enter the number of rows to display the pattern
    cout << "Enter the number of rows to display the pattern:" << endl;
    cin >> nb;
    
    // Displaying result
    cout << "Pattern:" << endl;
    pattern(nb);
    
    return 0;
}
