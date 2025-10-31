//
// Created by Giorgio Murad on 23/09/2025.
//

#include "MyDate.h"

// Constructing that initializes the date
MyDate::MyDate() {
    time = system_clock::to_time_t(now);
    date_time = *localtime(&time);

    setDate(date_time.tm_mday, date_time.tm_mon, date_time.tm_year);
}

// Function that sets the day, month, and year of the date
void MyDate::setDate(int day, int month, int year) {

    this->day   = day;
    this->month = month;
    this->year  = year;
}

// Function that returns the day of the date
int MyDate::getDay() {
    return day;
}

// Function that returns the month of the date
int MyDate::getMonth() {
    return month+1;
}

int MyDate::getYear() {
    return year+1900;
}

ostream& operator<<(ostream& os, const MyDate& date) {
    string strday   = (date.day >= 10) ? to_string(date.day) : "0"+to_string(date.day);
    string strmonth = (date.month+1 >= 10) ? to_string(date.month+1) : "0"+to_string(date.month+1);
    string stryear  = to_string(date.year+1900);

    os << strday << "/" << strmonth << "/" << stryear;
    return os;
}