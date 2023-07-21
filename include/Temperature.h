/**
 * @file Temperature.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de Temperatura
 * @brief Herencia Sensor y Temperature
 * @code
   int main(){
    Temperature temp = Temperature();
    temp.readTemp();
   }
 * @endcode
*/

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include "Sensor.h"
/**
 * @brief Declaracion de clase Temperature hija de Sensor
*/
class Temperature: public Sensor{
    public:
        /**
         * @brief Constructor de clase Temperature
        */    
        Temperature();
        /**
         * @brief Destructor de clase Temperature
        */        
        ~Temperature();
        /**
         * @brief Lectura de Temperature
         * @return void
        */        
        void readTemp();
        
};

#endif
