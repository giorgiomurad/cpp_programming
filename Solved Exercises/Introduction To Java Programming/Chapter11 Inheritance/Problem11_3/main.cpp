// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Inheritance and Polymorphism
//
// Problem 11.3 : The Account class was defined in Exercise 8.7 in order to model a bank account.
//                Create two subclasses for the Account class: A checking account that has an
//                overdraft limit, and a savings account where the cash cannot be overdrawn.
//
//                Write a test program that creates an Account, Checking Account, Savings Account,
//                and invokes their output operator functions.
//
//
// Author : Giorgio Murad

#include <iostream>
#include <chrono>
#include <ctime>

#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

// Static variable declaration in the main class
double Account::annualInterestRate;

using namespace std;
using namespace chrono;

int main() {
    // Initializing array of accounts
    Account** accounts = new Account*[3];

    // Initializing each account pointer to a different account object
    accounts[0] = new Account(1, 500);
    accounts[1] = new CheckingAccount(2, 1000, 10000);
    accounts[2] = new SavingsAccount(3, 1500);

    // Invoking the output function of each of the three savings account
    for (int i = 0; i < 3; i++) {
        Account* temp = accounts[i];

        if (CheckingAccount* acc = dynamic_cast<CheckingAccount *>(temp))
            cout << *acc << endl;
        else if (SavingsAccount* acc2 = dynamic_cast<SavingsAccount *>(temp))
            cout << *acc2 << endl;
        else
            cout << *temp << endl;
    }

    delete accounts;
    return 0;
}