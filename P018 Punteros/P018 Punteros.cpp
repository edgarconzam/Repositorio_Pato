// P018 Punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar  Constantino

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

void llenarMatrizManualmente(std::vector<std::vector<int>>& matriz) {
    int n = matriz.size();
    int m = matriz[0].size();

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "Ingrese el elemento en la posición [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }
}

void llenarMatrizAleatoriamente(std::vector<std::vector<int>>& matriz) {
    int n = matriz.size();
    int m = matriz[0].size();

    srand(time(0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matriz[i][j] = rand() % 100; // Valores aleatorios entre 0 y 99
        }
    }
}

void mostrarMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int n, m;
    bool repetir = true;
    while (repetir) {


        std::cout << "número de filas: ";
        std::cin >> n;
        std::cout << "número de columnas: ";
        std::cin >> m;

        std::vector<std::vector<int>> matriz(n, std::vector<int>(m));

        bool aleatorio = (n > 3 || m > 3);

        if (aleatorio) {
            llenarMatrizAleatoriamente(matriz);
        }
        else {
            llenarMatrizManualmente(matriz);
        }

        std::cout << "\nLa matriz es:\n";
        mostrarMatriz(matriz);
        std::cout << " ¿Quieres repetir el proceso? \n";
        std::cout << "1. Si  0. No  ";
        std::cin >> repetir;
    }

    return 0;
}