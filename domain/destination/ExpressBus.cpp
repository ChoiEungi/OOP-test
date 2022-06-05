#include "Destination.cpp"

using namespace std;


class ExpressBus : public Destination {
public:
    ExpressBus(){
        this->busInfoList = BusInfoList();
        initBusInfoList();
    }


    void initBusInfoList(){
        this->busInfoList.addBusInfo(BusInfo("Maewol16", initsongjungTime(), "GIST", 36));
        this->busInfoList.addBusInfo(BusInfo("Cheomdan09", initKITECHTime(), "Korea Institute of Industiral Technology", 41));
        this->busInfoList.addBusInfo(BusInfo("Ullim51", initEtriTime(), "Electronics and Telecommunications Research Institute",36));
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
    vector<CustomTime> initsongjungTime(){
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

    vector<CustomTime> initKITECHTime(){
        vector<CustomTime> KITECHTime;
        KITECHTime = vector<CustomTime>();
        int size = 55;
        int bustSixteenHourWeek[55] = {5,6,6,6,7,7,7,7,7,8,8,8,9,9,10,10,10,11,11,11,12,12,12,13,13,13,14,14,14,15,15,15,16,16,16,16,17,17,17,17,18,18,18,18,19,19,20,20,20,21,21,21,22,22};
        int bustSixteenMinWeek[55] = {40,05,25,45,00,13,26,40,55,12,30,50,145,40,05,30,50,10,30,50,10,30,50,10,30,50,10,30,50,10,30,50,05,20,35,50,05,20,34,47,00,15,35,58,20,40,00,20,40,00,20,40,00,20};

        for(int i=0; i<size; i++) {
            KITECHTime.push_back(CustomTime(bustSixteenHourWeek[i], bustSixteenMinWeek[i]));
        }
        return KITECHTime;
    }

    vector<CustomTime> initEtriTime(){
        vector<CustomTime> ETRITime;
        ETRITime = vector<CustomTime>();
        int size =88;
        int busFiftyoneHourWeek[88] = {5,5,6,6,6,6,6,6,7,7,7,7,7,7,7,8,8,8,8,8,8,9,9,9,9,9,10,10,10,10,11,11,11,11,11,12,12,12,12,12,12,13,13,13,13,13,14,14,14,14,14,15,15,15,15,15,16,16,16,16,16,16,17,17,17,17,17,18,18,18,18,18,19,19,19,19,20,20,20,20,20,21,21,21,21,21,22,22};
        int busFiftyoneMinWeek[88] = {40,52,4,16,27,38,48,57,6,14,22,30,38,46,54,2,10,19,29,40,52,5,18,31,44,57,10,23,36,49,2,15,28,40,51,1,11,21,31,41,51,1,11,22,34,47,0,13,26,39,52,5,18,31,43,55,6,17,28,39,49,59,9,20,32,44,56,8,20,33,46,59,12,25,38,51,4,17,30,43,56,8,20,32,44,56,8,20};

        for(int i=0; i<size;i++) {
            ETRITime.push_back(CustomTime(busFiftyoneHourWeek[i], busFiftyoneMinWeek[i]));
        }
        return ETRITime;
    }
};