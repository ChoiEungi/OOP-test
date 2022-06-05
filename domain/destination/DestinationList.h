//
// Created by 최은기 on 2022/05/29.
//

#ifndef UNTITLED_DESTINATIONLIST_H
#define UNTITLED_DESTINATIONLIST_H
#include "vector"
#include "Destination.cpp"


class DestinationList {
private:
    vector<Destination*> destinationList;
public:
    DestinationList();
    void addDestination(Destination& destination);
    string selectDestination(int selectionNumber, CustomTime& time);

};


#endif //UNTITLED_DESTINATIONLIST_H
