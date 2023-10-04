// P011_Condicionales_AdivinaQue.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Adivina que deporte
//Edgar Constantino
//deportes:
//1.- Futbol 2.- Baloncesto 3.- Tenis 4.- futbol americano 5.-pingpong 6.-golg 7.-boxeo 8.-voleyball 9.-MMA 10.-Beisball 11.-Natacion 12.-Ajedrez

#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool opc;
    bool seguir = true;


    while (seguir)
    {
        cout << "==============================================================================" << endl;
        cout << "                        Bienvenido al Patonator                               " << endl;
        cout << "                       Elije uno de estos deportes                            " << endl;
        cout << "     1.- Futbol 2.- Baloncesto 3.- Tenis 4.- futbol americano 5.-pingpong     " << endl;
        cout << "   6.-golf 7.-boxeo 8.-voleyball 9.-MMA 10.-Beisball 11.-Natacion 12.-Ajedrez " << endl;
        cout << "         Yo Adivinare el deporte que hayas eligido con algunas preguntas      " << endl;
        cout << "==============================================================================" << endl;
        cout << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "                               Instrucciones:                                 " << endl;
        cout << "                        Presiona *1* para decir SI                            " << endl;
        cout << "                        Presiona *0* para decir NO                            " << endl;
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Tu deporte es de contacto?" << endl;
        cin >> opc;

        if (opc)
        {
            cout << "Tu deporte es de pelea?" << endl;
            cin >> opc;
            if (opc)
            {
                cout << "Tu deporte solo tira puñetazos?" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "**********************************************" << endl;
                    cout << "         Tu deporte es boxeo" << endl;
                    cout << "**********************************************" << endl;
                }
                else
                {
                    cout << "**********************************************" << endl;
                    cout << "           Tu deporte es MMA" << endl;
                    cout << "**********************************************" << endl;
                }
            }
            else
            {
                cout << "Tu deporte usa balon?" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "Tu deporte usa cancha grande?" << endl;
                    cin >> opc;
                    if (opc)
                    {
                        cout << "Tu deporte usa casco?" << endl;
                        cin >> opc;
                        if (opc)
                        {
                            cout << "**********************************************" << endl;
                            cout << "       Tu deporte es el Futbol Americano" << endl;
                            cout << "**********************************************" << endl;
                        }
                        else
                        {
                            cout << "**********************************************" << endl;
                            cout << "        Tu deporte es el futbol" << endl;
                            cout << "**********************************************" << endl;
                        }
                    }
                    else
                    {
                        cout << "**********************************************" << endl;
                        cout << "         Tu deporte es basketball" << endl;
                        cout << "**********************************************" << endl;
                    }
                }
            }
        }
        else
        {
            cout << "Tu deporte usan alguna red para dividir el campo?" << endl;
            cin >> opc;
            if (opc)
            {
                cout << "En tu deporte usan raqueta?" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "Tu deporte se juega en mesa?" << endl;
                    cin >> opc;
                    if (opc)
                    {
                        cout << "**********************************************" << endl;
                        cout << "        Tu deporte es ping pong" << endl;
                        cout << "**********************************************" << endl;
                    }
                    else
                    {
                        cout << "**********************************************" << endl;
                        cout << "          Tu deporte es tenis" << endl;
                        cout << "**********************************************" << endl;
                    }
                }
                else
                {
                    cout << "**********************************************" << endl;
                    cout << "         Tu deporte es voleybol" << endl;
                    cout << "**********************************************" << endl;
                }
            }
            else
            {
                cout << "En tu deporte golpean la pelota con algun palo?" << endl;
                cin >> opc;
                if (opc)
                {
                    cout << "Cuando golpean la pelota, la pelota esta estatica al momento de golpearla?" << endl;
                    cin >> opc;
                    if (opc)
                    {
                        cout << "**********************************************" << endl;
                        cout << "        Tu deporte es el golf" << endl;
                        cout << "**********************************************" << endl;
                    }
                    else
                    {
                        cout << "**********************************************" << endl;
                        cout << "        Tu deporte es beisbol" << endl;
                        cout << "**********************************************" << endl;
                    }
                }
                else
                {
                    cout << "En tu deporte haces actividad fisica?" << endl;
                    cin >> opc;
                    if (opc)
                    {
                        cout << "**********************************************" << endl;
                        cout << "       Tu deporte es natacion" << endl;
                        cout << "**********************************************" << endl;
                    }
                    else
                    {
                        cout << "**********************************************" << endl;
                        cout << "          Tu deporte es el ajedrez" << endl;
                        cout << "**********************************************" << endl;
                    }
                }
            }
        }
        cout << endl;
        cout << "Deseas jugar otra vez? :D" << endl;
        cout << "1.-Si 0.-No" << endl;
        cin >> seguir;
        system("cls");
    }

}
