// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Exception Handling
//
// Problem 13.1 : Write a simple calculator program.
//                The program prompts the user to enter an integer followed by an operator followed by another
//                integer value in order to display the final result.
//                In case the user enters the wrong input, the program should inform the user.
//
//                ( In C++, there's no specific exception type for formats.                                     )
//                ( So in order to solve this, you can verify in the try block if the user inputs correctly     )
//                ( and if not, the program can throw an integer value, and that integer can be caught in the   )
//                ( catch block.                                                                                )
//
//
// Author : Giorgio Murad

#include <iostream>

using namespace std;

int main() {
    string input;       // String input to be given by the user
    int nb1, nb2;       // Numbers 1 and 2
    int result;         // Result
    char op;            // Mathematical Operator

    // Prompting the user to enter a mathematical expression
    cout << "Enter a math expression to execute and display its result (5 + 4): ";
    getline(cin, input);


    try {
        // Extracting the first and last string characters from the input, and checking if the
        // characters represent digits.
        // If so, the digits are assigned to nb1 and nb2. Otherwise an integer is thrown as an
        // exception
        if (isnumber(input.at(0)) && isnumber(input.at(4))) {
            nb1 = (int) input.at(0) - '0';
            nb2 = (int) input.at(4) - '0';

            // Checking the character at index 2 if it matches a mathematical expression.
            // If so, the result is computed. And if not, an integer is thrown as an excaption.
            switch (input.at(2)) {
                case '+':
                    result = nb1 + nb2;
                    break;
                case '-':
                    result = nb1 - nb2;
                    break;
                case '*':
                    result = nb1 * nb2;
                    break;
                case '/':
                    result = nb1 / nb2;
                    break;
                default:
                    throw -1;
            }

            cout << input << " = " << result << endl;
        }
        else
            throw -1;
    } catch (int x) {
        cout << "Invalid Input!" << endl
        << "Program Terminated." << endl;
    }
    return 0;
}