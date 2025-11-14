//
// Created by Giorgio Murad on 08/11/2025.
//

#include "Loan.h"

// No-arg constructor that creates a default loan object
Loan::Loan() {
    now = system_clock::now();
    timestamp = system_clock::to_time_t(now);
    loanDate = *localtime(&timestamp);

    setAnnualInterestRate(0);
    setNumberOfYears(0);
    setLoanAmount(0);
}

// Constructor that creates a loan with the given annual interest rate, number of years, and loan amount
Loan::Loan(double annualInterestRate, int numberOfYears, double loanAmount) {
    now = system_clock::now();
    timestamp = system_clock::to_time_t(now);
    loanDate = *localtime(&timestamp);

    setAnnualInterestRate(annualInterestRate);
    setNumberOfYears(numberOfYears);
    setLoanAmount(loanAmount);
}


// Function that sets the annual interest rate
void Loan::setAnnualInterestRate(double annualInterestRate){

    if(annualInterestRate > 0 && annualInterestRate < 1) {
        this->annualInterestRate = annualInterestRate;
    } else {
        throw invalid_argument("Annual interest rate must be between 0 and 1.");
    }
}

// Function that sets the number of years of the loan
void Loan::setNumberOfYears(int numberOfYears) {

    if (numberOfYears > 1) {
        this->numberOfYears = numberOfYears;
    } else {
        throw invalid_argument("Number of years must be greater than 1.");
    }
}

// Function that sets the loan amount
void Loan::setLoanAmount(double loanAmount) {

    if (loanAmount >= 0) {
        this->loanAmount = loanAmount;
    } else {
        throw invalid_argument(
            "The loan amount cannot be a negative number."
            "\nMust be at least zero."
        );
    }
}

// Function that returns the loan's annual interest rate
double Loan::getAnnualInterestRate() {
    return this->annualInterestRate;
}

// Function that returns the loan's number of years
int Loan::getNumberOfYears() {
    return this->numberOfYears;
}

// Function that returns the loan amount
double Loan::getLoanAmount() {
    return this->loanAmount;
}

// Function that returns the date the loan was made
string Loan::getDateCreated() {
    // Integer Values (Day, Month, Year)
    int day     = loanDate.tm_mday;
    int month   = loanDate.tm_mon + 1;
    int year    = loanDate.tm_year + 1900;

    // Strings Values (Day, Month, Year)
    string sday     = day >= 10 ? to_string(day) : "0" + to_string(day);
    string smon     = day >= 10 ? to_string(month) : "0" + to_string(month);
    string syear    = to_string(year);

    // Returning string in format 00/00/0000
    return sday + "/" + smon + "/" + syear;
}