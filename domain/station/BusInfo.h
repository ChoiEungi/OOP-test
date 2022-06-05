#ifndef OOP_PROJECT_BUSINFO_H
#define OOP_PROJECT_BUSINFO_H

#include <string>
#include "vector"
#include "../time/CustomTime.h"

class BusInfo {
private:
    std::string busName; // 버스 이름
    std::vector<CustomTime> busArrivalTimeList; // 도착 시간들
    std::string beginningBusStationName; // 출발 정류장
    int takenTime; // 소요 시간 (min)
    CustomTime optimalTime; // 최적 시간

public:
    BusInfo(std::string name, std::vector<CustomTime> busArrivalTimeList, std::string beginningBusStationName, int takenTime);
    CustomTime findRecommendationTime(CustomTime beginningTime);
    std::string toString();
};

#endif //OOP_PROJECT_BUSINFO_H

