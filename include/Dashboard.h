/**
 * @file Dashboard.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Interfaz para la lectura de datos
 * @brief Libreria para la seleccion y demostracion de la interface
*/

#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <set>
/**
 * @brief Declaracion de clase Dashboard
*/
class Dashboard{
    public:
        /**
         * @brief Constructor de clase Dashboard
        */ 
        Dashboard();
        /**
         * @brief Destructor de clase Dashboard
        */
        ~Dashboard();
        /**
         * @brief La salida de la interface
         * @return Cierre de la interfaz
        */
        void exit();
        /**
         * @brief Muestra las oopciones de la intefaz 
         * @return Una interfaz de 8 opciones para escoger de sensores, camaras o actualizar base de datos
        */
        int showMenu();
        /**
         * @brief Marca la opcion de lo que se quiere observar de la interfaz
         * @param int Numero entre 0 y 7 
         * @return Lectura de la opcion seleccionada
        */
        void selection(int);


    private:    
        float timestamp;
        int action;
};
#endif