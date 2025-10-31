//
// Created by Giorgio Murad on 29/09/2025.
//

#include "Account.h"

#include <iostream>

using namespace std;
using namespace chrono;

// No-arg constructor that creates an empty account object
Account::Account() {
    setID(0);
    setBalance(0);
    setDateCreated();
}

// Constructor that creates a new account with the specified ID and balance
Account::Account(int id, double balance) {
    setID(id);
    setBalance(balance);
    setDateCreated();
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

// Function that sets the date the account was created to the current date
void Account::setDateCreated() {
    timestamp = system_clock::to_time_t(now);

    dateCreated = localtime(&timestamp);
}

// Function that sets the date the account was created to the given date including the day, month, and year
void Account::setDateCreated(int day, int month, int year) {

    dateCreated->tm_year = year - 1900;
    dateCreated->tm_mon = month - 1;
    dateCreated->tm_mday = day;
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
string Account::getDateCreated() {
    string strday = dateCreated->tm_mday >= 10 ? to_string(dateCreated->tm_mday) : "0"+to_string(dateCreated->tm_mday);
    string strmonth = dateCreated->tm_mon >= 10 ? to_string(dateCreated->tm_mon+1) : "0"+to_string(dateCreated->tm_mon+1);
    string stryear = to_string(dateCreated->tm_year+1900);

    return strday+"/"+strmonth+"/"+stryear;
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

// Overridden output operator function that displays the content of the object
ostream &operator<<(ostream &os, const Account &account) {
    string strday = account.dateCreated->tm_mday >= 10 ? to_string(account.dateCreated->tm_mday) : "0"+to_string(account.dateCreated->tm_mday);
    string strmonth = account.dateCreated->tm_mon+1 >= 10 ? to_string(account.dateCreated->tm_mon+1) : "0"+to_string(account.dateCreated->tm_mon+1);
    string stryear = to_string(account.dateCreated->tm_year+1900);

    os << "Account ID :\t" << account.ID
        << endl << "Date Created :\t" << strday << "/" << strmonth << "/" << stryear
        << endl << "Balance :\t$ " << account.balance
        << endl;

    return os;
}
