// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Exception Handling
//
// Problem 13.3 : Write a program that creates an integer vector containing a hundred random integer values.
//                The program should prompt the user to enter the index value, and display the element value
//                at the given index.
//                In case the user enters an index out of bounds, the program should inform the user.
//                  (For this C++ exercise, use an integer vector instead of a pointer to an integer array, )
//                  (because a pointer to an array in C++ does not throw an out_of_range exception while    )
//                  (the vector does with the at() function.                                                )
//
//
// Author : Giorgio Murad

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> v;      // Initializing integer vector
    int index;          // Index value to be entered by the user


    // Filling the vector with one-hundred randomly generated integer values
    for (int i = 0; i < 100; i++) {
        int temp = rand() % 100;

        v.push_back(temp);
    }

    // Prompting the user to enter the index value to access the integer vector at the given index
    // value, and displays the integer value.
    // In case the users enters an invalid integer value, the user should be reported
    try {
        cout << "Enter an index to display the integer value: ";
        cin >> index;

        int value = v.at(index);
        cout << "The integer value is: " << value << endl;
    } catch (out_of_range &e) {

        cout << "Invalid Index." << endl
            << "The index value is out of range." << endl;
    }

    return 0;
}