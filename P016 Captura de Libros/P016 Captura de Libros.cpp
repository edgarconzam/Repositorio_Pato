// P016 Captura de Libros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Guardar Videojuegos en un arreglo Finito (3 juegos por lo menos).
//Edgar Constantino
#include <iostream>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string juego[3] = {"Rocket League ","Fornite ", "Valorant " };
    int anio[3] = { 2015, 2017, 2020 };
    std::string autor[3] = { "Corey Davis ", "Tim Sweeney ", "David Nottingham " };
    std::string estudio[3] = { "Psyonix ", "Epic Games ", "Riot Games " };

    for (int i = 0; i <= 2; i++)
    {
        std::cout << "El juego " << juego[i] << "fue creado en el año " << anio[i] << " por el autor " << autor[i] << "y creado por el estudio " << estudio[i] << std::endl;
    }

}

