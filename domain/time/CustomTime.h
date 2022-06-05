#ifndef OOP_PROJECT_CUSTOM_TIME_H
#define OOP_PROJECT_CUSTOM_TIME_H
#include <string>

class CustomTime {

private:
    int hour;
    int minutes;
public:
    CustomTime(int hour, int minutes);
    CustomTime();
    CustomTime(const CustomTime& copy);
    std::string toString();
    CustomTime operator+(CustomTime& c);
    int getAbsDiff(CustomTime& c);
    int toMinute();
    CustomTime minusMinute(int minute);
    bool isAfter(CustomTime& c);
};



#endif //OOP_PROJECT_CUSTOM_TIME_H
