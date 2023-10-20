// P015 Batalla Pokémon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino
//Simulador de batalla pokemon

#include <iostream>
#include <windows.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
    std::string pokemon;
    std::string pika2;
    std::string chari2;

    int i;
    int opc;
    int vida;
    int ataque;
    bool repetir;
    bool continuar;

    system("Color 61");
    
    while (repetir = true)
    {
        std::cout << "===================================================\n";
        std::cout << "       BIENVENIDO AL ARENA POKEMON\n";
        std::cout << "   Elije un POKEMON; pikachu o charizard\n";
        
        getline(std::cin, pokemon);
        std::cout << "===================================================\n";
        
        if (pokemon == "pikachu")
        {
            std::cout << "Elegiste a " << pokemon << std::endl;
            std::cout << "Te enfrentaras vs charizard\n";
            std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
            std::cout << "   Pikachu 100 <3\n";
            std::cout << "            \nAtaques: \n1.- 100% golpe 10AT \n2.- 60% le tiras un rayo 40AT \n3.- 5% rayo epico 80AT\n";
            std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
            std::cin >> opc;
            
            switch (opc)
            {
            case 1:
                std::cout << "Le bajaste 10\n";
              

            case 2:
                srand(time(NULL));
                for (i = 1; i == 1; i++)
                {
                    printf("%d\n", (rand() % 100) + 1);
                }

                if (i > 60)
                {
                    std::cout << "fallaste el ataque\n";
                }
                else
                {
                    if(i <= 60)
                    {
                        std::cout << "Le bajaste 40\n";
                    }
                }


            }

        }
        else
        {
            if (pokemon == "charizard")
            {
                std::cout << "Elegiste a charizard\n";
                std::cout << "Te enfrentaras vs pikachu\n";
                std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
                std::cout << " Charizard 100<3\n";
                std::cout << " \nAtaques: \n1.-100% golpe 10AT \n2.-60% bola de fuego 40AT \n3.-5% rugido de fuego 80AT\n";
                std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
            }
        }
        
        std::cout << "Quieres jugar otra vez?\n";
        std::cout << "1.-si  0.-no\n";
        std::cin >> repetir;
        std::cin.ignore();
        system("cls");
    }
}
