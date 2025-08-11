//
// Created by Giorgio Murad on 05/08/2025.
//

#ifndef STOCK_H
#define STOCK_H

#include <string>

using namespace std;

class Stock {
public:
    string name;            // Stock Name
    string symbol;          // Stock Symbol
    double currentPrice;    // Current Stock Price
    double previousPrice;   // Previous Stock Price

    Stock(string n, string s);
    double getChangeInPrice();
};



#endif //STOCK_H
