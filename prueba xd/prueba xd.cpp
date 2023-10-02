// P002_Valor_Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//P002_Valor_Absoluto
//Edgar Constantino Zambrano
//Encontrar el valro absoluto de un numero
//Análisis del problema: Para encontrar el valor
// absoluto del número es necesario recordar que para los enteros positivos el valor es el mismo, 
// mientras que para los enteros negativos es necesario cambiarlos de signo.
//Datos de entrada: número
//Datos de salida: valor absoluto



#include <iostream>

int main()
{
    int numero;
    int absoluto;


    std::cout << "Este porgrama determina el valor absoluto de un muero\n";
    std::cout << "Ingresa el numero\n";
    std::cin >> numero;
    absoluto = abs(numero);
    std::cout << "El valor absoulto de " << numero << " es " << absoluto;
    return 0;
}