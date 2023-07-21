# Introducción
Con esta última práctica se concluye el final del desarrollo del sistema de monitoreo del Inverdadero en donde se crearon diferentes clases en formato .cpp localizados en el fichero src con sus cabeceras .h en el fichero include, el programa principal main.cpp en el fichero build; el diagrama UML, demostración del Depurador GDB, documentación HTML y Latex en el fichero doxygen-doc; y finalemente también se añadió el archivo users.dat para la base datos de los usuarios.

# Descripción de Implementación Realizada
###  Clases
Como se ha ido mencionado en las prácticas anteriores, se crearon 11 clases para el desarrolo del sistema de monitoreo:

1. User: creación del usuario a través de su nombre y el nif, para luego validarlo y autenticarlo.
2. Dashboard: interfaz del sistema de monitoreo para introducir la opción que se desea observar de este.
3. Sensor: Lectura de distintos sensores:
4. AirQ: Simulación de lectura de la calidad del aire del invernadero.
5. Humidity: Simulación de lectura de la humedad del invernader.
6. IlluminationLv: Simulación de lectura de los niveles de iluminación del invernadero.
7. Temperature: Simulación de lectura de la temperatura del invernadero.
8. Camera: Lectura de distintas camaras:
9. Thermic: Simulación de lectura de cámaras térmicas del invernadero.
10. RGB: Simulación de lectura de cámaras RGB del invernadero.
11. InvalidUserException: Excepción a la hora de introducir un usuario inválido o que no tiene permiso para utilizar el sistema de monitoreo.  
En donde estas estarían relacionadas tanto por herencia o por asocición para ayudar en la creación del sistema deseado a través del programa principal main.cpp

### Main
En el main se iniciaron colocando todas las cabeceras de las clases mencionadas anteriormente y unas librerías para poder realizar el programa. Posteriormente, se solicita al usuario a escribir su nombre y nif para crear el usuario y luego utilizar los métodos de la clase User para autenticar y verificar el Usuario para observar si este tiene permitido usar la interfaz o no. Si este tiene los perimsos se corre la clase Dashboard para empezar con la selección de opciones que se quieran realizar del sistema, de lo contrario se corre la clase de InvalidUserException para volver a intentar introducir un usuario que sí tenga permitido usar el sistema de monitoreo.

### Herencia
Ya que se solicitó implementar herencia para el desarrollo de esta práctica y como se fue trabajando en las prácticas anteriores, la herencia que se utilizó fue entre la clase Sensor con las distintas opciones (AirQ, Temperature, Humidity, IlluminationLv) para simular que al momento de escoger una de estas en la interface, hiciera parecer como que dicho sensor está obteniendo los datos; mismo caso para la clase Cámara con la RGB y Thermic.

Para poder realizarse, se definieron en los headers de las clases hijas, que estas podrían utilizar los métodos públicos de las clases padres. Y luego se implementó esto en los .cpp de cada una de las clases hijas para su uso. A continuación se muestra un ejemplo:

Cabecera AirQ.h  
class AirQ: public Sensor{...}  

AirQ.cpp  
void AirQ::readAirQ(){  
readSensorVal();  
}  

### Patrón: Method-Method
Después de observar los posibles patrónes que se podían utilizar de la ppt de Patrones, se optó por utilizar el patrón de Method-Method, ya que, utilizando el ejemplo anterior, el método de readAirQ() está mandando a llamar el método de readSensorVal() y así para los demás tipos de herencia que se realizaron para las otras clases Padre-Hijo. Lo cual simplificaría el programa al momento de llamar los métodos de las clases padres(Camara y Sensor). Creando así los siguientes patrones:

* Sensor()
  * AirQ()
  * Humidity()
  * IlluminationLv()
  * Temperature()
* Camara()
  * RGB()
  * Thermic()
### Base de Datos: Set de pares
Par almacenar los usuarios al sistema se utilizó el template set y sus distintas funciones para observar que la información introducida no se repitiera o si esta se encontraba en la base de datos para ingresar al sistema. Cabe mencionar que no sólo se utilizó un set, sino que fue un set de pares para que esta no solo observara los datos introducidos, sino que observara que el nombre de usuario perteneciera al nif introducido. Y así observar que al introducir un nombre no autorizado pero un nif que ya estuviera conectada a un usuario autorizado, no intentara ingresar de esta forma. Al igual, se utiilizó este método al seleccionar la opción en el dashboard que es para actualizar la base de datos e introducir un nuevo usuario con permiso de usar el sistema de monitoreo.

### Makefile
Por último se creó un makefile que permitiera complirar archivos de C++ y que buscara los archivos de cabeca en la carpeta include, luego que buscara todos los .cpp en la carpeta src para luego crear los archivos .o a partir de ellos y finalmente, ejecurar el main que se encuentra en la carpeta build. Luego se colocaron ciertas reglas para poder correr todo el programa y posterior a ello, se colocó el ejecutable a través de el comando make y el comando ./main. Por último, se colocó un clean para limpiar la carpeta src de los ficheros .o para luego poder volver a correr el comando make si es que se realizó algún cambio en el programa.

# Uso del sistema
1. Primero habrá que correr el Makefile, por lo que sólamente abrá que correr el comando make en una terminar localizada en donde se encuentran todos nuestros programas.
2. Luego, se debe utilizar el comando ./build/main para poder correr el programa.
3. Actualmente, el fichero users.dat ya cuenta con unos usuarios autorizados para correr la simulación, pero se recomienda que para el primer intento, al solicitar un 4. Nombre de usuario se utilice la palabra Rodrigo y para el NIF se utilicé A00827047
Posterior a ello, ya es posible utilizar cualquier opción del dashboard para observar cualquier dato que se quiera revisar o incluso agregar un nuevo usuario a la base de datos para permitirle utilizar el sistema de monitoreo.
### Y con esto se concluye la Práctica de Diseño Software
