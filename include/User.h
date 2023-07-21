/**
 * @file Temperature.h
 * @version 1.0
 * @date 21/12/2022
 * @author Rodrigo Rodas Barrera
 * @title Verificacion de Usuario
 * @brief Verifica las credenciales del usuario para dar permiso de usar la interface o no
 * @code
   int main(){
        string _name = "";
        std::cout << "Write your user name: ";
        std::cin >> _name;

        string _nif = "";
        std::cout << "Write your NIF: ";
        std::cin >> _nif;

        bool valid;
        
        User p1 = User(_name, _nif);      //Crea un usuario y prueba si sus datos son correctos.
        p1.leer();
        valid = p1.authenticateUser();
        p1.verifyUser(valid);
        p1.verifyNif(valid);
        std::cout << "\n";
   }
 * @endcode
*/

#ifndef USER_H
#define USER_H

#include <iostream>
#include <stdlib.h>
#include <map>
#include <sstream>
#include <vector>
#include <string>
#include <set>
using namespace std;

/**
 * @brief Declaracion de clase User
*/   
class User {
    friend ostream &operator <<(ostream &, User &);
    public:
        /**
        * @brief Constructor de clase User
        * @param Strings del Nombre y Nif del usuario
        */    
        User(string&, string&);
        /**
        * @brief Destructor de clase User
        */
        ~User();
        /**
         * @brief Establece el NIF del usuario
         * @param String & del NIF
         * @return void
        */
        void setNif(string &);
        /**
         * @brief Regresa el Nif del usuario
         * @return String del NIF
        */        
        string getNif();
        /**
         * @brief Estable el nombre del usuario
         * @param String & del nombre
         * @return void
        */         
        void setname(string &);
        /**
         * @brief Regresa el nombre del usuario
         * @return string del nombre
        */
        string getname();
        /**
         * @brief Verifica si el NIF introducido es permitido
         * @param bool
         * @return Da la bienvenida al usuario o indica que no es correcto
        */        
        void verifyNif(bool);
        /**
         * @brief Verifica si el numero de usuario introducido es permitido
         * @param bool 
         * @return Da la bienvenida al usuario o indica que no es correcto
        */            
        void verifyUser(bool);
        /**
         * @brief Verifica si el NIF y el name son validos
         * @return permiso para proseguir a la interface o no
        */    
        bool authenticateUser();
        /**
         * @brief Sobrecarga del User para comparar usuarios
         * @param Usuario a comparar
         * @return bool
        */
        bool operator<( User&);
        /**
         * @brief Escribe el fichero de Usuarios
         * @param String de name y nif del usuario
         * @return Fichero users.dat
        */
        void escribir(string , string);
        /**
         * @brief Lee el fichero de Usuarios
         * @return Lectura del fichero users.dat
        */
        void leer();


    private: //Atributos
        bool validate;
        string name;
        string nif;
        set<pair<string,string>> UserData;      //set de pares
};
#endif