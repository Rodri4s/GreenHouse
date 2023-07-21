#include <iostream>
#include "AirQ.h"
#include "Sensor.h"

AirQ::AirQ(){}                //Constructor

//Include functions
void AirQ::readAirQ(){
    readSensorVal();
    std::cout << "The AirQ is of 78%" << std::endl;
}

AirQ::~AirQ(){}               //Destructor

