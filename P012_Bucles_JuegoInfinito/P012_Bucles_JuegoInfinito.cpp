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
       std::cout << "Bienvenido a LATAM *Dia 1*\n";
       std::cout << "Inicias con 3 <3\n";
       std::cout << "Sobrevive 3 dias y ganas\n";
       std::cout << "Te encuentras un cholo con malas intenciones..... que haces?\n";
       std::cout << "1.- Corres  0.-Te hechas un tiro con el\n";
       std::cin >> opc;

       if (opc)
       {
           std::cout << "Sobreviviste\n";
           std::cout << "Tienes 3 <3\n";
           std::cout << "*Spawneas en la playa de Acapulco*\n";
           std::cout << "Que haces?....\n";
           std::cout << "1.-Te quedas escuchando las olas del mar  0.-Te metes a nadar\n";
           std::cin >> opc;
           if (opc)
           {
               std::cout << "Sobreviviste\n";
               std::cout << "Tienes 3 <3\n";
               std::cout << "*Spawneas en la plaza andares*\n";
               std::cout << "Llegan unos narcos a balacear para capturar a un millonario....que haces?\n";
               std::cout << "1.-Te escondes hasta que acabe la balacera  0.-Vas con los narcos a dialogar para que dejen de disparar\n";
               std::cin >> opc;
               if (opc)
               {
                   std::cout << "Felicidades saliste vivo de LATAM\n";
               }
               else
               {
                   std::cout << "Te pegaron un balazo por estorbo pero si pudiste salir de LATAM con 2 <3\n";
                   for (contador = 0; contador <= 100; contador = contador + 1)
                   {
                       std::cout << "El contador va en: " << contador << std::endl;
                   }
               }
           }
           else
           {
               std::cout << "Tragas agua del mar y te da una infeccion muy grave por las aguas negras que desechan y te mueres\n";
               std::cout << "Tienes 2 <3\n";
               for (contador = 0; contador <= 100; contador = contador + 1)
               {
                   std::cout << "El contador va en: " << contador << std::endl;
               }
               std::cout << "Deseas continuar?\n";
               std::cout << "1.-si  0.-no\n";
               std::cin >> opc;

               if (opc)
               {
                   std::cout << "*Spawneas en la plaza andares*\n";
                   std::cout << "Llegan unos narcos a balacear para capturar a un millonario....que haces?\n";
                   std::cout << "1.-Te escondes hasta que acabe la balacera  0.-Vas con los narcos a dialogar para que dejen de disparar\n";
                   std::cin >> opc;
                   if (opc)
                   {
                       std::cout << "Felicidades saliste vivo de LATAM con 2 <3\n";
                   }
                   else
                   {
                       std::cout << "Te pegaron un balazo pero saliste de LATAM con 1 <3\n";
                       for (contador = 0; contador <= 100; contador = contador + 1)
                       {
                           std::cout << "El contador va en: " << contador << std::endl;
                       }
                   }
               }
           }
       }
       else
       {
           std::cout << "El cholo saca su navaja y te picotea\n";
           std::cout << "Tienes 2 <3\n";
           for (contador = 0; contador <= 100; contador = contador + 1)
           {
               std::cout << "El contador va en: " << contador << std::endl;
           }
           std::cout << "Deseas continuar?\n";
           std::cout << "1.-si  0.-no\n";
           std::cin >> opc;

           if (opc)
           {
               std::cout << "*Spawneas en la playa de Acapulco*\n";
               std::cout << "Que haces?....\n";
               std::cout << "1.-Te quedas escuchando las olas del mar  0.-Te metes a nadar\n";
               std::cin >> opc;
               if (opc)
               {
                   std::cout << "Sobreviviste\n";
                   std::cout << "Tienes 2 <3\n";
                   std::cout << "*Spawneas en la plaza andares*\n";
                   std::cout << "Llegan unos narcos a balacear para capturar a un millonario....que haces?\n";
                   std::cout << "1.-Te escondes hasta que acabe la balacera  0.-Vas con los narcos a dialogar para que dejen de disparar\n";
                   std::cin >> opc;
                   if (opc)
                   {
                       std::cout << "Felicidades saliste vivo de LATAM con 2 <3\n";
                   }
                   else
                   {
                       std::cout << "Te pegaron un tiro por estorbar xD\n";
                       std::cout << "De todos modos saliste de LATAM con 1 <3\n";

                       for (contador = 0; contador <= 100; contador = contador + 1)
                       {
                           std::cout << "El contador va en: " << contador << std::endl;
                       }
                   }
               }
               else
               {
                   std::cout << "Tragas agua del mar y te da una infeccion muy grave por las aguas negras que desechan y te mueres\n";
                   std::cout << "Tienes 1 <3\n";
                   for (contador = 0; contador <= 100; contador = contador + 1)
                   {
                       std::cout << "El contador va en: " << contador << std::endl;
                   }
                   std::cout << "Deseas continuar?\n";
                   std::cout << "1.-si  0.-no\n";
                   std::cin >> opc;
                   if (opc)
                   {

                       std::cout << "*Spawneas en la plaza andares*\n";
                       std::cout << "Llegan unos narcos a balacear para capturar a un millonario....que haces?\n";
                       std::cout << "1.-Te escondes hasta que acabe la balacera  0.-Vas con los narcos a dialogar para que dejen de disparar\n";
                       std::cin >> opc;
                       if (opc)
                       {
                           std::cout << "Felicidades saliste vivo de LATAM con 1 <3\n";
                       }
                       else
                       {
                           std::cout << "Te pegaron un balazo y No saliste de LATAM\n";
                           for (contador = 0; contador <= 100; contador = contador + 1)
                           {
                               std::cout << "El contador va en: " << contador << std::endl;
                           }
                       }
                   }
               }
           }
       }

        std::cout << "¿Deseas repetir?\n";
        std::cout << "1.-Si  0.-No\n";
        std::cin >> repetir;
        system("cls");
   }
}

