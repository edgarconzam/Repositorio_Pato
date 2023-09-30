// P008 Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    //Estructuras de Bucle
    //El más peligroso! - While
    //Mientras lo que esté entre parentesis este en Verdadero se ejecutara.
    bool seguir = true;
  
    
    //El que se ejecutara si o si 1 vez - Do While
    do
    {
        std::cout << "Entraste al do-while...0.-No\n1.-Si\n";
        std::cin >> seguir;
    } while (seguir);
    //El que tiene mayor control - For
    //1.- inicio; 2.- Limite; 3.- Tamaño de paso.
    //i=i+1 o i++
    for (int i = 0; i <= 100; i = i + 1)
    {
        std::cout << "El contador va en: " << i;
        std::cout << std::endl;
    }
}

