//
// Created by Giorgio Murad on 24/10/2025.
//

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <iostream>

using namespace std;

class Transaction {
private:
    string transaction;     // The transaction type
    int amount;             // The amount included in the transaction

public:
    Transaction();
    Transaction(string transaction, int amount);

    void setTransaction(string transaction);
    void setAmount(int amount);
    string getTransaction();
    int getAmount();
    bool operator==(const Transaction &t);
    friend ostream& operator<<(ostream& cout, Transaction &t);


};



#endif //TRANSACTION_H
