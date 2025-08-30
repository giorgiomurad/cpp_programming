// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Thinking in Objects
//
// Problem 10.7 : Using the Account class created in Exercise 8.7,
//                Create ten accounts with IDs 0 to 9, and initial balance $100.
//                The system prompts the user to log in with one of the IDs.
//                Once logged in, the main menu is displayed to the user with different
//                choices:
//                  1) Viewing the current balance
//                  2) Withdrawing from the balance
//                  3) Deposit into the balance
//                  4) Exit
//
//
// Author : Giorgio Murad

#include <iostream>
#include "Account.h"

// Static class variable for the annual interest rate of all accounts
double Account::annualInterestRate;

using namespace std;
int main() {
    Account** accounts;     // Pointer to an array of account pointers
    int nbOfAccounts;       // Number of accounts
    int userID;             // ID of the user
    int choice;             // Choice Number


    // Initializing program variables
    nbOfAccounts = 10;
    accounts = new Account*[nbOfAccounts];

    // Initializing accounts
    for (int i = 0; i < nbOfAccounts; i++) {
        accounts[i] = new Account(i, 100);
    }


    // User Log-In
    log:
        cout << "Enter your account ID: ";
        cin >> userID;
        cout << endl;

        if (userID < 0 || userID >= nbOfAccounts) {
            cout << "Invalid account ID. Please Try Again." << endl;

            goto log;
        }


    // Main Menu
    do {
        cout << "Choose below: "
        << endl << "1. View Current Balance"
        << endl << "2. Withdraw"
        << endl << "3. Deposit"
        << endl << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << endl << "Current Balance: $" << accounts[userID]->getBalance() <<
                    endl << endl;
                break;
            case 2: {
                int amount;

                cout << endl << "Enter amount to withdraw:" << endl;
                cin >> amount;

                accounts[userID]->withdraw(amount);
                cout << endl;
                break;
            }
            case 3: {
                int amount;

                cout << endl << "Enter amount to deposit:" << endl;
                cin >> amount;

                accounts[userID]->deposit(amount);
                cout << endl;
                break;
            }
            case 4:
                break;
            default:
                cout << "Invalid choice! Please Try Again." << endl << endl;

        }
    } while (choice != 4);

    cout << "Thank you for using our program :)" << endl;
    return 0;
}