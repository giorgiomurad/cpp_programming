// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.) (Edited)
// Multidimensional Arrays
//
// Problem 6.20 : Write a program that represents the classical game of Eight Queens where the user
//                is given a chess board, and is asked to place exactly eight queens on the board.
//                In order to win the game, the eight queens must be placed where two queens cannot
//                attack each otherwise the game is lost.
//
//
// Author : Giorgio Murad
#include <iostream>

// Global Variable
char** chessBoard;      // Double pointer to point to the multidimensional array representing the chess board
int result;             // Program result value: 0 for success, -1 for conflict error

// Functions
//
// Function that displays the chess board in the console
void displayBoard();

// Function that places a queen in the chess board within the specified row and column
void placeQueen(int row, int col);

// Function that returns true if the placed queen is in conflict with another placed queen
bool inConflict(int row, int col);

// Function that checks the row of the placed queen, and returns true if the queen conflicts with another
bool checkRow(int row, int col);

// Function that checks the column of the placed queen, and returns true if the queen conflicts with another
bool checkCol(int row, int col);

// Function that checks the column of the placed queen from left to right,
// and returns true if the queen conflicts with another
bool checkLRDiagonal(int row, int col);

// Function that checks the column of the placed queen from right to left,
// and returns true if the queen conflicts with another
bool checkRLDiagonal(int row, int col);


using namespace std;
int main() {
    int row, col;   // Row and column integer values to be given by the user
    int queens;     // Number of queens required for the user to place in the board in order to win


    // Initializing the two-dimensional array representing the gameboard,
    // and filling the array with empty values
    chessBoard = new char*[8];
    for(int i = 0; i < 8; i++) {
        chessBoard[i] = new char[8];
        for(int j = 0; j < 8; j++) {
            chessBoard[i][j] = ' ';
        }
    }

    // Introducing the player to the game of queens
    cout << "Welcome to The game of Eight Queens." <<
    endl << "In this game, you are required to carefully place eight queens in the chess board:" <<
    endl << "If any of the placed queens are placed in conflict with another, you will lose the game." <<
    endl << "However, if all eight queens were placed with no queen in conflict with the other, then you are the winner." <<
    endl << "Press enter to start the game, and Good Luck! :)" << endl;
    cin.ignore();

    queens = 8;
    do {
        // Displaying the chess board
        displayBoard();

        // Prompting the user to enter the row and column values to place the queen in the chess board
        cout << "Enter the row and column values (0-7):" << endl;
        cin >> row >> col;

        // Placing the queen in the specified row and column
        placeQueen(row, col);

        // Decrementing the value of queens, and performing two line-breaks before moving on
        queens--;
        cout << endl << endl;
    } while (queens > 0 && !inConflict(row, col));

    // Displaying final message
    if (result == 0){
        cout << "All queens were successfully placed in the board!" <<
                endl << "Congratulations!" << endl;
    } else if (result == -1) {
        cout << "You Lost!" <<
            endl << "The queen at row " << row << " and column " << col << " conflicts with another queen." << endl;
    }

    // Displaying the board for the last time
    displayBoard();


    delete chessBoard;
    return 0;
}

// Function displayBoard implemented
void displayBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << "| " << chessBoard[i][j] << " |";
        }
        cout << endl;
    }
}

// Function placeQueen Implementation
void placeQueen(int row, int col) {

    chessBoard[row][col] = 'Q';
}

// Function inConflict Implementation
bool inConflict(int row, int col) {

    if (
        checkRow(row, col) || checkCol(row, col) ||
        checkLRDiagonal(row, col) || checkRLDiagonal(row, col)
        ) {
        result = -1;

        return true;
    }

    return false;
}

// Function checkRow Implementation
bool checkRow(int row, int col) {
    for (int c = 0; c < 8; c++) {
        if (c == col)
            continue;

        if (chessBoard[row][c] == 'Q')
            return true;
    }

    return false;
}

// Function checkCol Implementation
bool checkCol(int row, int col) {
    for (int r = 0; r < 8; r++) {
        if (r == row)
            continue;

        if (chessBoard[r][col] == 'Q')
            return true;
    }

    return false;
}

// Function checkLRDiagonal Implementation
bool checkLRDiagonal(int row, int col) {
    int rs, cs;


    rs = row;
    cs = col;
    while (rs > 0 && cs > 0) {
        rs--;
        cs--;
    }

    for (; rs < 8 && cs < 8; rs++, cs++) {
        if (rs == row && cs == col)
            continue;

        if (chessBoard[rs][cs] == 'Q')
            return true;
    }

    return false;
}

// Function checkRLDiagonal Implementation
bool checkRLDiagonal(int row, int col) {
    int rs, cs;


    rs = row;
    cs = col;
    while (rs > 0 && cs < 7) {
        rs--;
        cs++;
    }

    for (; rs < 8 && cs >= 0; rs++, cs--) {
        if (rs == row && cs == col)
            continue;

        if (chessBoard[rs][cs] == 'Q')
            return true;
    }

    return false;
}