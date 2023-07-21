/**
 * @file AirQ.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de Cualidad de Aire
 * @brief Herencia Sensor y AirQ
 * @code
   int main(){
    AirQ airQ = AirQ();
    airQ.readAirQ();
   }
 * @endcode
*/

#ifndef AIRQ_H
#define AIRQ_H

#include "Sensor.h"
/**
 * @brief Declaracion de Clase AirQ hija de Sensor
*/
class AirQ: public Sensor{
    public: 
        /**
         * @brief Constructor de clase AirQ
        */
        AirQ();
        /**
         * @brief Destructor de clase AirQ
        */        
        ~AirQ(); 
        /**
         * @brief Lectura de AirQ
         * @return void
        */                            
        void readAirQ();
        
};

#endif
