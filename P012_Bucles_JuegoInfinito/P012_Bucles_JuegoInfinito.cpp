// P012_Bucles_JuegoInfinito.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino
//Ciclo de juego infinito gastar 3 vidas, preguntar al usuario si quiere continuar
//Contar hasta 100

#include <iostream>
#include <locale.h>

int main()
{
    int contador = 0;
    bool repetir = true;
    bool opc;
    setlocale(LC_ALL, "ES_MX.UTF-8");
   
   while(repetir)
    {
        
        std::cout << "Hola bienvenido a LATAM Dia 1\n";
        std::cout << " Inicias con 3 <3\n";
        std::cout << "Te encuentras con un xolo que te la anda haciendo de pedo..... ¿Que haces?\n";
        std::cout << "1.-Corres 0.-Te haces el valiente y lo enfrentas\n";
        std::cin >> opc;

        if (opc)
        { 
            std::cout << "Que qlo pero inteligente\n";  
            std::cout << "Tienes 3 <3\n";
        }
        else
        {
            std::cout << "El xolo saca su navaja y te picotea\n";
            std::cout << "Te quedan 2 <3\n";
        }
        
        std::cout << "Dia 2\n";
        std::cout << "*Spawneas en la playa de acapulco*\n";
        std::cout << "¿Te metes al mar o te quedas en la arena escuchando las olas?\n";
        std::cout << "1.-Me meto al mar 0.-Me quedo escuchando las olas\n";
        std::cin >> opc;

        if (opc)
        {
            std::cout << "Te metiste al mar y accidentalmente tragas agua y te da una infeccion estomacal muy fuerte y te mueres\n";
            std::cout << "Tienes 1 <3\n";
        }
        else
        {
            std::cout << "yyyyyyyyyyyyyy jaajja le da miedo el mar\n";
        }
        
        std::cout << "¿Deseas repetir?\n";
        std::cout << "1.-Si  0.-No\n";
        std::cin >> repetir;
        system("cls");
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar p