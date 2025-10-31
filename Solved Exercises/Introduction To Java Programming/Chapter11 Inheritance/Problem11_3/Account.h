#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

class Account {
protected:
    time_point<system_clock> now = system_clock::now();
    time_t timestamp;                   // Timestamp
    int ID;                             // Account ID
    double balance;                     // Account Balance
    static double annualInterestRate;   // Annual Interest Rate
    tm *dateCreated;                    // The date the account was created

public:
    // Constructors
    Account();
    Account(int id, double balance);

    // Functions
    void setID(int id);
    void setBalance(double balance);
    static void setAnnualInterestRate(double rate);
    void setDateCreated();
    void setDateCreated(int day, int month, int year);
    int getID();
    double getBalance();
    static double getAnnualInterestRate();
    string getDateCreated();
    virtual void withdraw(double amount);
    void deposit(double amount);
    friend ostream& operator<<(ostream& os, const Account& account);
};



#endif //ACCOUNT_H