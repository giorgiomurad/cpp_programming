//
// Created by Giorgio Murad on 07/08/2025.
//

#ifndef TIME_H
#define TIME_H

#include <ctime>
#include <iostream>

using namespace std;
class Time {
private:
    time_t timestamp;   // Timestamp
    int hour;           // Hours
    int minute;         // Minutes
    int second;         // Seconds

public:
    Time();
    Time(long elapseTime);
    Time(int hour, int minute, int second);
    void setTime(long elapseTime);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);
    int getHour();
    int getMinute();
    int getSecond();
    friend ostream& operator<<(ostream& cout, Time &time);
};



#endif //TIME_H
