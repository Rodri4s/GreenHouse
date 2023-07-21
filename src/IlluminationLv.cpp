#include <iostream>
#include "IlluminationLv.h"
#include "Sensor.h"

IlluminationLv::IlluminationLv(){}                //Constructor

//Include functions
void IlluminationLv::readIlluminationLv(){
    readSensorVal();
    std::cout << "The IlluminationLv is of 100%" << std::endl;
}

IlluminationLv::~IlluminationLv(){}               //Destructor
