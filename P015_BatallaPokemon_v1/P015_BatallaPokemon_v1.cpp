// P015_BatallaPokemon_v1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino


#include <iostream>
#include <string>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

int main()
{
  


    srand(time(0));


    int saludpikachu = 50;
    int saludcharizard = 50;
    bool repetir;


    std::string pikachu = "pikachu";
    std::string charizard = "charizard";

    
    while (repetir)
    {
        std::cout << "==================================\n";
        std::cout << "BIENVENIDO AL ARENA POKEMON\n";
        std::cout << "==================================\n";


        while (saludpikachu > 0 && saludcharizard > 0)
        {
            std::cout << "------------------------------------------------------------------------------------------------------------\n";
            int ataquepikachu = rand() % 14 + 1;
            std::cout << pikachu << " le tira un rayo a " << charizard << " por " << ataquepikachu << " puntos de ataque" << std::endl;
            std::cout << "------------------------------------------------------------------------------------------------------------\n";
            saludcharizard -= ataquepikachu;

            if (saludcharizard <= 0)
            {
                std::cout << "------------------------------------------------------------------------------------------------------------\n";
                std::cout << charizard << " ha muerto. " << pikachu << " ha ganado la pelea" << std::endl;
                std::cout << "------------------------------------------------------------------------------------------------------------\n";
                break;
            }
            std::cout << "------------------------------------------------------------------------------------------------------------\n";
            int ataquecharizard = rand() % 10 + 1;
            std::cout << charizard << " le tira una bola de fuego a " << pikachu << " por " << ataquecharizard << " puntos de ataque" << std::endl;
            std::cout << "------------------------------------------------------------------------------------------------------------\n";
            saludpikachu -= ataquecharizard;

            if (saludpikachu <= 0)
            {
                std::cout << "------------------------------------------------------------------------------------------------------------\n";
                std::cout << pikachu << " tu pokemon murio. " << charizard << " ganola pelea" << std::endl;
                std::cout << "------------------------------------------------------------------------------------------------------------\n";
                break;
            }

        }
        std::cout << "Quieres jugar otra vez?\n";
        std::cout << "1.-si  0.-no\n";
        std::cin >> repetir;
    }
}