// Problem taken from Introduction to Java Programming by Y. Daniel Yang (8th ed.)
// Chapter 4 : Loops
//
// Problem 4.2 : Write a program that generates ten random addition questions.
//               Each question consists of two random integers with each integer
//               between 1 and 15.
//               The user is prompted to answer all ten questions before the
//               program displays the users' score, and the time taken to answer
//               all the questions.
//
//
// Author : Giorgio Murad
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int question;               // Question number
    int int1, int2;             // Two randomly generated integers
    int correct = 0;            // Number of correct answers
    int userAns;                // Answer provided by the user
    
    
    // Starting quiz
    question = 1;
    while (question <= 10) {
        int1 = rand() % 16;
        int2 = rand() % 16;
        
        cout << "Question " << question << ":" <<
        endl << int1 << " + " << int2 << endl;
        cin >> userAns;
        
        if (userAns == (int1 + int2))
            correct++;
        
        cout << endl;
        question++;
    }
    
    // Displaying final result
    cout << "Final Score:\t" << correct << "/" << (question-1) << endl;
    return 0;
}
