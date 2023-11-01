// P016 Captura de Libros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).
//Edgar Constantino
#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string juego[3];
    int anio[3];
    std::string autor[3];
    std::string estudio[3];

    for (int i = 0; i <= 2; i++)
    {
        std::cout << "Ingresa el nombre del juego: ";
        getline(std::cin, juego[i]);
        std::cout << "Ingresa el año en el que se creo: ";
        std::cin, anio[i];
        std::cout << "Ingresa el autor del juego: ";
        std::cin.ignore();
        getline(std::cin, autor[i]);
        std::cout << "Ingresa el estudio del juego: ";
        getline(std::cin, estudio[i]);

    }
 
    for (int j = 0; j <= 2; j++)
    {
        std::cout << "El juego " << j + 1 << " se llama " << juego[j] << std::endl;
        std::cout << "Año del juego " << j + 1 << " se creo en el año " << juego[j] << std::endl;
        std::cout << "El autor del juego " << j + 1 << " es " << juego[j] << std::endl;
        std::cout << "El estudio del juego " << j + 1 << " es " << juego[j] << std::endl;
    }

}

