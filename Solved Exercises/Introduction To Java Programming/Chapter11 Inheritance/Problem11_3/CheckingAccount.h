//
// Created by Giorgio Murad on 29/09/2025.
//

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"


class CheckingAccount : public Account {
protected:
    double overdraft_limit;

public:
    CheckingAccount();
    CheckingAccount(int id, double balance, double overdraft_limit);
    void setOverdraftLimit(double overdraft_limit);
    double getOverdraftLimit();
    friend ostream& operator<<(ostream& os, const CheckingAccount& account);

};



#endif //CHECKINGACCOUNT_H
