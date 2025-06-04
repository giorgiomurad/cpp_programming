// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 5 : Methods
//
// Listing 5.4 : Write a program that prompts the user to enter an integer value.
//               The program call a method that increments the integer by one,
//               displays its value.
//               The program will then display the value from the main after calling
//               the method.
//
//
// Author : Giorgio Murad
#include <iostream>

using namespace std;

void inc(int n) {
    
    cout << "In the method, the value is " << ++n << endl;
}

int main() {
    int x;
    
    cout << "Enter an integer:" << endl;
    cin >> x;
    
    inc(x);
    cout << "After the method, the value is " << x << endl;
    return 0;
}
