//
// Created by 최은기 on 2022/05/29.
//

#include "BusInfoList.h"

using namespace std;

BusInfoList::BusInfoList() {
    this->busList = vector<BusInfo>();
}

void BusInfoList::addBusInfo(BusInfo busInfo) {
    this->busList.push_back(busInfo);
}

BusInfo BusInfoList::findOptimalBus(CustomTime& customTime){
    int min_minutes = 1000000;
    int idx = 0;

    for(int i=0; i<this->busList.size(); i++){
        CustomTime recommendationTime = this->busList.at(i).findRecommendationTime(customTime);

        int temp = recommendationTime.toMinute();
        if (temp < min_minutes){
            idx = i;
            min_minutes = temp;
        }
    }

    return this->busList.at(idx);
}

int BusInfoList::size() {
    return this->busList.size();
}

void BusInfoList::initalizeAllOptimalBusInfo(CustomTime& customTime) {
    for(int i=0; i<this->busList.size(); i++){
        this->busList.at(i).findRecommendationTime(customTime);
    }
}

BusInfo &BusInfoList::at(int i) {
    return this->busList.at(i);
}
