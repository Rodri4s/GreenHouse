/**
 * @file Camera.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Verificacion de Camaras
 * @brief Genera el padre Camera
*/

#ifndef CAMERA_H
#define CAMERA_H
/**
 * @brief Declaracion de la clase padre Camera
*/
class Camera{
    public:
        /**
         * @brief Constructor de clase Camera
        */
        Camera();
        /**
         * @brief Destructor de clase Camera
        */        
        ~Camera();
        /**
         * @brief Lectura de datos Camera
         * @return void
        */        
        void readCameraVal();
};

#endif
