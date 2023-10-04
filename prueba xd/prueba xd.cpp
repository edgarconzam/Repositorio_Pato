// P011_Condicionales_AdivinaQue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Adivina que deporte
//Edgar Constantino

#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool opc;
    bool seguir = true;

    while (seguir)
    {
        cout << "Bienvenido al juego donde yo trratare de adivinar el deporte que elijas" << endl;
        cout << "Elije uno de estos deportes" << endl;
        cout << "1.- Futbol 2.- Baloncesto 3.- Tenis 4.- futbol americano" << endl;
        cout << "Yo Adivinare el deporte que hayas eligido con algunas preguntas" << endl;
        cout << "Tu deporte es de contacto?" << endl;
        cout << "1.- Si  0.- No" << endl;
        cin >> opc;

        if (opc)
        {
            cout << "Tu deporte se juega con las manos principalmente?" << endl;
            cout << "1.- si 0.-No" << endl;
            cin >> opc;
            if (opc)
            {
                cout << "Tu deporte se juega en cancha grande?" << endl;
                cout << "1.-Si 0.-No" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "Tu deporte es Futbol Americano" << endl;
                }
                else
                {
                    cout << "Tu deporte es el baloncesto" << endl;
                }
            }
            else
            {
                cout << "Tu deporte es el futbol" << endl;

            }
        }
        else
        {
            cout << "tu deporte es de mesa?" << endl;
            cin >> opc;
            if (opc)
            {
                cout << "tu deporte tiene actividad fisica?" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "tu deporte es pingpong" << endl;
                }
                else
                {
                    cout << "tu deporte es ajedrez" << endl;
                }
            }
            else
            {
                cout << "tu deporte es tenis" << endl;
            }
                
            
        }
        cout << "Deseas jugar otra vez? :D" << endl;
        cout << "1.-Si 0.-No" << endl;
        cin >> seguir;
        system("cls");

    }
}
