// Problem taken from Introduction to Java Programming by Y. Daniel Liang (8th ed.)
// Objects & Classes
//
// Problem 8.2 : Design a class that represents a stock object.
//               The stock class should include:
//               - A symbol and name
//               - A data field that stores the stock price of the previous day
//               - A data field that stores the current stock price
//               - A constructor that creates a stock with specified name and symbol
//               - A method that returns the percentage-change from the previous stock price
//                 to the current stock price.
//
//               Write a program that creates a stock object with JAVA as the symbol, and Sun
//               Microsystems Inc., and the previous closing price 4.5. The current stock price
//               should be set to 4.35.
//               The program should display the price-change percentage in the stock price.
//
//
// Author : Giorgio Murad
#include <iostream>
#include <iomanip>

#include "Stock.h"


using namespace std;

int main() {
    Stock stock("Sun Microsystems Inc.", "JAVA");
    stock.previousPrice = 4.5;
    stock.currentPrice = 4.35;

    cout << fixed << setprecision(2) <<
        "The change in stock price is " << stock.getChangeInPrice() << "%." << endl;
    return 0;
}