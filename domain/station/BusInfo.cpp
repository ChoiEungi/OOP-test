#include "BusInfo.h"
#include "iostream"

using namespace std;


BusInfo::BusInfo(std::string name, std::vector<CustomTime> busArrivalTimeList, std::string beginningBusStationName, int takenTime) {
    this->busName = name;
    this->busArrivalTimeList = busArrivalTimeList;
    this->beginningBusStationName = beginningBusStationName;
    this->takenTime = takenTime;
    this->optimalTime = CustomTime();
}

CustomTime BusInfo::findRecommendationTime(CustomTime beginningTime) {

    int walkingTime = 10;
    CustomTime leastArrivalTime = beginningTime.minusMinute(this->takenTime + walkingTime);

    int idx;
    int min_val = 1000000;
    CustomTime min_time;

    for (int i = 0; i < this->busArrivalTimeList.size(); i++) {
        CustomTime busTime = this->busArrivalTimeList.at(i);

        if (leastArrivalTime.isAfter(busTime)) break;

        int temp = leastArrivalTime.getAbsDiff(busTime);

        if (temp < min_val){
            idx = i;
            min_val = temp;
            min_time = busTime;
        }
    }
    this->optimalTime = min_time;
    return min_time;
}

std::string BusInfo::toString() {
    string optimalTime = this->optimalTime.toString();
    string result = "Take the city bus " + this->busName +" from " + this->beginningBusStationName + " at " + optimalTime + ".";
    return result;
}


