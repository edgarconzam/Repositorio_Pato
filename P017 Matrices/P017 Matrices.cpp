// 009_Ciclos_Anidados_V0.cpp : 
// Mau Cabrera
// Este archivo contiene el recorrido de arreglos
// Memoria de los arreglos y el inicio de los arreglos dinámicos

#include <iostream>
#include <windows.h>

int main()
{
    //Le estamos dando el semillero
    srand(time(NULL));
    int unidades[5][4] = { {1,2,3,4},
                            {4,3,2,1},
                            {5,6,7,8},
                            {8,7,6,5},
                            {9,9,9,9} };
    //Formula para saber filas y columnas
    int filas = sizeof(unidades) / sizeof(unidades[0]);
    std::cout << "El num de filas es: " << filas << std::endl;
    int columnas = sizeof(unidades[0]) / sizeof(unidades[0][0]);
    std::cout << "El num de columnas es: " << columnas << std::endl;
    //Ciclo para mostrar la información de la matriz.
    //Ciclo para recorrer las filas.
    for (int i = 0; i < filas; i++)
    {
        //Ciclo dentro para recorrer las columnas.
        for (int j = 0; j < columnas; j++)
        {
            unidades[i][j] = rand() % 9;
            std::cout << unidades[i][j] << " ";
            Sleep(200);
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    std::cout << "\n";
    int a = 0;
    for (int i = 0; i < filas; i++)
    {
        //Ciclo dentro para recorrer las columnas.
        for (int j = 0; j < columnas; j++)
        {
            unidades[i][j] = a;
            a++;
            std::cout << unidades[i][j] << " ";
            Sleep(200);
        }
        std::cout << "\n";
    }
}