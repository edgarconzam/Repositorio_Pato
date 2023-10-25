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
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string pokemon;
    std::string pika2;
    std::string chari2;

    int vidapikachu = 100;
    int vidacharizard = 100;
    bool repetir = true;
    bool continuar;
    int opc;
    int i;
    int n;
    

    system("Color 61");
    
   
        std::cout << "===================================================\n";
        std::cout << "       BIENVENIDO AL ARENA POKEMON\n";
        std::cout << "   Elije un POKEMON; pikachu o charizard\n";

        getline(std::cin, pokemon);
        std::cout << "===================================================\n";

        while (vidapikachu > 0 && vidacharizard > 0)
        {
            if (pokemon == "pikachu")
            {
                std::cout << "Elegiste a " << pokemon << std::endl;
                std::cout << "Te enfrentaras vs charizard\n";
                std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
                std::cout << "   Pikachu " << vidapikachu << "<3\n";
                std::cout << "            \nAtaques: \n1.- 100% golpe 10AT \n2.- 60% le tiras un rayo 40AT \n3.- 5% rayo epico 80AT\n";
                std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
                std::cin >> opc;

                switch (opc)
                {
                case 1:

                    int ataquepikachu = 10;
                    std::cout << pokemon << "ataca a " << "charizard por " << ataquepikachu << "de daño " << std::endl;
                    vidapikachu -= vidacharizard;

                    if (vidacharizard <= 0)
                    {
                        std::cout << "charizard a sido derrotado. Pikachu ha ganado\n";
                    }
                    break;


                case 2:
                    srand(time(NULL));
                    for (i = 1; i == 1; i++)
                    {
                        int ataquepikachu = (rand() % 100);
                        printf("%d\n");
                    }

                    if (ataquepikachu <= 60)
                    {
                        std::cout << pokemon << "ataca a " << "charizard por " << ataquepikachu << "de daño " << std::endl;
                        vidapikachu -= vidacharizard;
                    }
                    else
                    {
                        std::cout << "Fallaste el ataque\n";
                    }

                    break;

                case 3:
                    srand(time(NULL));
                    for (i = 1; i == 1; i++)
                    {
                        int ataquepikachu = (rand() % 100);
                        printf("%d\n");
                    }
                    if (ataquepikachu >= 95)
                    {
                        std::cout << pokemon << "ataca a " << "charizard por " << ataquepikachu << "de daño " << std::endl;
                        vidapikachu -= vidacharizard;
                    }
                    else
                    {
                        std::cout << "Fallaste el ataque\n";
                    }
                    break;
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
                    std::cin >> opc;

                    switch (opc)
                    {
                    case 1:
                        std::cout << "Le quitaste 10 de vida a pikachu\n";
                        break;

                    case 2:
                        srand(time(NULL));
                        for (i = 1; i == 1; i++)
                        {
                            n = (rand() % 100);
                            printf("%d\n");
                        }
                        if (n <= 60)
                        {
                            std::cout << "Le quitaste 40 de vida a pikachu\n";
                        }
                        else
                        {
                            std::cout << " Fallaste el numero\n";

                        }
                        break;

                    case 3:
                        srand(time(NULL));
                        for (i = 1; i == 1; i++)
                        {
                            n = (rand() % 100);
                            printf("%d\n");
                        }
                        if (n >= 95)
                        {
                            std::cout << "Le quitaste 80 de vida a pikachu\n";
                        }
                        else
                        {
                            std::cout << "Fallaste el ataque\n";
                        }
                        break;
                    }
                }
            }


        }
        

        
        system("cls");
    
}
