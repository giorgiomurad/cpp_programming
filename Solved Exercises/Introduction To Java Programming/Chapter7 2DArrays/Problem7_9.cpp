// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.9 : Write a program that allows two players to play a game of Tic-Tac-Toe.
//               One player plays as player X, and the other plays as player O.
//               On every person's turn, the program should prompt enter the row and column
//               to insert the players token alternatively.
//
//
// Author : Giorgio Murad
#include <iostream>
#include <random>

const int ROWS = 3;     // Number of rows in the gameboard
const int COLS = 3;     // Number of columns in the gameboard
char **gameboard;       // Double pointer to point to a multidimensional array representing the gameboard
char player;            // Player Character
int result = 0;         // Result Code (by default 0)


// Function that prints the gameboard
void printBoard();

// Function that returns true if the board is full. Otherwise, it returns false.
bool isFull();

// Function that returns true if the game is over.
bool gameOver();

// Function that places the players token in the gameboard given the row and column
void placeToken(int row, int col);

// Function that returns true if the game has a winner
bool winner();

// Function that returns true if there are three equal consecutive values horizontally
bool hasEqualThreeHorizontally();

// Function that returns true if there are three equal consecutive values vertically
bool hasEqualThreeVertically();

// Function that returns true if there are three equal consecutive values diagonally from left to right
bool hasEqualThreeLRDiagonally();

// Function that returns true if there are three equal consecutive values diagonally from right to left
bool hasEqualThreeRLDiagonally();


using namespace std;
int main() {
    default_random_engine generator;                         // Random Number Generator
    uniform_int_distribution<int> distribution(0, 1);   // Distribution used for number generator
    int row, col;                                            // Row and column values to be given by the user


    // Initializing the gameboard
    gameboard = new char*[ROWS];
    for (int i = 0; i < ROWS; i++) {
        gameboard[i] = new char[COLS];
    }

    // Filling the gameboard with empty characters
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            gameboard[i][j] = ' ';
        }
    }

    // Choosing the starting player
    player = distribution(generator) == 1 ? 'O' : 'X';

    // Starting the game
    do {
        printBoard();

        // Asking the player to place the token in the specific row and column values
        cout << "Enter the row and column values, Player " << player << ":" << endl;
        cin >> row >> col;

        // Place the player's token, and check if the player is the winner of the game
        placeToken(row, col);
        if (winner()) {
            result = 1;

            break;
        }

        cout << endl << endl;

        // In case there's no winner, continue the game with the next player
        player = player == 'O' ? 'X' : 'O';
    } while (!isFull());


    // Printing the board along with its result
    printBoard();
    if (result) {
        cout << "Congratulations Player " << player << "!" << endl;
    }
    else {
        cout << "Game Board Full!" << endl << "Result: Tie." << endl;
    }


    delete gameboard;
    return 0;
}

// Function printBoard
void printBoard() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "| " << gameboard[i][j] << " |";
        }
        cout << endl;
    }
}

// Function isFull
bool isFull() {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (gameboard[i][j] != ' ')
                count++;
        }
    }

    return count == ROWS * COLS;
}

// Function gameOver
bool gameOver() {
    if (winner()) {
        result = 1;

        return true;
    }

    if (isFull()) {
        result = 0;

        return true;
    }

    return false;
}

// Function placeToken
void placeToken(int row, int col) {

    gameboard[row][col] = player;
}

// Function winner
bool winner() {
    if (
        hasEqualThreeHorizontally() ||
        hasEqualThreeVertically() ||
        hasEqualThreeLRDiagonally() ||
        hasEqualThreeRLDiagonally()
    ) {
        return true;
    }

    return false;
}

// Function hasEqualThreeHorizontally
bool hasEqualThreeHorizontally() {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (gameboard[i][j] == player)
                count++;
            else
                count = 0;

            if (count == 3)
                return true;
        }
        count = 0;
    }

    return false;
}

// Function hasEqualThreeVertically
bool hasEqualThreeVertically() {
    int count = 0;

    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            if (gameboard[j][i] == player)
                count++;
            else
                count = 0;

            if (count == 3)
                return true;
        }
        count = 0;
    }

    return false;
}

// Function hasEqualThreeLRDiagonally
bool hasEqualThreeLRDiagonally() {
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        if (gameboard[i][i] == player)
            count++;
        else
            count = 0;

        if (count == 3)
            return true;
    }

    return false;
}

// Function hasEqualThreeRLDiagonally
bool hasEqualThreeRLDiagonally() {
    int count = 0;

    for (int i = 0, j = ROWS-1; i < ROWS; i++, j--) {
        if (gameboard[i][j] == player)
            count++;
        else
            count = 0;

        if (count == 3)
            return true;
    }

    return false;
}