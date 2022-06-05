#include "Destination.cpp"
#include "iostream"

using namespace std;


class Airplane: public Destination{
public:
    Airplane(){
    }

public:
    void initBusInfoList(){
        this->busInfoList.addBusInfo(BusInfo("송정33", initsongjungTime(), "과기원역", 38));
    }

    string findOptimalResult(CustomTime& customTime){
        return this->busInfoList.findOptimalBus(customTime).toString();
    }

    vector<string> findAllResult(CustomTime& customTime){
        vector<string> resultList = vector<string>();
        this->busInfoList.initalizeAllOptimalBusInfo(customTime);

        for(int i=0; i<this->busInfoList.size(); i++) {
            BusInfo &c = this->busInfoList.at(i);
            string basicString = c.toString();
            resultList.push_back(basicString);
            cout << basicString << endl;
        }

        return resultList;
    }

private:
    vector<CustomTime> initsongjungTime() {
        vector<CustomTime> songjungTime;
        songjungTime = vector<CustomTime>();
        int size = 55;
        int bustSixteenHourWeek[55] = {5,6,6,6,7,7,7,7,7,8,8,8,9,9,10,10,10,11,11,11,12,12,12,13,13,13,14,14,14,15,15,15,16,16,16,16,17,17,17,17,18,18,18,18,19,19,20,20,20,21,21,21,22,22};
        int bustSixteenMinWeek[55] = {40,05,25,45,00,13,26,40,55,12,30,50,145,40,05,30,50,10,30,50,10,30,50,10,30,50,10,30,50,10,30,50,05,20,35,50,05,20,34,47,00,15,35,58,20,40,00,20,40,00,20,40,00,20};

        for(int i=0; i<size; i++) {
            songjungTime.push_back(CustomTime(bustSixteenHourWeek[i], bustSixteenMinWeek[i]));
        }
        return songjungTime;
    }
};

};