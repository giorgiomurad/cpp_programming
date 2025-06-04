// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 4 : Loops
//
// Problem 4.18 : Using nested loops, write a program that displays the following patterns:
//                Pattern I     Pattern II      Pattern III     Pattern IV
//                1             1 2 3 4 5 6               1     1 2 3 4 5 6
//                1 2           1 2 3 4 5               2 1       1 2 3 4 5
//                1 2 3         1 2 3 4               3 2 1         1 2 3 4
//                1 2 3 4       1 2 3               4 3 2 1           1 2 3
//                1 2 3 4 5     1 2               5 4 3 2 1             1 2
//                1 2 3 4 5 6   1               6 5 4 3 2 1               1
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

int main() {
    // Displaying Pattern I
    cout << "Pattern I:" << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    
    cout << endl;
    cout << endl;
    
    
    // Displaying Pattern II
    cout << "Pattern II:" << endl;
    for (int i = 6; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            
            cout << j << " ";
        }
        
        cout << endl;
    }
    
    
    cout << endl;
    cout << endl;
    
    
    // Displaying Pattern III:
    cout << "Pattern III:" << endl;
    for (int i = 1; i <= 6; i++) {
        for (int j = 5; j >= i; j--) {
            
            cout << "  ";
        }
        
        for (int k = i; k >= 1; k--) {
            
            cout << k << " ";
        }
        cout << endl;
    }
    
    
    cout << endl;
    cout << endl;
    
    
    // Displaying Pattern IV:
    cout << "Pattern IV:" << endl;
    for (int i = 6; i >= 1; i--) {
        for (int j = 5; j > (i-1); j--) {
            
            cout << "  ";
        }
        
        for (int k = 1; k <= i; k++) {
            
            cout << k << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}
