// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Objects & Classes
//
// Problem 8.13 : Design a class named Location that locates the maximal value in a multidimensional
//                array.
//                The class contains public data fields which are 'row', 'column', and 'maxvalue', and
//                includes a static method locateLargest that returns an instance of a Location object.
//
//                Write a program that creates a two-dimensional array, and calls the method in order to
//                display the array's largest element along with its indices.
//
//
// Author : Giorgio Murad
#include <iostream>

#include "Location.h"

using namespace std;

int main() {;
    int** multi = new int*[5];      // Multi-dimensional integer array


    // Prompting the user to fill the array with values
    cout << "Enter integer values in a 5-by-5 array: " << endl;
    for(int i=0; i<5; i++) {
        multi[i] = new int[5];

        for(int j=0; j<5; j++) {
            cin >> multi[i][j];
        }
    }

    // Calling the location function that returns the location of the largest element value in the array
    Location t = Location::locateLargest(multi, 5);

    // Display the row and column indexes of the largest value
    cout << "The largest value is " << t.maxValue <<
        " located at row " << (t.row+1) << " and column " << (t.col+1) << "." << endl;

    return 0;
}