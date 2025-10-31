//
// Created by Giorgio Murad on 23/09/2025.
//

#ifndef MYDATE_H
#define MYDATE_H

#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

class MyDate {
private:
    time_point<system_clock> now = system_clock::now();
    time_t time;
    tm date_time;
    int day, month, year;

public:
    MyDate();
    void setDate(int day, int month, int year);
    int getDay();
    int getMonth();
    int getYear();
    friend ostream& operator<<(ostream& os, const MyDate& date);

};



#endif //MYDATE_H
