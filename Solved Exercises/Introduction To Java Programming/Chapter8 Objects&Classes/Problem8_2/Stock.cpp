//
// Created by Giorgio Murad on 05/08/2025.
//

#include "Stock.h"

// Constructor that initializes the stock object given its name and symbol
Stock::Stock(string n, string s){

    name = n;
    symbol = s;
}

// Function that returns the percentage change from the previous stock price to the current stock price
double Stock::getChangeInPrice() {

    return ((currentPrice - previousPrice) / previousPrice) * 100;
}

