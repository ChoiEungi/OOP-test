#include "../station/BusInfo.h"
#include "../station/BusInfoList.h"
#include "iostream"
#include "vector"

using namespace std;

class Destination {
protected:
    BusInfoList busInfoList;
public:
    Destination() {};
    virtual void initBusInfoList() = 0;
    virtual string findOptimalResult(CustomTime& customTime) =0;
    virtual vector<string> findAllResult(CustomTime& customTime) = 0;
private:
};

