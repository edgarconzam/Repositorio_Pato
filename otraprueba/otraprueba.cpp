// otraprueba.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <algorithm> // Para la función shuffle
#include <ctime>     // Para la función time
#include <string>


int main() {
    // Inicializar la semilla para la generación de números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    // Definir las canicas en la bolsa como un arreglo de strings
    std::string bolsaDeCanicas[] = { "roja", "roja", "roja", "verde", "amarilla", "amarilla" };

    // Barajar las canicas en la bolsa
    std::random_shuffle(std::begin(bolsaDeCanicas), std::end(bolsaDeCanicas));

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
                // Encontrar la primera canica no sacada
                auto it = std::find_if(std::begin(bolsaDeCanicas), std::end(bolsaDeCanicas), [](const std::string& canica) {
                    return !canica.empty();
                    });

                if (it != std::end(bolsaDeCanicas)) {
                    // Sacar la canica de la bolsa
                    std::string canicaSacada = *it;
                    *it = "";

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
            }
            else {
                std::cout << "Opción no válida. Presiona 's' para sacar una canica." << std::endl;
            }
        } while (true);

        std::cout << "¿Quieres jugar de nuevo? (y/n): ";
        std::cin >> jugarNuevamente;
    } while (jugarNuevamente == 'y' || jugarNuevamente == 'Y');

    std::cout << "Gracias por jugar. ¡Hasta luego!" << std::endl;

    return 0;
}
