// P016 Captura de Libros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).
//Edgar Constantino
#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string NOMBRES[4];
    std::string AUTOR[4];
    std::string ESTUDIO[4];
    int anio[3];

    for (int i = 0; i <= 2; i++)
    {
        std::cout << "Ingresa el nombre del juego: " << i + 1 << std::endl;
        getline(std::cin, NOMBRES[i]);
        std::cout << "Ingresa el autor del juego: " << i + 1 << std::endl;
        getline(std::cin, AUTOR[i]);
        std::cout << "Ingresa el estudio del juego: " << i + 1 << std::endl;
        getline(std::cin, ESTUDIO[i]);
        std::cout << "Ingresa el año en el que se creo: " << i + 1 << std::endl;
        std::cin, anio[i];
        std::cin.ignore();
    }
 
    for (int j = 0; j <= 2; j++)
    {
        std::cout << "El juego " << j + 1 << " lleva por nombre " << NOMBRES[j] << std::endl;
        std::cout << "El autor/es " << j + 1 << " lleva por nombre " << AUTOR[j] << std::endl;
        std::cout << "El estudio " << j + 1 << " lleva por nombre " << ESTUDIO[j] << std::endl;
        std::cout << "El juego " << j + 1 << " fue publicado en " << anio[j] << std::endl;
    }

}

