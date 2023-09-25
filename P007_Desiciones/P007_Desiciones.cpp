// P007_Desiciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constatino
//Hacer un programa que te solicite el numero de peleadores en una arena y te de el número de
//  batallas que se tendrán para obtener a 1 ganador dependiendo del sistema de combate.
//  1.- Royal Rumble 2.- Eliminatoria directa 3.- Grupos, semifinal y final

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    bool numero_peleadores;
    int tipo_pelea;




        std::cout << "Bienvenido al arena!!!\n";
        std::cout << "Dame una de las siguientes dos opciones para elegir el numero de luchadores\n";
        std::cout << "1.- 8 peleadores    0.- 12 peleadores\n";
        std::cin >> numero_peleadores;

        if (numero_peleadores == true)
        {
            std::cout << "escojiste 8 peleadores\n";
            std::cout << "Muy bien ahora dime que sistema de combate te gustaria para esta pelea\n";
            std::cout << "1.- royal rumble  2.- Eliminatoria directa  3.- Grupos, semifinal y final\n";
            std::cin >> tipo_pelea;

            switch (tipo_pelea)

            case 1:
                std::cout << " Elegiste Royal Rumble\n";
                std::cout << " aqui solo hay una ronda, TODOS VS TODOS osea un 1v1v1v1v1v1v1v1\n";

            case 2:
                std::cout << "Elegiste Eliminacion directa\n";
                std::cout << "son 4 jornadas de 1v1, despues el ganador de cada jornada juega vs el ganador de la otra jornada y quedarian 4 peleadores\n";
                std::cout << "y en la segunda jornada"
            

                

      

        }
        else
        {
            std::cout << "escojiste 12 peleadores\n";
            std::cout << "Muy bien ahora dime que sistema de combate te gustaria para esta pelea\n";
            std::cout << "1.- royal rumble  2.- Eliminatoria directa  3.- Grupos, semifinal y final\n";

        }


}

