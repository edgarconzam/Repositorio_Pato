// P008 Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Cosntantino

#include <iostream>

int main()
{
   
    bool seguir = true;


    
    do
    {
        std::cout << "Entraste al do-while...0.-No 1.-Si\n";
        std::cin >> seguir;
    } while (seguir);
    
    for (int i = 0; i <= 100; i = i + 1)
    {
        std::cout << "El contador va en: " << i;
        std::cout << std::endl;
    }
}
