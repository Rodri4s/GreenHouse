#include <iostream>
#include "Thermic.h"
#include "Camera.h"

Thermic::Thermic(){}                //Constructor

//Include functions
void Thermic::readThermic(){
    readCameraVal();
    std::cout << "The Thermic camera detects no movement" << std::endl;
}

Thermic::~Thermic(){}               //Destructor