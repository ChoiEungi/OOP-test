#include <iostream>
#include "input/Input.h"
#include "domain/destination/ExpressBus.cpp"
#include "domain/destination/Airplane.cpp"
#include "domain/destination/Train.cpp"
#include "domain/destination/DestinationList.h"


class BusRecommendationController {
public:
    static void run(){
        DestinationList d = DestinationList();
        initalizeData(d);

        int inputSelectionNumber;
        Input::startInstruction();
        inputSelectionNumber = Input::inputSelectionNumber();
        CustomTime inputTime = Input::timeSelectInstruction(inputSelectionNumber);
        inputSelectionNumber--;

        const string &resultString = d.selectDestination(inputSelectionNumber, inputTime);

        cout <<"---------Optimal Recommendation----------"<<endl;
        cout << resultString << endl;

        cout <<"---------Another Recommendation----------"<<endl;
        vector<string> a = d.selectAllResults(inputSelectionNumber,inputTime);
        for (int i=0; i<a.size();i++) {
            if (resultString == a.at(i)) continue;
            cout << a.at(i) << endl;
        }
    }

private:
    static void initalizeData(DestinationList& d){
        d.addDestination(*(new ExpressBus()));
        d.addDestination(*(new Train()));
        d.addDestination(*(new Airplane()));
    }
};


