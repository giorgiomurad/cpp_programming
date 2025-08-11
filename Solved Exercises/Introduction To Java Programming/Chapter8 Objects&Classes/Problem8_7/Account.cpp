//
// Created by Giorgio Murad on 05/08/2025.
//

#include "Account.h"

#include <ctime>
#include <iostream>

using namespace std;

// No-arg constructor that creates an empty account object
Account::Account() {
    setID(0);
    setBalance(0);
    timestamp = time(0);
}

// Constructor that creates a new account with the specified ID and balance
Account::Account(int id, double balance) {
    setID(id);
    setBalance(balance);
    timestamp = time(0);
}

// Function that sets the account ID
void Account::setID(int id) {
    this->ID = id;
}

// Function that sets the account balance
void Account::setBalance(double balance) {
    this->balance = balance;
}

// Static function that sets the annual interest rate of all accounts
void Account::setAnnualInterestRate(double rate) {
    annualInterestRate = rate;
}

// Function that returns the account ID
int Account::getID() {
    return ID;
}

// Function that returns the account balance
double Account::getBalance() {
    return balance;
}

// Function that returns the annual interest rate
double Account::getAnnualInterestRate() {
    return annualInterestRate;
}

// Function that returns the date the account was created
char* Account::getDateTime() {

    return ctime(&timestamp);
}

// Function to withdraw from the account
void Account::withdraw(double amount) {
    if (amount > balance) {

        cout << "The entered amount exceeds the balance amount." << endl
        << "Withdrawal Canceled." << endl;
    }
    else {
        balance -= amount;

        cout << amount << " Successfully withdrawn." <<
            endl << "Remaining Balance: " << balance << endl;
    }
}

// Function that deposits into the account
void Account::deposit(double amount) {
    balance += amount;

    cout << amount << " Successfully deposited." <<
        endl << "Remaining Balance: " << balance << endl;
}