#include <iostream>
#include "Temperature.h"
//include "Sensor.cpp"

Temperature::Temperature(){}                //Constructor
Temperature::~Temperature(){}               //Destructor

//Include functions
void Temperature::readTemp(){
    readSensorVal();
    std::cout << "The temperature is of 28 °C" << std::endl;
}
