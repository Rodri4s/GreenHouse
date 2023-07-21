#include <iostream>
#include "RGB.h"
#include "Camera.h"

RGB::RGB(){}                //Constructor

//Include functions
void RGB::readRGB(){
    readCameraVal();
    std::cout << "The RGB camera has a view of 100%" << std::endl;
}

RGB::~RGB(){}               //Destructor
