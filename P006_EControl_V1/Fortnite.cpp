// Fortnite.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//PRACTICA usando el IF,ELSE y el SWITCH, CASE

#include <iostream>
#include <string>
int main()
{
    int edad;
    bool orden, orden2;

    std::cout << "hola bienvenido al bar de pato xd\n";
    std::cout << "cuantos anos tienes bro?\n";
    std::cin >> edad;


    if (edad >= 18)
    {
        std::cout << "Pasele entonces caballero\n";

        std::cout << "ya estas listo para ordenar?\n" <<
            "1=si 0=no\n";
        std::cin >> orden;
        if (orden == true)
        {
            int opc = 0;
            std::cout << "que va querer?\n";
            std::cout << "Tenemos \n1.-tecate \n2.-skyye \n3.-michelada\n";
            std::cin >> opc;
            
            switch (opc)
            {
            case 1:
                std::cout << "Entonces seria tecate";
                break;
            case 2:
                std::cout << "Entonces seria skyye";
                break;
            case 3:
                std::cout << "Entonces seria michelada";
                break;
            default:
                std::cout << "No temos eso en el menu jovenazo\n";
            }
            std::cout << " \ndisfrute su bebida";
        
        }
        else
        {
            bool siono;

            std::cout << "les doy 5 minutos mas y vuelvo\n";
            std::cout << "..................\n";
            std::cout << "ya estan listos ahora si o que?\n";
            std::cout << "1=si 0=no\n";
            std::cin >> siono;

            if (siono == true)
            {
                std::cout << "muy bien que seria entonces que vas a querer\n";
                std::cout << "Tenemos \n1.-tecate \n2.-skyye \n3.-michelada\n";
                std::cin >> siono;


                switch (siono)

                {
                case 1:
                    std::cout << "Entonces seria tecate";
                    break;
                case 2:
                    std::cout << "Entonces seria skyye";
                    break;
                case 3:
                    std::cout << "Entonces seria michelada";
                    break;
                default:
                    std::cout << "No temos eso en el menu jovenazo\n";
                }
                std::cout << " \ndisfrute su bebida";
            }
            else
            {
                std::cout << "ah q pues ya pidan algo o los voto alv\n";
            }


        }

    }
    else
    {
        bool opcion1;
        int opc2;

        std::string Juego1 = "Valorant", Juego2 = "COD", Juego3 = "FallGuys";

        std::cout << "hijole jovenazo mejor vayase a jugar fornite\n";
        std::cout << "quieres ir a jugar fortnite?\n";
        std::cout << "\n1.- Si 0.-No\n";
        std::cin >> opcion1;
        if (opcion1 == true)
        {
            std::cout << "Va vamos a jugar un fort bro\n";
            std::cout << "*prendiendo la pc*\n";
            std::cout << "iniciando fortnite\n";
        }
        else
        {
            std::cout << "entonces que quieres jugar bro?\n";
            std::cout << "elige una de estas opciones\n";
            std::cout << "\n1.-Valorant \n2.-COD \n3.-Fallguys\n";
            std::cin >> opc2;

            switch(opc2)
            {
            case 1:
                std::cout << "Dale vamo a subir de rango en " << Juego1;
                    break;
            case 2:
                std::cout << "Vaaa vamos a darle a unos zomies o que " << Juego2;
                break;
            case 3:
                std::cout << "Dale pa ya me meti al " << Juego3;
            default:
                std::cout << "\nahorita no tengo ese juego carnal\n";

            }
        }
     



    }
    
}