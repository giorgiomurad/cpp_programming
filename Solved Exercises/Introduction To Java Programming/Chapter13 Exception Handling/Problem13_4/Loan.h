//
// Created by Giorgio Murad on 08/11/2025.
//

#ifndef LOAN_H
#define LOAN_H
#include <chrono>
#include <iostream>


using namespace std;
using namespace chrono;

class Loan {
private:
    system_clock::time_point now;   // System Clock
    time_t timestamp;               // Timestamp
    tm loanDate;                    // Loan date structure
    double annualInterestRate;      // Annual Interest Rate
    int numberOfYears;              // Number of Years
    double loanAmount;              // Loan Amount

public:
    Loan();
    Loan(double annualInterestRate, int numberOfYears, double loanAmount);
    void setAnnualInterestRate(double annualInterestRate);
    void setNumberOfYears(int numberOfYears);
    void setLoanAmount(double loanAmount);
    double getAnnualInterestRate();
    int getNumberOfYears();
    double getLoanAmount();
    string getDateCreated();
};



#endif //LOAN_H
