//
// Created by 최은기 on 2022/05/29.
//

#include "DestinationList.h"

DestinationList::DestinationList() {
    this->destinationList = vector<Destination*>();

}

void DestinationList::addDestination(Destination& destination) {
    this->destinationList.push_back(&destination);
}

string DestinationList::selectDestination(int selectionNumber, CustomTime& customTime) {
    const string &basicString = this->destinationList.at(selectionNumber)->findOptimalResult(customTime);
    return basicString;
}
