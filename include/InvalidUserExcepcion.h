/**
 * @file InvalidUserExcepcion.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Detector de Excepciones
 * @brief Detecta una excepcion tipo Usuario Invalido
 * @code
    try{
        if(UserData.find({name,nif}) == UserData.end()){
            throw InvalidUserException();
        }
        std::cout << "\nVALID USER" << endl;
        std::cout << "Loading..." << endl << endl;
        sleep(2);
        system("clear");

        validate = true;
        auto date = chrono::system_clock::now();
        time_t actual_time = chrono::system_clock::to_time_t(date);
        std::cout << "Accessed time: " << ctime(&actual_time);
        return validate;
    }
    catch(InvalidUserException& e){
        std::cout << endl << "The USER:" << name << " IS NOT VALID" << endl;
        validate = false;
        std::cout << "The NIF:" << nif << " DOESN'T EXIST" << endl << endl;
        validate = false;
        sleep(2);
        throw system("./main");
    }
    return validate;
 * @endcode
*/

#ifndef INVALIDUSEREXCEPCION_H
#define INVALIDUSEREXCEPCION_H

#include <exception>
#include <iostream>
/**
 * @brief Declaracion de clase InvalidUserException
*/
class InvalidUserException: public std::exception{
    public:
        /**
         * @brief Declaracion de la excepcion para Usuarios incorrectos
        */    
        virtual const char* what() const throw(){
            return "Invalid User Information";
        }
};

#endif