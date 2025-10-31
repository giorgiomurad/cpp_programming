// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Inheritance and Polymorphism
//
// Problem 11.8 : Design a class Account as defined in 8.7, and also includes the following:
//                  - Name of the customer
//                  - A constructor that creates an account with the specified name, id, and balance
//                  - A datafield of type Arraylist where every element of this list is an instance of the
//                    Transaction class as defined in Figure 11.7. The list stores transactions for the accounts.
//                  - Method 'deposit' that deposits into the balance.
//                  - Method 'withdraw' that withdraws from the balance.
//                  - All other properties are the same.
//
//
// Author : Giorgio Murad

#include <iostream>

#include "Account.h"
#include "Transaction.h"

// Static variable definition in the main class
double Account::annualInterestRate;

using namespace std;

int main() {
    Transaction* transaction = new Transaction[5]();
    Account* acc = new Account(0, 100, "A1234");

    cout << acc->getDateTime() << endl;
    return 0;
}