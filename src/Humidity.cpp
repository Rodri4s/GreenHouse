#include <iostream>
#include "Humidity.h"
#include "Sensor.h"

Humidity::Humidity(){}                //Constructor

//Include functions
void Humidity::readHumidity(){
    readSensorVal();
    std::cout << "The Humidity is of 88%" << std::endl;
}

Humidity::~Humidity(){}               //Destructor