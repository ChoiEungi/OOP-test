//
// Created by 최은기 on 2022/05/21.
//

#include "CustomTime.h"
#include "stdlib.h"
using namespace std;


std::string CustomTime::toString() {
    string hour = to_string(this->hour);
    string minutes;

    if (this->minutes < 10){
        minutes = "0" + to_string(this->minutes);
        return hour + ":" + minutes;
    }

    minutes = to_string(this->minutes);
    return hour + ":" + minutes;
}

CustomTime CustomTime::operator+(CustomTime &c) {
    int n_min = this->minutes+c.minutes;
    int n_hour = this->hour + c.hour;
    if (n_min >= 60) {
        n_hour++;
        n_min -= 60;
    }

    if (n_hour >= 24) {
        n_hour -= 24;
    }

    return CustomTime(this->hour + c.hour, this->minutes + c.minutes);
}

CustomTime::CustomTime(int hour, int minutes) {
    this->hour = hour;
    this->minutes = minutes;
}

int CustomTime::getAbsDiff(CustomTime &c) {
    int hour;
    int minute;

//    if (this->hour > c.hour) {
//        hour = c.hour + 24 - this->hour;
//        minute = c.hour - this->hour;
//        return hour * 60 + minute;
//    }

    hour = c.hour - this->hour;
    minute = c.minutes - this->minutes;
    return abs(hour * 60 + minute);
}

CustomTime CustomTime::minusMinute(int minute) {
    if (this->minutes - minute < 0){
        this->hour--;
        this->minutes = (this->minutes + 60) - minute;
    }
    else{
        this->minutes -= minute;
    }

    return CustomTime(this->hour, this->minutes);
}

CustomTime::CustomTime(const CustomTime& copy): hour(copy.hour), minutes(copy.minutes) {

}

CustomTime::CustomTime() {

}

bool CustomTime::isAfter(CustomTime &c) {
//    최소시간.isAfter(버스 시간) -> 중단

    if (this->hour < c.hour){
        return true;
    }

    if(this->hour == c.hour && this->minutes <= c.minutes){
        return true;
    }

    return false;
}

int CustomTime::toMinute() {
    return this->hour * 60 + this->minutes;
}

bool CustomTime::isException() {
    return this->hour==0 && this->minutes==0;
}


