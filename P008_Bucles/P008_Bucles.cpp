// P008_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino


#include <iostream>
using namespace std;


int main()
{
    int a = 1;
    bool seguir = true;

    while (seguir)
    {
        cout << "se hara una cuenta del 1 al 10 :D\n";

        do
        {
            cout << a << endl;
            a++; //aumenta el iterador de uno en uno
        } 
        while (a <= 10);
        {

        

        cout << "Repetimos la cuenta? 0.- No  1.- Si\n";
        cin >> seguir;
        }

        system("cls");
        
    }
    
}

 