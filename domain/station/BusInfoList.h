#ifndef UNTITLED_BUSINFOLIST_H
#define UNTITLED_BUSINFOLIST_H

#include "vector"
#include "BusInfo.h"

class BusInfoList {
private:
    std::vector<BusInfo> busList;
public:
    BusInfoList();
    void init(); //버스 정보를 초기화 하는 메소드
    void addBusInfo(BusInfo busInfo);
    void initalizeAllOptimalBusInfo(CustomTime& customTime);
    BusInfo findOptimalBus(CustomTime& customTime);
    int size();
    BusInfo& at(int i);

    const std::vector<BusInfo> &getBusList() const;
};


#endif //UNTITLED_BUSINFOLIST_H
