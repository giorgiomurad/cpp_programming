//
// Created by Giorgio Murad on 12/08/2025.
//

#include "MyInteger.h"

MyInteger::MyInteger(int integer) {

    this->integer = integer;
}

int MyInteger::getValue() {

    return integer;
}

bool MyInteger::isEven() {

    return integer % 2 == 0;
}

bool MyInteger::isOdd() {

    return integer % 2 == 1;
}

bool MyInteger::isPrime() {
    int n = integer-1;

    while (n > 1) {
        if (integer % n == 0)
            return false;

        n--;
    }

    return true;
}

bool MyInteger::isEven(int value) {

    return value % 2 == 0;
}

bool MyInteger::isOdd(int value) {

    return value % 2 == 1;
}

bool MyInteger::isPrime(int value) {
    int n = value - 1;

    while (n > 1) {
        if (value % n == 0)
            return false;

        n--;
    }

    return true;
}

bool MyInteger::isEven(MyInteger &integer) {

    return integer.isEven();
}

bool MyInteger::isOdd(MyInteger &integer) {

    return integer.isOdd();
}

bool MyInteger::isPrime(MyInteger &integer) {

    return integer.isPrime();
}

bool MyInteger::equals(int value) {

    return integer == value;
}

bool MyInteger::equals(MyInteger &integer) {

    return this->integer == integer.integer;
}

int MyInteger::parseInt(char *ch) {
    int integer = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        int temp = ch[i] - '0';

        integer = integer * 10 + temp;
    }

    return integer;
}

int MyInteger::parseInt(string str) {
    int integer = 0;

    for (char c : str) {
        int temp = c - '0';

        integer = integer * 10 + temp;
    }

    return integer;
}