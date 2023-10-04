// P010_Condicionales_login.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Edgar Constantino
//Utilizar las decisiones simples para realizar una comparación de datos - Login en un videojuego.

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");

	string usuario;
	string Password;

	cout << "============================================" << endl;
	cout << "     Bienvenido al valo mi pana" << endl;
	cout << "          Ingresa tus datos" << endl;
	cout << "============================================" << endl;
	do
	{
		cout << "Usuario: " << endl;
		cin >> usuario;

		cout << "Contraseña: " << endl;
		cin >> Password;

		if (usuario == "Pato")
		{
			if (Password == "elpepexd")
			{
				cout << "-------------------------------------" << endl;
				cout << "      Entraste al VALOOOO :D        " << endl;
				cout << "-------------------------------------" << endl;
			}
			else
			{
				cout << "-------------------------------------" << endl;
				cout << "       Intenta nuevamente D:         " << endl;
				cout << "-------------------------------------" << endl;
			}
		}
		else
		{
			cout << "-------------------------------------" << endl;
			cout << "       Intenta nuevamente D:         " << endl;
			cout << "-------------------------------------" << endl;
		}
		//El operador "||" equivale al "OR" u "O inclusivo"; devuelve 
		// "true" si cualquiera de las expresiones evaluadas es "true" o distinta de cero,
		//  en caso contrario devuelve "false" o cero. Si la primera expresión evaluada es "true", la segunda no se evalúa.
		//Mientras usuario sea "Pato" la segundo no se evalua por que la primera es verdadera.
		//El operador no es igual a ( != ) devuelve true
		//  si los operandos no tienen el mismo valor; de lo contrario, devuelve false .
	} while (usuario != "Pato" || Password != "elpepexd");
}


