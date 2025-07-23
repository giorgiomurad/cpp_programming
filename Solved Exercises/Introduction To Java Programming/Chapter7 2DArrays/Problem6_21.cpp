// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.) (Edited)
// Multidimensional Arrays
//
// Problem 6.21 : Write a program that represents a bean machine, also known as the Galton Box.
//                Each ball is dropped from the opening of the board, and every nail it hits, it
//                would have a 50% chance of falling left or right till all the balls are piled up
//                in the slots at the bottom of the board.
//                The program should prompt the user to enter the number of balls to be dropped, and
//                the number of pegs, and display how the balls are accumulated in the bottom slot as
//                well as displays the path of every ball.
//
//                (Hint: The number of rights of a ball determines which column it falls into the bottom slot)
//                (      If the fallen ball has 5 rights, the ball ends up in column 5.                      )
//                (      If the fallen ball has no rights, the ball ends up in column 0.                     )
//
//
// Author : Giorgio Murad

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Global Variables
char** slots;        // Double pointer to represent the slot
int nbOfPegs;       // Number of pegs to be given by the user
int nbOfBalls;      // Number of balls to be given by the user

// Function that displays the slot in the console
void displaySlot();

// Function that returns the direction of the dropped ball from top to bottom
// (L for left, and R for right)
char* getDirection();

// Function that returns the slot number as to where the ball lands according to the ball's direction
int getIndex(char* d);

// Function that drops a ball in the given column index of the slot
void dropBall(int column);

int main() {
    // Prompting the user to enter the number of balls followed by the number of pegs
    cout << "Enter the number of balls followed by the number of pegs (must be an odd number):" << endl;
    cin >> nbOfBalls >> nbOfPegs;

    // Initializing the multidimensional array
    slots = new char*[nbOfBalls];
    for (int i = 0; i < nbOfBalls; i++) {
        slots[i] = new char[nbOfPegs*2];
    }

    // Filling the multidimensional array with empty spaces
    for (int i = 0; i < nbOfBalls; i++) {
        for (int j = 0; j < nbOfPegs*2; j++) {
            slots[i][j] = ' ';
        }
    }

    srand(time(nullptr));
    for (int i = 0; i < nbOfBalls; i++) {
        // Getting the direction of ball number 'i'
        char* dir = getDirection();

        // Displaying the balls direction rout from top to bottom
        cout << (i+1) << " : ";
        for (int j = 0; j < nbOfPegs; j++) {
            cout << dir[j];
        }
        cout << endl;

        // Getting the index of the dropped ball in the slot according to it's direction route
        int index = getIndex(dir);
        cout << index << endl;

        displaySlot();
        // Dropping the ball in the slots column index
        dropBall(index);
    }

    displaySlot();


    delete slots;
    return 0;
}

// Function displaySlot Implemented
void displaySlot() {
    for (int i = 0; i < nbOfBalls; i++) {
        for (int j = 0; j < nbOfPegs*2; j++) {
            cout << "| " << slots [i][j] << " |";
        }
        cout << endl;
    }
}

// Function getDirection Implemented
char* getDirection() {
    char* direction;                                        // Pointer to array of characters to contain
                                                            // the ball's direction from top to bottom

    direction = new char[nbOfPegs];
    for (int p = 0; p < nbOfPegs; p++) {
        int temp = rand() % 2;

        direction[p] = temp == 1 ? 'R' : 'L';
    }

    cout << endl;
    return direction;
}

// Function getIndex Implemented
int getIndex(char* direction) {
    int index = nbOfPegs*2 - 1;
    int d;

    for (d = 0; d < nbOfPegs-1; d++) {
        if (direction[d] == 'L') {
            index -= 2;
        }
        else {
            index += 2;
        }
    }

    if (direction[d] == 'L') {
        index--;
    }
    else {
        index++;
    }


    return index > 0 ? index/2 : index;
}

// Function dropBall Implemented
void dropBall(int column) {
    int row = 0;

    while (row < nbOfBalls-1 && slots[row+1][column] == ' ')
        row++;

    slots[row][column] = 'O';
}