#include "Destination.cpp"
#include "iostream"

using namespace std;


class Airplane: public Destination{
public:
    Airplane(){
        this->busInfoList = BusInfoList();
        initBusInfoList();
    }

public:
    void initBusInfoList(){
        this->busInfoList.addBusInfo(BusInfo("Songjeong33", initsongjungTime(), "GIST", 38));
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
        }

        return resultList;
    }

private:
    vector<CustomTime> initsongjungTime() {
        vector<CustomTime> songjungTime;
        songjungTime = vector<CustomTime>();
        int size =42;
        int busThirtythreeHourWeek[42] = {6,6,6,7,7,7,8,8,9,9,9,10,10,11,11,11,12,12,13,13,13,14,14,15,15,16,16,16,17,17,17,18,18,19,19,19,20,20,21,21,21,22};
        int busThirtythreeMinWeek[42] = {0,25,50,10,30,50,15,40,5,30,55,20,45,5,25,50,15,40,5,30,55,20,45,10,35,0,25,50,10,30,50,15,40,5,30,55,20,40,0,20,40,0};
        for(int i=0; i<size; i++) {
            songjungTime.push_back(CustomTime(busThirtythreeHourWeek[i], busThirtythreeMinWeek[i]));
        }
        return songjungTime;
    }
};

