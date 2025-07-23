// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.19 : Write a function that checks in a multidimensional array if there are
//                four consecutive integer values horizontally, vertically, or diagonally.
//
//
//
//
// Author : Giorgio Murad
#include  <iostream>

// Function that takes a single-dimensional array, and returns true if the array contains four
// equal consecutive values horizontally
bool hasHorizontalConsecutiveFour(int **multi, int size);

// Function that takes a multidimensional array, and returns true if the array contains four
// equal consecutive values vertically
bool hasVerticalConsecutiveFour(int **multi, int size);

// Function that returns true if the array has four equal consecutive values diagonally from left to right
bool hasLRDiagonalConsecutiveFour(int **multi, int size);

// Function that returns true if the array has four equal consecutive values diagonally from right to left
bool hasRLDiagonalConsecutiveFour(int **multi, int size);

using namespace std;
int main() {
    int size;       // Size given by the user
    int **matrix;   // Double pointer referencing a multidimensional integer array


    // Prompting the user to input the dimension of the array
    cout << "Enter the dimension of the array (number of rows and columns):" << endl;
    cin >> size;

    // Referencing the double pointer to an array of pointers
    matrix = new int*[size];

    // For Loop that initiates every pointer in the array to point to an array of integers
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }


    // Prompt the user to fill the multidimensional array with integer values
    cout << "Fill the array with integer values:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    // Checking if the multidimensional array has four consecutive values
    // Horizontally
    if (hasRLDiagonalConsecutiveFour(matrix, size))
        cout << "The matrix includes four consecutive values diagonally." << endl;

    // Removing matrix off of the systems memory
    delete matrix;
    return 0;
}

// hasHorizontalConsecutiveFour Implementation
bool hasHorizontalConsecutiveFour(int **multi, int size) {
    int count = 1;

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size-1; c++) {
            if (multi[r][c] == multi[r][c+1])
                count++;
            else
                count = 1;

            if (count == 4)
                return true;
        }
    }

    return false;
}

// hasVerticalConsecutiveFour Implementation
bool hasVerticalConsecutiveFour(int **multi, int size) {
    int count = 1;

    for (int c = 0; c < size; c++) {
        for (int r = 0; r < size-1; r++) {
            cout << multi[r][c] << " ";
            if (multi[r][c] == multi[r+1][c])
                count++;
            else
                count = 1;

            if (count == 4)
                return true;
        }
    }

    return false;
}

// hasLRDiagonalConsecutiveFour Implementation
bool hasLRDiagonalConsecutiveFour(int **multi, int size) {
    int count = 1;

    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            for (int rs = r, cs = c; rs < size-1 && cs < size-1; rs++, cs++) {
                    if (multi[rs][cs] == multi[rs+1][cs+1])
                        count++;
                    else
                        count = 1;

                    if (count == 4)
                        return true;
            }
        }
    }

    return false;
}

// hasRLDiagonalConsecutiveFour Implementation
bool hasRLDiagonalConsecutiveFour(int **multi, int size) {
    int count = 1;

    for (int r = 0; r < size; r++) {
        for (int c = size-1; c > 0; c--) {
            for (int rs = r, cs = c; rs < size-1 && cs > 1; rs++, cs--) {
                if (multi[rs][cs] == multi[rs+1][cs-1])
                    count++;
                else
                    count = 1;

                if (count == 4)
                    return true;
            }
        }
    }

    return false;
}