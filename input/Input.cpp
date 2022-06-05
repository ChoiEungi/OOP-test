#include "Input.h"
#include "iostream"
#include "time.h"
using namespace std;


int Input::inputSelectionNumber() {
    printNumberSelectionDirection();
    int inputNumber;
    cin >> inputNumber;
    return inputNumber;
}

void Input::startInstruction(){
    string busInstruction("1. BUS(U-sqaure)");
    string KTXInstruction("2. TRAIN(KTX: Gwangju-Songjeong Station)");
    string airplaneInstruction("3. Airplane(Gwangju Airport)");

    printLine();
    cout << "What will you take to go to your home?" << endl;
    cout << busInstruction << endl;
    cout << KTXInstruction << endl;
    cout << airplaneInstruction << endl;
    printLine();
}

vector<string> split(string sentence, char Separator)
{
    vector<string> answer;
    stringstream ss(sentence);
    string tmp;

    while (getline(ss, tmp, Separator)) {
        answer.push_back(tmp);
    }
    return answer;
}

CustomTime Input::timeSelectInstruction(int selectionNumber) {
    string timeString;

    cout << "When is the departure time of the ";
    cout << numberToTransportation(selectionNumber) << "?" << "(ex. 16:30)" << endl;
    cout << "Enter the Time: ";
    cin >> timeString;
    const vector<string> &splitted = split(timeString, ':');
    return CustomTime(stoi(splitted.at(0)), stoi(splitted.at(1)));

//    cout << << endl;
}

void Input::printNumberSelectionDirection() {
    cout << "Select the Number ";
}

void Input::printLine(){
    cout << "---------------------------------------------------------" << endl;
}

string Input::numberToTransportation(int selectionNumber) {
    switch (selectionNumber) {
        case 1:
            return "Express Bus";
        case 2:
            return "Train";
        case 3:
            return "Airplane";
        default:
            return "none";
    }
}

int Input::inputSelectionNumberTime() {
    printNumberSelectionTime();
    int inputNumber;
    cin >> inputNumber;
    return inputNumber;
}

void Input::leaveTimeInstruction(int selectionNumber) {
    cout<<"When will you take a City Bus from GIST?"<<endl;
    cout<<"1. Now" << endl;
    cout<<"2. Input the future Time" << endl;
}

void Input::printNumberSelectionTime() {

}









