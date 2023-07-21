/**
 * @file RGB.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de RGB
 * @brief Herencia Camera y RGB
 * @code
   int main(){
    RGB rgb = RGB();
    rgb.readRGB();
   }
 * @endcode
*/

#ifndef RGB_H
#define RGB_H

#include "Camera.h"
/**
 * @brief Declaracion de la clase RGB hija de Camera
*/
class RGB: public Camera{
    public:
        /**
         * @brief Constructor de clase RGB
        */    
        RGB();
        /**
         * @brief Destructor de clase RGB
        */        
        ~RGB();
        /**
         * @brief Lectura de RGB
         * @return void
        */        
        void readRGB();
};
#endif

