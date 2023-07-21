#include <iostream>
#include "Dashboard.h"
#include "Camera.h"
#include "Sensor.h"

#include "Temperature.h"
#include "Humidity.h"
#include "AirQ.h"
#include "IlluminationLv.h"
#include "RGB.h"
#include "Thermic.h"

Dashboard::Dashboard(){}                //Constructor

Dashboard::~Dashboard(){}

//Include functions
void Dashboard::exit(){
    std::cout << "End of program "<< std::endl;
}

int Dashboard::showMenu(){
    int action;

    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Select the corresponding option to see: " << std::endl << std::endl;
    std::cout << "0) New Authorization" << std::endl;
    std::cout << "1) Temperature" << std::endl;
    std::cout << "2) Humidity" << std::endl;
    std::cout << "3) Air Quality" << std::endl;
    std::cout << "4) Illumination" << std::endl;
    std::cout << "5) RGB Camera" << std::endl;
    std::cout << "6) Thermica Camera" << std::endl;
    std::cout << "7) Exit" << std::endl;
    std::cout << "-----------------------------------------" << std::endl << std:: endl;

    std::cin >> action;
    return action;
}