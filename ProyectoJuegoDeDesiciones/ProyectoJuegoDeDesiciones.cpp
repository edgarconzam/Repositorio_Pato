// ProyectoJuegoDeDesiciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino

#include <string.h>
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");

    std::string personaje1;
    bool opc;


    std::cout << "Bienvenido al modo historia de sueño futbolistico\n";
    std::cout << "Ponle nombre a tu peronaje\n";
    getline(std::cin, personaje1);

    std::cout << "Tu personaje se llama " << personaje1 << "\n";

    std::cout << "Estas a punto de spawnear con 7 años....¿Donde?\n";
    std::cout << "1.-Mexico  0.-España\n";
    std::cin >> opc;

    if (opc)
    {
        std::cout << "Spawneas en una familia de escasos recursos pero son buena onda\n";
        std::cout << "Por lo tanto tienes que batallarle mas a la vida\n";
        std::cout << "Tus padres te meten a una escuela publica donde por primera vez empiezas a jugar al futbol en los recesos\n";
        std::cout << "¿Que posicion eliges?\n";
        std::cout << "1.- Portero  0.-Delantero\n";
        std::cin >> opc;

        if (opc)
        {
            std::cout << personaje1 << " es portero\n";
            std::cout << "*un dia al final del receso se acerca el profesor de educacion fisica que a la vez es el entrenador del equipo\n" << "de futbol de la primaria y te dice..*\n";
            std::cout << "Profesor: oye " << personaje1 << " te vi jugar de portero y la verdad es que tienes muchas cualidades que muchos niños quisieran tener\n";
            std::cout << "¿Quieres entrar al equipo de futbol?\n";
            std::cout << personaje1 << ": " << "si me gustaria pero no tengo dinero para eso profe\n";
            std::cout << "Profesor: no te preoucupes " << personaje1 << " todos los gastos iran por parte nuestra. Ylos entrrenamientos son los dias martes y jueves\n";
        }
        
    }
    else
    {
        std::cout << "Spawneas en una familia con mucha lana\n";
        std::cout << "Tus padres te meten a la mejor academia de futbol de españa\n";
        std::cout << "¿Que posicion eliges?\n";
        std::cout << "1.- Portero  0.-Delantero\n";
        std::cin >> opc;

        if (opc)
        {
            std::cout << personaje1 << " es portero\n";
            std::cout << "*un dia al final del entrenamiento con tu equipo de la academia se acerca tu coach para platicar\n";
            std::cout << "coach: oye " << personaje1 << " te vi jugar de portero y la verdad no la armas y de jugador en cancha mucho menos... No jugaras el partido del sabado\n";
            std::cout << "te tienes que ganar tu lugar\n";
            std::cout << "¿Que haces?....1.-sacas un billete de 1000 euros   0.-Lo mandas a matar\n";
            std::cin >> opc;

            if (opc)
            {
                std::cout << "*sacas un billete de 1000 euros*\n";
                std::cout << "coach: ya lo pense bien y creo que puedes dar buen juego, seras titular los proximos juegos\n";
                std::cout << personaje1 << ": asi megusta coach\n";
            }
            else
            {
                std::cout << personaje1 << ": va, nadamas te digo que si sere titular ya veras\n";
                std::cout << "*lo manda a matar a domicilio*\n";
            }
                

        }
    }
}

