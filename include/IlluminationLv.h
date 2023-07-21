/**
 * @file IlluminationLv.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector la Iluminacion
 * @brief Herencia Sensor y IlluminationLv
 * @code
   int main(){
    IlluminationLv illumination = IlluminationLv();
    illumination.readIlluminationLv();
   }
 * @endcode
*/

#ifndef ILLUMINATIONLV_H
#define ILLUMINATIONLV_H

#include "Sensor.h"
/**
 * @brief Declaracion clase IlluminationLv hija de Sensor
*/
class IlluminationLv: public Sensor{
    public:
        /**
         * @brief Constructor de clase IlluminationLv
        */    
        IlluminationLv();
        /**
         * @brief Destructor de clase IlluminationLv
        */        
        ~IlluminationLv();
        /**
         * @brief Lectura del nivel de Illumination
         * @return void
        */        
        void readIlluminationLv();
};
#endif
