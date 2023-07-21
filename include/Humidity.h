/**
 * @file Humidity.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de Humedad
 * @brief Herencia Sensor y Humidity
 * @code
   int main(){
    Humidity humid = Humidity();
    humid.readHumidity();
   }
 * @endcode
*/

#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "Sensor.h"
/**
 * @brief Declaracion de la clase Humidity hija de Sensor
*/
class Humidity: public Sensor{
    public:
        /**
         * @brief Constructor de clase Humidity
        */    
        Humidity();
        /**
         * @brief Destructor de clase Humidity
        */        
        ~Humidity();
        /**
         * @brief Lectura de Humedad
         * @return void
        */        
        void readHumidity();
        
};

#endif
