// ProyectoMate.cpp 
// Tony Suarez
// En este programa de recompensas les mostrare las posibilidades de que hayas ganado y si lo hiciste o no 
// Todo esto mediante probabilidad simple, dependencia e independencia
// Utilizando cuando se requiere la interseccion (Regla de la multiplicacion)

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <algorithm> 

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Definir las canicas en la bolsa
    std::vector<std::string> bolsaDeCanicas = { "roja", "roja", "roja", "verde", "amarilla", "amarilla" };

    // Barajar las canicas en la bolsa
    std::random_shuffle(bolsaDeCanicas.begin(), bolsaDeCanicas.end());

    std::cout << "Bienvenido al minijuego de sacar canicas rojas" << std::endl;
    std::cout << "En la bolsa hay 3 canicas rojas, 1 verde y 2 amarillas." << std::endl;

    char jugarNuevamente;
    do {
        int canicasRojasSacadas = 0;

        // Ciclo do-while para que el usuario intente sacar las 3 canicas rojas seguidas
        do {
            std::cout << "Presiona 's' para sacar una canica de la bolsa: ";
            char opcion;
            std::cin >> opcion;

            if (opcion == 's' || opcion == 'S') {
                // Sacar una canica de la bolsa
                std::string canicaSacada = bolsaDeCanicas.back();
                bolsaDeCanicas.pop_back();

                std::cout << "Has sacado una canica " << canicaSacada << std::endl;

                // Verificar si la canica sacada es roja
                if (canicaSacada == "roja") {
                    canicasRojasSacadas++;

                    if (canicasRojasSacadas == 3) {
                        std::cout << "¡Ganaste! Has sacado las 3 canicas rojas seguidas." << std::endl;
                        break;
                    }
                }
                else {
                    std::cout << "Perdiste. No has sacado las 3 canicas rojas seguidas." << std::endl;
                    break;
                }
            }
            else {
                std::cout << "Opción no válida. Presiona 's' para sacar una canica." << std::endl;
            }
        } while (true);

        std::cout << "¿Quieres jugar de nuevo? (y/n): ";
        std::cin >> jugarNuevamente;
    } while (jugarNuevamente == 'y');

    std::cout << "Gracias por jugar. ¡Hasta luego!" << std::endl;

    return 0;
}