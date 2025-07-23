// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Multidimensional Arrays
//
// Problem 7.20 : Write a program representing a Connect-Four board game, where two players
//                compete, and alternatively drop colored disks into a seven-column, six row,
//                and vertically suspended grid.
//
//
// Author : Giorgio Murad
#include <iostream>
#include <random>

const int ROWS = 6;     // Number of rows in the gameboard
const int COLS = 7;     // Number of columns in the gameboard
char **gameboard;       // Double pointer to point to a multidimensional array representing the gameboard
char player;            // Player Character


// Function that displays the board on the screen
void printBoard();

// Function that returns true if the game has a winner. Otherwise, false is returned.
bool win();

// Function that returns true if the gameboard is full.
bool isFull();

// Function that allows the player to drop the chip in the board at the specified column
void dropChip(char player, int column);

// Function that returns true if there are four consecutive equal characters horizontally
bool hasEqualFourHorizontally();

// Function that returns true if there are four consecutive equal characters vertically
bool hasEqualFourVertically();

// Function that returns true if there are four consecutive equal characters diagonally from left to right
bool hasEqualFourLRDiagonally();

// Function that returns true if there are four consecutive equal characters diagonally from right to left
bool hasEqualFourRLDiagonally();


using namespace std;
int main() {
    default_random_engine gen;                                  // Random number generator
    uniform_int_distribution<int> distribution(0, 1);           // Distribution used for the random number generator
    int columnNb;                                               // The column number inputted by the user
    int result = 0;                                             // Result Code: 0 (by default) for full board, 1 for win


    // Initializing the game board
    gameboard = new char*[ROWS];
    for (int i = 0; i < ROWS; i++) {
        gameboard[i] = new char[COLS];
    }

    // Filling the array with empty characters
    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            gameboard[r][c] = ' ';
        }
    }

    // Determining the player taking the first turn
    // (R for red, and B for blue)
    player = distribution(gen) == 1 ? 'R' : 'B';

    do {
        printBoard();
        cout << "Enter column index (0-6), Player " << player << ":" << endl;
        cin >> columnNb;

        dropChip(player, columnNb);
        if (win()) {
            result = 1;
            printBoard();

            break;
        }

        player = (player == 'B') ? 'R' : 'B';
        cout << endl << endl;
    } while (!isFull());

    if (result)
        cout << "Congratulations Player " << player <<"!" << endl;
    else
        cout << "Game Board Full!" << endl << "No Winner Announced." << endl;

    // Deleting the unnecessary gameboard from the memory
    delete gameboard;
    return 0;
}

// Function printBoard Implemented
void printBoard() {
    for (int col = 0; col < COLS; col++) {
        cout << "| " << col << " |";
    }

    cout << endl;
    cout << "===================================" << endl;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "| " << gameboard[i][j] << " |";
        }
        cout << endl;
    }
}

// Function win Implemented
bool win() {
    if (hasEqualFourHorizontally())
        return true;

    if (hasEqualFourVertically())
        return true;

    if (hasEqualFourLRDiagonally())
        return true;

    if (hasEqualFourRLDiagonally())
        return true;

    return false;
}

// Function isFull Implemented
bool isFull() {
    int count = 0;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (gameboard[r][c] != ' ')
                count++;
        }
    }

    return count == ROWS*COLS;
}

// Function dropChip Implemented
void dropChip(char player, int column) {
    int row = 0;

    while (gameboard[row][column] == ' ') {
        row++;

        if (row == ROWS) {
            break;
        }
    }

    gameboard[row-1][column] = player;
}

// Function hasEqualFourHorizontally Implemented
bool hasEqualFourHorizontally() {
    int count = 0;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            if (gameboard[r][c] == player)
                count++;
            else
                count = 0;

            if (count == 4)
                return true;
        }
        count = 0;
    }

    return false;
}

// Function hasEqualFourVertically Implemented
bool hasEqualFourVertically() {
    int count = 0;

    for (int c = 0; c < COLS; c++) {
        for (int r = 0; r < ROWS; r++) {
            if (gameboard[r][c] == player)
                count++;
            else
                count = 0;

            if (count == 4)
                return true;
        }
        count = 0;
    }

    return false;
}

// Function hasEqualFourLRDiagonally Implemented
bool hasEqualFourLRDiagonally() {
    int count = 0;

    for (int r = 0; r < ROWS; r++) {
        for (int c = 0; c < COLS; c++) {
            for (int rs = r, cs = c; rs < ROWS && cs < COLS; rs++, cs++) {
                if (gameboard[rs][cs] == player)
                    count++;
                else
                    count = 0;

                if (count == 4)
                    return true;
            }
            count = 0;
        }
    }

    return false;
}

// Function hasEqualFourRLDiagonally Implemented
bool hasEqualFourRLDiagonally() {
    int count = 0;

    for (int r = 0; r < ROWS; r++) {
        for (int c = COLS-1; c >= 0; c--) {
            for (int rs = r, cs = c; rs < ROWS && cs >= 0; rs++, cs--) {
                if (gameboard[rs][cs] == player)
                    count++;
                else
                    count = 0;

                if (count == 4)
                    return true;
            }
            count = 0;
        }
    }

    return false;
}