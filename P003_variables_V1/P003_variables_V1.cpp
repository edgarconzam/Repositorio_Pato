// P003_Variables_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Edgar Constantino
// Este programa tendra impresion de pantalla.
// Creacion de variables
// Inicializacion de variables
// Solicitud de variables al usuario
//                                                            

#include <iostream>

int main()
{
    // variables creacion
    // tipo de variable "nombre de la variable" = 
    bool mi_primer_boleano = true;
    int mi_primer_entero = 0;
    float mi_primer_flotante = 0.0;
    char mi_primer_caracter = 'a';
    char mi_primer_cadenacaracteres[100] = "hola vato";
    std::string mi_primer_string = "alo chavalitos";

    //Mostrarle al usuario lo que creamos de variables
    std::cout << "Muy buenos días Mau espero estes bien\n";
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_boleano << std::endl;
    std::cout << "En el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    std::cout << "En el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    std::cout << "En el caracter tienes guardado: " <<
        mi_primer_caracter << std::endl;
    std::cout << "En la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    std::cout << "En el string tienes guardado: " <<
        mi_primer_string << std::endl;

    //Solicitar al usuario cambios
    std::cout << "usuario dame por favor un 0 o 1;" <<
        std::endl;
    std::cin >> mi_primer_boleano;
    std::cout << "En el booleano tienes guardado: " <<
        mi_primer_boleano << std::endl;
    //Solicitar al usuario cada una de las variables
    std::cout << "usuario dame un -1 a 1;" <<
        std::endl;
    std::cin >> mi_primer_entero;
    std::cout << "en el entero tienes guardado: " <<
        mi_primer_entero << std::endl;
    //solicitar flotante
    std::cout << "usuario dame un numero 0.0 al 10.00;" <<
        std::endl;
    std::cin >> mi_primer_flotante;
    std::cout << "en el flotante tienes guardado: " <<
        mi_primer_flotante << std::endl;
    //solicitar caracter
    std::cout << "usuario dame un caracter de la a a la z;" <<
        std::endl;
    std::cin >> mi_primer_caracter;
    std::cout << "en el caracter tienes guardado un: " <<
        mi_primer_caracter << std::endl;
    //solicita una cadena de caracteres
    std::cout << "usuario dame un texto;" <<
        std::endl;
    std::cin >> mi_primer_cadenacaracteres;
    std::cout << "en la cadena tienes guardado: " <<
        mi_primer_cadenacaracteres << std::endl;
    // solicita el string
    std::cout << " usuario dame una oracion;" <<
        std::endl;
    std::cin >> mi_primer_string;
    std::cout << "en el string tienes guardado: " <<
        mi_primer_string << std::endl;



    //realizar operaciones
    float a, b, c, d, e, f, g, h, i, j;
    a = 10;
    b = 5;
    c = a / b;
    d = a + b;
    e = a - b;
    f = a * b;
    g = sqrt(a);
    h = sqrt(b);
    i = pow(a, b);


    std::cout << "el resultado de la division es: " << c << std::endl;
    std::cout << "elresultado de la suma es: " << d << std::endl;
    std::cout << "el resultado de la resta es: " << e << std::endl;
    std::cout << "el resultado de la multiplicacion es: " << f << std::endl;
    std::cout << "el resultado de la raiz de a es: " << g << std::endl;
    std::cout << "el resultado de la raiz de b es: " << h << std::endl;
    std::cout << "el resultado de la potencia de a elevada a la b es: " << i << std::endl;









}
