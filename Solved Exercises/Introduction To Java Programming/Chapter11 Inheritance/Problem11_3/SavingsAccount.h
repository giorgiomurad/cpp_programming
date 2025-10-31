//
// Created by Giorgio Murad on 29/09/2025.
//

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
public:
    SavingsAccount();
    SavingsAccount(int id, double balance);
    void withdraw(double amount) override;
    friend ostream& operator<<(ostream& os, const SavingsAccount& savings);
};



#endif //SAVINGSACCOUNT_H
