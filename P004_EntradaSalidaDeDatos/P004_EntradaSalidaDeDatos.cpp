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
    std::cout << "Bienvenido al consultorio del dr. chapatin!\n";

    std::cout << "cual es tu nombre?\n";
    getline(std::cin, Nombre);

    std::cout << "eres H o M?\n";
    std::cin >> sexo;

    std::cout << "cuentame que es lo que ha estado pasando\n";
    std::cin.ignore();
    getline(std::cin, Relato);

    std::cout << "has tenido temperatura?\n";
    std::cin >> sintoma1;


}