using namespace std;
#include <unistd.h>
#include <fstream>
#include <stdlib.h>
#include <set>
#include "User.h"
#include "Dashboard.h"

#include "Camera.h"
#include "Sensor.h"

#include "Temperature.h"
#include "Humidity.h"
#include "AirQ.h"
#include "IlluminationLv.h"
#include "RGB.h"
#include "Thermic.h"


int main(){
    system("clear");

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

    while(valid == true){
        Dashboard menu = Dashboard();           //Crea el menu del dashboard
        int option = menu.showMenu();  
 
        if(option == 0){          
            string newName, newNif;
            cout << "New Name: ";
            cin >> newName;
            cout << "New Nif: ";
            cin >> newNif;
            p1.escribir(newName, newNif);
        }
        else if(option == 1){          
            Temperature temp = Temperature();
            temp.readTemp();
        }
        else if(option == 2){
            Humidity humid = Humidity();
            humid.readHumidity();
        }
        else if(option == 3){            
            AirQ airQ = AirQ();
            airQ.readAirQ();
        }
        else if(option == 4){         
            IlluminationLv illumination = IlluminationLv();
            illumination.readIlluminationLv();
        }        
        else if(option == 5){         
            RGB rgb = RGB();
            rgb.readRGB();
        }              
        else if(option == 6){            
            Thermic therm = Thermic();
            therm.readThermic();
        }  
        else if(option == 7){            
            Dashboard exit = Dashboard();
            exit.exit();
            break;
        }
        sleep(5);
        system("clear");

    }
    if (valid == false){
        std::cout << "Error at loging in..." << std::endl;
        system("./main");
    }
}