//
// Created by Giorgio Murad on 07/08/2025.
//
#include <ctime>
#include <string>

#include "Time.h"

Time::Time() {
    timestamp = time(0);

    setTime(timestamp);
}

Time::Time(long elapseTime) {

    setTime(elapseTime);
}

Time::Time(int hour, int minute, int second) {

    setHour(hour);
    setMinute(minute);
    setSecond(second);
}


void Time::setTime(long elapseTime) {
    tm datetime = *localtime(&elapseTime);

    setHour(datetime.tm_hour);
    setMinute(datetime.tm_min);
    setSecond(datetime.tm_sec);
}

void Time::setHour(int hour) {

    this->hour = hour;
}

void Time::setMinute(int minute) {

    this->minute = minute;
}

void Time::setSecond(int second) {

    this->second = second;
}

int Time::getHour() {

    return hour;
}

int Time::getMinute() {

    return minute;
}

int Time::getSecond() {

    return second;
}

ostream& operator<<(ostream& cout, Time& time) {
    int hour, minute, second;
    string sthour, stminute, stsecond;


    hour = time.getHour();
    if (hour >= 10)
        sthour = to_string(hour);
    else
        sthour = "0" + to_string(hour);

    minute = time.getMinute();
    if (minute >= 10)
        stminute = to_string(minute);
    else
        stminute = "0" + to_string(minute);

    second = time.getSecond();
    if (second >= 10)
        stsecond = to_string(second);
    else
        stsecond = "0" + to_string(second);


    cout << sthour << ":" << stminute << ":" << stsecond << endl;
    return cout;
}