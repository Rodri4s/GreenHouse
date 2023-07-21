/**
 * @file RGB.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de Thermicos
 * @brief Herencia Camera y Thermic
 * @code
   int main(){
    Thermic therm = Thermic();
    therm.readThermic();
   }
 * @endcode
*/

#ifndef THERMIC_H
#define THERMIC_H

#include "Camera.h"
/**
 * @brief Declaracion de clase Thermic hija de Camera
*/
class Thermic: public Camera{
    public:
        /**
         * @brief Constructor de clase Thermic
        */    
        Thermic();
        /**
         * @brief Destructor de clase Thermic
        */        
        ~Thermic();
        /**
         * @brief Lectura de camaras Termicas
         * @return void
        */        
        void readThermic();
        
};

#endif

