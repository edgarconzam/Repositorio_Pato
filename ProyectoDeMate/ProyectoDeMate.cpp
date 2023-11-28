// ProyectoDeMate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Cosntantino

#include <iostream>
#include <windows.h>
#include <locale.h>
#include <ctime>
#include <cstdlib>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm> 

int lanzarMoneda() {
    return rand() % 2; // Devuelve 0 (cara) o 1 (cruz)
}

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    srand(static_cast<unsigned int>(time(nullptr)));

    bool repetir;
    do {
        int minijuego;

        std::cout << "Bienvenido al casinito donde podrás jugar tres minijuegos, elige uno." << std::endl;
        std::cout << "1.-CoinFlip (un lanzamiento) 2.-CoinFlip (dos lanzamientos) 3.-Bolsa De Canicas" << std::endl;
        std::cin >> minijuego;

        switch (minijuego) {
        case 1: {
            char jugarNuevamente;
            std::cout << "Bienvenido al juego de cara o cruz de un lanzamiento." << std::endl;

            do {
                int eleccionUsuario;

                std::cout << "Elige tu apuesta (0 para cara, 1 para cruz): ";
                std::cin >> eleccionUsuario;

                int resultado = lanzarMoneda();

                std::cout << "Resultado del lanzamiento: ";
                if (resultado == 0) {
                    std::cout << "Cara" << std::endl;
                }
                else {
                    std::cout << "Cruz" << std::endl;
                }

                if (resultado == eleccionUsuario) {
                    std::cout << "Ganaste!" << std::endl;
                    std::cout << "Tenias un " << 0.5 * 100 << "% de acertar, debido a que solo hay dos opciones con la misma probabilidad." << std::endl;
                    std::cout << "Esto se conoce como Probabilidad simple." << std::endl;
                }
                else {
                    std::cout << "Perdiste" << std::endl;
                    std::cout << "Tenias un " << 0.5 * 100 << "% de acertar, debido a que solo hay dos opciones con la misma probabilidad." << std::endl;
                    std::cout << "Esto se conoce como Probabilidad simple." << std::endl;
                }

                std::cout << "Quieres jugar de nuevo? (y/n): ";
                std::cin >> jugarNuevamente;
                system("cls");
            } while (jugarNuevamente == 'y');
            break;
        }
        case 2: {
            char jugarNuevamente;
            std::cout << "Bienvenido al minijuego de cara o cruz con dos lanzamientos" << std::endl;

            do {
                int eleccionUsuario1, eleccionUsuario2;

                std::cout << "Elige tu apuesta para el primer lanzamiento (0 para cara, 1 para cruz): ";
                std::cin >> eleccionUsuario1;

                std::cout << "Elige tu apuesta para el segundo lanzamiento (0 para cara, 1 para cruz): ";
                std::cin >> eleccionUsuario2;

                int resultado1 = lanzarMoneda();
                int resultado2 = lanzarMoneda();

                std::cout << "Resultado del primer lanzamiento: " << (resultado1 == 0 ? "Cara" : "Cruz") << std::endl;
                std::cout << "Resultado del segundo lanzamiento: " << (resultado2 == 0 ? "Cara" : "Cruz") << std::endl;

                if (resultado1 == eleccionUsuario1 && resultado2 == eleccionUsuario2) {
                    std::cout << "Ganaste!" << std::endl;
                    std::cout << "Tenias un " << (0.25 * 0.25) * 100 << "% de acertar, esto es porque al tirar un dado tienes un 0.5 de probabilidad de sacar ambos lados " << std::endl;
                    std::cout << " y para saber que probabilidad hay para sacar los lados que elegiste de los dos lanzamientos tienes que multiplicar (0.5*0.5) * 100 que nos da 25" << std::endl;
                    std::cout << "Esto se le llama probabilidad dependencia" << std::endl;
                }
                else {
                    std::cout << "Perdiste" << std::endl;
                    std::cout << "Tenias un " << (0.25 * 0.25) * 100 << "% de acertar, esto es porque al tirar un dado tienes un 0.5 de probabilidad de sacar ambos lados " << std::endl;
                    std::cout << " y para saber que probabilidad hay para sacar los lados que elegiste de los dos lanzamientos tienes que multiplicar (0.5*0.5) * 100 que nos da 25" << std::endl;
                    std::cout << "Esto se le llama probabilidad independiente" << std::endl;
                }

                std::cout << "Quieres jugar de nuevo? (y/n): ";
                std::cin >> jugarNuevamente;
            } while (jugarNuevamente == 'y');
            break;

        case 3:
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

        }
        default:
            std::cout << "Opcion no valida. Ingresa un numero del 1 al 3." << std::endl;
            return 1; // Salir con código de error
        }

        std::cout << "Quieres repetir el programa? (1 para sí, 0 para no): ";
        std::cin >> repetir;
        system("cls");
    } while (repetir);

    return 0;
}
