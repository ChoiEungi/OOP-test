#!/bin/bash

g++ -std=c++11 main.cpp input/Input.cpp input/Input.h output/Output.cpp output/Output.h domain/destination/Destination.cpp domain/destination/Airplane.cpp domain/destination/ExpressBus.cpp domain/destination/Train.cpp domain/station/BusInfo.cpp domain/station/BusInfo.h domain/time/CustomTime.cpp domain/time/CustomTime.h domain/station/BusInfoList.cpp domain/station/BusInfoList.h domain/destination/DestinationList.cpp domain/destination/DestinationList.h BusRecommnedationController.cpp

