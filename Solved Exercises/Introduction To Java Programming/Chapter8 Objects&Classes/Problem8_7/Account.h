//
// Created by Giorgio Murad on 05/08/2025.
//

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    int ID;                             // Account ID
    double balance;                     // Account Balance
    static double annualInterestRate;   // Annual Interest Rate
    time_t timestamp;                   // Timestamp

public:
    // Constructors
    Account();
    Account(int id, double balance);

    // Functions
    void setID(int id);
    void setBalance(double balance);
    static void setAnnualInterestRate(double rate);
    int getID();
    double getBalance();
    static double getAnnualInterestRate();
    char* getDateTime();
    void withdraw(double amount);
    void deposit(double amount);
};



#endif //ACCOUNT_H
