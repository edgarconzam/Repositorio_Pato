// P004_EntradaSalida_V0.cpp : 
// Edgar Constantino
// Realizar un consultorio médico el cual solicite 3 bool 2 string 1 char 2 int 1 float
//Al final te entrega tu IMC.
//

#include <iostream>
#include <locale.h>
#include <string>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool sintoma1, sintoma2, sintoma3;
    std::string Nombre;
    std::string Relato;
    char sexo;
    int edad;
    int peso;
    float altura;
    float IMC;

    //sacamos el IMC
    std::cout << "Bienvenido al consultorio del dr. chapatin!\n";

    std::cout << "cual es tu nombre?\n";
    getline(std::cin, Nombre);

    std::cout << "que edad tienes?\n";
    std::cin >> edad;

    std::cout << "eres H o M?\n";
    std::cin >> sexo;

    std::cout << "cuanto pesas?\n";
    std::cout << "esribe tu peso en kilos exactos\n";
    std::cin.ignore();
    std::cin >> peso;

    std::cout << "cuanto mides?\n";
    std::cout << "escribe tu altura en metros\n";
    std::cin >> altura;

   
    IMC = peso / pow(altura, 2);
    
    std::cout << "tu IMC es de: " << IMC << std::endl;

    std::cout << "Si tu IMC es menos de 18.5, se encuentra dentro del rango de peso insuficiente\n";
    std::cout << "si su IMC es entre 18.5 y 24.9, se encuentra dentro del rango de peso normal o saludable\n";
    std::cout << "si su IMC es entre 25 y 29.9, se encuentra dentro del rango de sobrepeso\n";
    std::cout << "si su IMC es 30 o superior, se encuentra dentro del rango de obesidad\n";





    //preguntamos por sintomas
   
    std::cout << Nombre;
    std::cout << " cuentame que es lo que ha estado pasando\n";
    std::cin.ignore();
    getline(std::cin, Relato);

    std::cout << "has tenido temperatura?\n";
    std::cout << "ingresa 1 para verdadero o 0 para falso\n";
    std::cin >> sintoma1;

    std::cout << "has tenido tos?\n";
    std::cout << "ingresa 1 para verdadero o 0 para falso\n";
    std::cin >> sintoma2;

    std::cout << "has tenido diarrea?\n";
    std::cout << "ingresa 1 para verdadero o 0 para falso\n";
    std::cin >> sintoma3;

    std::cout << "oh.... ya veo. Tomate algo de medicina xD\n";

    



}