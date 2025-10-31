//
// Created by Giorgio Murad on 29/09/2025.
//

#include <iostream>

#include "SavingsAccount.h"

using namespace std;

// Default Constructor
SavingsAccount::SavingsAccount() = default;

// With-arg constructor
SavingsAccount::SavingsAccount(int id, double balance) : Account(id, balance) { }

void SavingsAccount::withdraw(double amount) {
    cout << "Cannot withdraw from savings account!" << endl;
}

ostream &operator<<(ostream &os, const SavingsAccount &savings) {
    string strday = savings.dateCreated->tm_mday >= 10 ? to_string(savings.dateCreated->tm_mday) : "0"+to_string(savings.dateCreated->tm_mday);
    string strmonth = savings.dateCreated->tm_mon+1 >= 10 ? to_string(savings.dateCreated->tm_mon+1) : "0"+to_string(savings.dateCreated->tm_mon+1);
    string stryear = to_string(savings.dateCreated->tm_year+1900);

    os << "Savings-Account ID :\t" << savings.ID
        << endl << "Date Created :\t" << strday << "/" << strmonth << "/" << stryear
        << endl << "Balance :\t$ " << savings.balance
        << endl;

        return os;
}
