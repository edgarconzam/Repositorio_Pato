// P008_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino


#include <iostream>
using namespace std;


int main()
{
    //Declarar 2 variables a analizar.
    bool seguir = false;
    
    //El que se ejecutara si o si 1 vez - Do While
    do
    {
        cout << "Entraste al do-while...0.-No\n1.-Si\n";
        cin >> seguir;
    } while (seguir);
   
    for (int i = 0; i <= 100; i = i + 1)
    {
        cout << "El contador va en: " << i;
        cout << endl;

    }

}






 