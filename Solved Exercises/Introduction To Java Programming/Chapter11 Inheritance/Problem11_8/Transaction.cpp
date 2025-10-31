//
// Created by Giorgio Murad on 24/10/2025.
//

#include "Transaction.h"

#include "ArrayList.h"

// Constructor that creates a default transaction object
Transaction::Transaction() {

    setTransaction("");
    setAmount(0);
}


// Constructor that creates a new transaction object with the given transaction type and amount
Transaction::Transaction(string transaction, int amount) {

    setTransaction(transaction);
    setAmount(amount);
}


// Function that sets the type of transaction overtaken
void Transaction::setTransaction(string transaction) {

    this->transaction = transaction;
}

// Function that sets the amount involved in the transaction
void Transaction::setAmount(int amount) {

    this->amount = amount;
}

// Function that returns the type of transaction made
string Transaction::getTransaction() {

    return transaction;
}

// Function that returns the transactions' amount
int Transaction::getAmount() {

    return amount;
}

// Function that returns true if the given transaction is equal to this transaction
bool Transaction::operator==(const Transaction &t) {

    return this->amount == t.amount && this->transaction == t.transaction;
}

// Function that prints the transaction
ostream& operator<<(ostream& cout, Transaction &t) {

    cout << t.transaction << " : " << t.amount;
    return cout;
}