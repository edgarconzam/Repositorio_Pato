// P017 Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Cosntantino 
//Matrices de 3x3, 5x5, 10x10
// con relleno de forma aleatoria del 1 al 10
//

#include <iostream>
#include <Windows.h>
#include <ctime>


int main()
{
    int opc;
    bool repetir;
    int T1 = 100;
    int T2 = 200;
    int T3 = 300;


    do
    {
        std::cout << "Bienvenido al programa de las matrices randoms\n";
        std::cout << "Elige una de estas 3 matrices en la que te pondre numeros randoms dentro de ellas\n";
        std::cout << "1.- [3][3]\n";
        std::cout << "2.- [5][5]\n";
        std::cout << "3.-[10][10]\n";
        std::cin >> opc;

        switch (opc)
        {
        case 1:
        {
            std::cout << "''''''''''''''''''''''''''''''''\n";
            std::cout << "Elegiste la matriz [3][3]\n";
            std::cout << "''''''''''''''''''''''''''''''''\n";
            srand(time(NULL));
            int matriz3[3][3];

            int filas3 = sizeof(matriz3) / sizeof(matriz3[0]);
            int columnas3 = sizeof(matriz3[0]) / sizeof(matriz3[0][0]);

            std::cout << "El numero de filas es " << filas3 << "\n";
            std::cout << "El numero de columnas es " << columnas3 << "\n";

            for (int i = 0; i < filas3; i++)
            {
                for (int j = 0; j < columnas3; j++)
                {
                    matriz3[i][j] = rand() % 9;
                    std::cout << matriz3[i][j] << " ";
                    Sleep(T3);
                }
                std::cout << "\n";
            }
            break;
        }
        case 2:
        {
            std::cout << "''''''''''''''''''''''''''''''''\n";
            std::cout << "Elegiste la matriz [5][5]\n";
            std::cout << "''''''''''''''''''''''''''''''''\n";
            srand(time(NULL));
            int matriz5[5][5];

            int filas5 = sizeof(matriz5) / sizeof(matriz5[0]);
            int columnas5 = sizeof(matriz5[0]) / sizeof(matriz5[0][0]);
            std::cout << "El numero de filas es: " << filas5 << "\n";
            std::cout << "El numero de columnas es: " << columnas5 << "\n";

            for (int i = 0; i < filas5; i++)
            {
                for (int j = 0; j < columnas5; j++)
                {
                    matriz5[i][j] = rand() % 9;
                    std::cout << matriz5[i][j] << " ";
                    Sleep(T2);
                }
                std::cout << "\n";
            }
            break;
        }
        case 3:
        {
            std::cout << "''''''''''''''''''''''''''''''''\n";
            std::cout << "Elegiste la matriz [10][10]\n";
            std::cout << "''''''''''''''''''''''''''''''''\n";

            srand(time(NULL));
            int matriz10[10][10];

            int filas10 = sizeof(matriz10) / sizeof(matriz10[0]);
            int columnas10 = sizeof(matriz10[0]) / sizeof(matriz10[0][0]);
            std::cout << "El numero de las filas es: " << filas10 << "\n";
            std::cout << "El numero de las columnass es: " << columnas10 << "\n";

            for (int i = 0; i < filas10; i++)
            {
                for (int j = 0; j < columnas10; j++)
                {
                    matriz10[i][j] = rand() % 9;
                    std::cout << matriz10[i][j] << " ";
                    Sleep(T1);
                }
                std::cout << "\n";
            }
            break;
        }


        }
        std::cout << "Quieres repetir el programa?\n";
        std::cout << "1.-SI  0.-NO\n";
        std::cin >> repetir;
        system("cls");

    } while (repetir == true);
}

