// P016 Captura de Juegos_V2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Edgar Constantino
// biblioteca de videojuegos con nombre del juego, autor, estudio y ano de creacion

#include <iostream>
#include <locale.h>
#include <string>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::string juego[3];
    std::string autor[3];
    std::string estudio[3];
    int ano[3];
    bool repetir;

    //biblioteca

    while (repetir = true)
    {
       
        for (int i = 0; i <= 2; i++)
        {
            std::cout << "Ingresa el nombre del juego " << i + 1 << "\n";
            std::cin.ignore();
            getline(std::cin, juego[i]);
            std::cout << "Ingresa el autor del juego " << i + 1 << "\n";
            getline(std::cin, autor[i]);
            std::cout << "Ingresa el estudio del juego " << i + 1 << "\n";
            getline(std::cin, estudio[i]);
            std::cout << "Ingresa el año del juego " << i + 1 << "\n";
            std::cin >> ano[i];
            std::cin.ignore();
        }

        //impresion 
      
        for (int j = 0; j <= 2; j++)
        {
            std::cout << "El nombre del " << j + 1 << " juego es " << juego[j] << "\n";
            std::cout << "El autor del " << j + 1 << " juego es " << autor[j] << "\n";
            std::cout << " El estudio del " << j + 1 << " juego es " << estudio[j] << "\n";
            std::cout << "El año en el que fue creado el " << j + 1 << " juego es " << ano[j] << "\n";

        }
        std::cout << "Quieres hacer otra libreria??\n";
        std::cout << "1.-si   0.-no \n";
        std::cin >> repetir;
    }
    return 0;
}

