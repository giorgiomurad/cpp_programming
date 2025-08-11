//
// Created by Giorgio Murad on 06/08/2025.
//

#include "Location.h"

#include <iostream>
#include <__ostream/basic_ostream.h>


// Constructor that creates a location object with the specified row and column values
Location::Location(int row, int col) {

    this->row = row;
    this->col = col;
    this->maxValue = 0;
}

// Constructor that creates a location object with the specified row, column, and maximum values
Location::Location(int row, int col, int maxValue) {

    this->row = row;
    this->col = col;
    this->maxValue = maxValue;
}

// Function that creates a Location instance corresponding to the largest element in the multidimensional array
Location Location::locateLargest(int **multi, int size) {
    double temp;            // Temporary variable
    int maxRow, maxCol;     // Row and column index of the largest value in the array

    temp = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (multi[i][j] > temp) {
                temp = multi[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    return Location(maxRow, maxCol, temp);
}
