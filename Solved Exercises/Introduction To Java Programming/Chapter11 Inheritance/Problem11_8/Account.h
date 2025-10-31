//
// Created by Giorgio Murad on 24/10/2025.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <chrono>

#include "ArrayList.h"
#include "Transaction.h"

using namespace std;
using namespace chrono;

class Account {
private:
    time_point<system_clock> now = system_clock::now();
    time_t timestamp;                       // Timestamp
    tm datetime;                            // Date Time Structure
    ArrayList<Transaction> *transactions;   // ArrayList of Transaction Objects
    int ID;                                 // Account ID
    double balance;                         // Account Balance
    static double annualInterestRate;       // Annual Interest Rate
    string name;                            // Name of the account

public:
    // Constructors
    Account();
    Account(int id, double balance);
    Account(int id, double balance, string name);

    // Functions
    void setID(int id);
    void setBalance(double balance);
    void setName(string name);
    static void setAnnualInterestRate(double rate);
    int getID();
    double getBalance();
    string getName();
    static double getAnnualInterestRate();
    string getDateTime();
    void withdraw(double amount);
    void deposit(double amount);
};



#endif //ACCOUNT_H
