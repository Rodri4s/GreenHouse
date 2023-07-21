/**
 * @file Sensor.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Verificacion de Sensores
 * @brief Genera el padre Sensor
*/

#ifndef SENSOR_H
#define SENSOR_H
/**
 * @brief Declaracion de clase padre Sensor
*/
class Sensor{
    public:
        /**
         * @brief Constructor de clase Sensor
        */    
        Sensor();
        /**
         * @brief Destructor de clase Sensor
        */        
        ~Sensor();
        /**
         * @brief Lectura de datos de Sensores
         * @return void
        */        
        void readSensorVal();
};

#endif