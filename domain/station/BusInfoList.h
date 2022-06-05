#ifndef UNTITLED_BUSINFOLIST_H
#define UNTITLED_BUSINFOLIST_H

#include "vector"
#include "BusInfo.h"

class BusInfoList {
private:
    std::vector<BusInfo> busList;
public:
    BusInfoList();
    void addBusInfo(BusInfo busInfo);
    void initalizeAllOptimalBusInfo(CustomTime& customTime);
    BusInfo findOptimalBus(CustomTime& customTime);
    int size();
    BusInfo& at(int i);

};


#endif //UNTITLED_BUSINFOLIST_H
