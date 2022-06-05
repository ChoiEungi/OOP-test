#include <iostream>
#include "input/Input.h"
#include "domain/destination/ExpressBus.cpp"
#include "domain/destination/Airplane.cpp"
#include "domain/destination/Train.cpp"
#include "domain/destination/DestinationList.h"

void initalizeData(DestinationList& d){
    d.addDestination(*(new ExpressBus()));
    d.addDestination(*(new Train()));
    d.addDestination(*(new Airplane()));
}

int main() {

    DestinationList d = DestinationList();
    initalizeData(d);

    int inputSelectionNumber;
    Input::startInstruction();
    inputSelectionNumber = Input::inputSelectionNumber();

    cout << inputSelectionNumber << endl;
    CustomTime inputTime = Input::timeSelectInstruction(inputSelectionNumber);

    const string &resultString = d.selectDestination(inputSelectionNumber - 1, inputTime);

//    const string &first = d.selectDestination(, customTime);
//    const string &second = d.selectDestination(1, customTime);
//    const string &third = d.selectDestination(2, customTime);
//
    cout <<"---------Optimal Results----------"<<endl;
    cout << resultString << endl;


}
