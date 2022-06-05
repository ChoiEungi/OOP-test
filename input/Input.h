#ifndef OOP_PROJECT_INPUT_H
#define OOP_PROJECT_INPUT_H
#include "string"
#include "vector"
#include "sstream"
#include "../domain/time/CustomTime.h"

using namespace std;

class Input {
private:
    static void printNumberSelectionDirection();
    static void printNumberSelectionTime();
    static void printLine();
    static string numberToTransportation(int selectionNumber);

public:
    static int inputSelectionNumber();
    static int inputSelectionNumberTime();
    static void startInstruction();
    static void leaveTimeInstruction(int selectionNumber);
    static CustomTime timeSelectInstruction(int selectionNumber);
};


#endif //OOP_PROJECT_INPUT_H
