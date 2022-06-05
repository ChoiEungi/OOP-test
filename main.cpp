#include <iostream>
#include "input/Input.h"
#include "domain/destination/ExpressBus.cpp"

int main() {
    ExpressBus* expressBus = new ExpressBus();
    CustomTime customTime = CustomTime(16, 0);

    cout <<"---------최적 결과----------"<<endl;
    cout << expressBus->findOptimalResult(customTime) << endl;

    cout<<endl;
    cout <<"---------전체 결과----------"<<endl;
    expressBus->findAllResult(customTime);

//    int inputSelectionNumber;
//    Input::startInstruction();
//    inputSelectionNumber = Input::inputSelectionNumber();
//    Input::timeSelectInstruction(inputSelectionNumber);
//    return 0;
}
