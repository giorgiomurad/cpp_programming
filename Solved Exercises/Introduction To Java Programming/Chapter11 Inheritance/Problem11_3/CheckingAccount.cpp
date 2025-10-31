//
// Created by Giorgio Murad on 29/09/2025.
//

#include "CheckingAccount.h"

// No-arg constructor that initializes a default checking account
CheckingAccount::CheckingAccount() {

    setOverdraftLimit(10000);
}

// Constructor that initializes a checking account with the given information
CheckingAccount::CheckingAccount(int id, double balance, double overdraft_limit) : Account(id, balance) {

    setOverdraftLimit(overdraft_limit);
}

// Function that sets the overdraft limit of the checking account
void CheckingAccount::setOverdraftLimit(double overdraft_limit) {
    this->overdraft_limit = overdraft_limit;
}

// Function that returns the overdraft limit of the checking account
double CheckingAccount::getOverdraftLimit() {
    return overdraft_limit;
}

// Overridden output operator that outputs information about the checking account
ostream& operator<<(ostream& os, const CheckingAccount& checking) {
    string strday = checking.dateCreated->tm_mday >= 10 ? to_string(checking.dateCreated->tm_mday) : "0"+to_string(checking.dateCreated->tm_mday);
    string strmonth = checking.dateCreated->tm_mon+1 >= 10 ? to_string(checking.dateCreated->tm_mon+1) : "0"+to_string(checking.dateCreated->tm_mon+1);
    string stryear = to_string(checking.dateCreated->tm_year+1900);

    os << "Checking-Account ID :\t" << checking.ID
        << endl << "Date Created :\t" << strday << "/" << strmonth << "/" << stryear
        << endl << "Balance :\t$ " << checking.balance
        << endl << "Overdraft Limit :\t$ " << checking.overdraft_limit
        << endl;

    return os;
}