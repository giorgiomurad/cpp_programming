//
// Created by Giorgio Murad on 12/08/2025.
//

#ifndef MYINTEGER_H
#define MYINTEGER_H
#include <string>

using namespace std;
class MyInteger {
private:
    int integer;

public:
    MyInteger(int integer);
    int getValue();
    bool isEven();
    bool isOdd();
    bool isPrime();
    static bool isEven(int value);
    static bool isOdd(int value);
    static bool isPrime(int value);
    static bool isEven(MyInteger &integer);
    static bool isOdd(MyInteger &integer);
    static bool isPrime(MyInteger &integer);
    bool equals(int value);
    bool equals(MyInteger &integer);
    static int parseInt(char *ch);
    static int parseInt(string str);
};



#endif //MYINTEGER_H
