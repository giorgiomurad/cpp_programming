//
// Created by Giorgio Murad on 24/10/2025.
//

#include "Account.h"

#include <iostream>

using namespace std;

// No-arg constructor that creates an empty account object
Account::Account() {
    setID(0);
    setBalance(0);

    timestamp = system_clock::to_time_t(now);
    datetime = *localtime(&timestamp);
    transactions = new ArrayList<Transaction>();
}

// Constructor that creates a new account with the specified ID and balance
Account::Account(int id, double balance) {
    setID(id);
    setBalance(balance);

    timestamp = system_clock::to_time_t(now);
    datetime = *localtime(&timestamp);
    transactions = new ArrayList<Transaction>();
}

// Constructor that creates a new account with the specified ID, balance, and name
Account::Account(int id, double balance, string name) {
    setID(id);
    setBalance(balance);
    setName(name);

    timestamp = system_clock::to_time_t(now);
    datetime = *localtime(&timestamp);
    transactions = new ArrayList<Transaction>();
}

// Function that sets the account ID
void Account::setID(int id) {
    this->ID = id;
}

// Function that sets the account balance
void Account::setBalance(double balance) {
    this->balance = balance;
}

// Function that sets the name of the account
void Account::setName(string name) {
    this->name = name;
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

// Function that returns the name of the account
string Account::getName() {
    return name;
}


// Function that returns the date the account was created
string Account::getDateTime() {
    int day, month, year;           // Day, Month, and Year of the account creation
    string sday, smonth, syear;     // String representations of the day, month, and year


    // Retrieving the following from the datetime structures
    day   = datetime.tm_mday;
    month = datetime.tm_mon;
    year  = datetime.tm_year;

    // Formating the integers into strings
    sday   = day < 10 ? "0" + to_string(day) : to_string(day);
    smonth = month < 10 ? "0" + to_string(month) : to_string(month);
    syear  = to_string(year + 1900);


    return sday + ":" + smonth + ":" + syear;
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

    transactions->add(Transaction("Withdrawal", amount));
}

// Function that deposits into the account
void Account::deposit(double amount) {
    balance += amount;

    cout << amount << " Successfully deposited." <<
        endl << "Remaining Balance: " << balance << endl;

    transactions->add(Transaction("Deposit", amount));
}