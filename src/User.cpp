#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <chrono>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

#include "User.h"
#include "InvalidUserExcepcion.h"

//Constructor. Inicia los atributos--------------------------------------------
User::User(string &name, string &nif){
    
    setNif(nif);
    setname(name);
}

//Destructor. Destruye el objeto-----------------------------------------------
User::~User(){}

//Setter NIF-------------------------------------------------------------------
void User::setNif(string &nif){
    this -> nif = nif;
}

//Getter NIF-------------------------------------------------------------------
string User::getNif(){
    return nif;
}

//Setter name---------------------------------------------------------------
void User::setname(string &name){
    this -> name = name;
}

//Getter name---------------------------------------------------------------
string User::getname(){
    return name;
}

//Metodo 1---------------------------------------------------------------------
void User::verifyNif(bool validate){
    if (validate == true){
        std::cout << "Employee with NIF: " << nif << endl;
    }
}

//Metodo 2---------------------------------------------------------------------
void User::verifyUser(bool validate){
    if(validate == true){
        std::cout << "Welcome User: " << name << endl;
    }
}

//Metodo 3---------------------------------------------------------------------
bool User::authenticateUser(){
    bool validate = false;

//-----MODIFICACION: EXCEPCIONES-----
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
}

//Metodo 4----------------------------------------------------------------------
void User::leer(){
    ifstream fichero;
    string texto;
    fichero.open("users.dat", ios::in); //Abrir el archivo en modo escritura
    
    if (fichero.fail()){
        cout<<"Wasn't possible to open file...";
        exit(1);
    }
    while(!fichero.eof()){
        getline(fichero,texto);
        char delimeter = ' ';

        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(texto);
        while (getline(tokenStream, token, delimeter))
        {
            tokens.push_back(token);
        }
        if(tokens.size() > 3){
            UserData.insert({tokens.at(1),tokens.at(3)});
        }
    }
    fichero.close();
}

//Metodo 5----------------------------------------------------------------------
void User::escribir(string name, string nif){
    ofstream fichero;
    fichero.open("users.dat", ios::app); //Abrir el archivo en modo escritura
    
    if (fichero.fail()){
        cout<<"Wasn't possible to open file...";
        exit(1);
    }
    if (UserData.find({name,nif}) == UserData.end()){
        cout << "New Registration Done Correctly!!"<< endl;
        fichero<< "Name " << name << " Nif " << nif << endl;
        fichero.close();
    }
    else{
        cout << "Name or NIF already exist" << endl;
    }
}


//Metodod 6---------------------------------------------------------------------
bool User::operator<(User &other){
    return(this -> name > other.name);
}

ostream &operator<<(ostream &output, User &a){
    cout << "[User's Name: " << a.getname() << "-- User's NIF: " << a.getNif() << "]" << endl;
    return output;
}


